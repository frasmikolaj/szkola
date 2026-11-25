
const int liczbaCzujnikow = 4;

// Kolejność: GÓRNY, PRAWY, DOLNY, LEWY
const int pinyPIR[liczbaCzujnikow] = {13, 11, 10, 12};

const int pinyCzerwone[liczbaCzujnikow] = {9, 7, 5, 3};
const int pinyZielone[liczbaCzujnikow] = {8, 6, 4, 2};

const unsigned long czasPodtrzymania = 5000;

// Kolejka czujników
int kolejka[liczbaCzujnikow];
int poczatekKolejki = 0;
int koniecKolejki = 0;
int liczbaWOgonku = 0;

// Stan czujników
bool wKolejce[liczbaCzujnikow] = {false, false, false, false};
bool poprzedniRuch[liczbaCzujnikow] = {false, false, false, false};

int aktywnyCzujnik = -1;
bool trwaPodtrzymanie = false;
unsigned long czasZakonczeniaRuchu = 0;

void dodajDoKolejki(int czujnik) {
  if (wKolejce[czujnik] || aktywnyCzujnik == czujnik) {
    return;
  }

  if (liczbaWOgonku < liczbaCzujnikow) {
    kolejka[koniecKolejki] = czujnik;
    koniecKolejki = (koniecKolejki + 1) % liczbaCzujnikow;
    liczbaWOgonku++;
    wKolejce[czujnik] = true;
  }
}

int pobierzZKolejki() {
  if (liczbaWOgonku == 0) {
    return -1;
  }

  int czujnik = kolejka[poczatekKolejki];
  poczatekKolejki = (poczatekKolejki + 1) % liczbaCzujnikow;
  liczbaWOgonku--;
  wKolejce[czujnik] = false;

  return czujnik;
}


void ustawSwiatla() {
  for (int i = 0; i < liczbaCzujnikow; i++) {
    if (i == aktywnyCzujnik) {
      // Aktywny czujnik: zielona świeci, czerwona gaśnie
      digitalWrite(pinyCzerwone[i], LOW);
      digitalWrite(pinyZielone[i], HIGH);
    } else {
      // Pozostałe czujniki: czerwona świeci, zielona gaśnie
      digitalWrite(pinyCzerwone[i], HIGH);
      digitalWrite(pinyZielone[i], LOW);
    }
  }
}


void setup() {
  for (int i = 0; i < liczbaCzujnikow; i++) {
    pinMode(pinyPIR[i], INPUT);
    pinMode(pinyCzerwone[i], OUTPUT);
    pinMode(pinyZielone[i], OUTPUT);
  }

  ustawSwiatla();
}

void loop() {
  unsigned long teraz = millis();
  bool ruch[liczbaCzujnikow];

  // Odczyt wszystkich czujników
  for (int i = 0; i < liczbaCzujnikow; i++) {
    ruch[i] = digitalRead(pinyPIR[i]) == HIGH;

    // Dodaj do kolejki przy nowym wykryciu ruchu
    if (ruch[i] && !poprzedniRuch[i]) {
      dodajDoKolejki(i);
    }

    poprzedniRuch[i] = ruch[i];
  }

  // Obsługa aktualnie zielonego czujnika
  if (aktywnyCzujnik >= 0) {
    if (ruch[aktywnyCzujnik]) {
      // Ruch nadal trwa: zerujemy odliczanie
      trwaPodtrzymanie = false;
    } else {
      if (!trwaPodtrzymanie) {
        trwaPodtrzymanie = true;
        czasZakonczeniaRuchu = teraz;
      }

      // Po 5 sekundach zwolnij zielone światło
      if (teraz - czasZakonczeniaRuchu >= czasPodtrzymania) {
        aktywnyCzujnik = -1;
        trwaPodtrzymanie = false;
      }
    }
  }

  // Jeśli nie ma aktywnego czujnika, obsłuż następnego w kolejce
  if (aktywnyCzujnik == -1 && liczbaWOgonku > 0) {
    aktywnyCzujnik = pobierzZKolejki();
    trwaPodtrzymanie = false;
  }

  ustawSwiatla();
}
