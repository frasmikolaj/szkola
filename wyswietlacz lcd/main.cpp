
#include <Adafruit_LiquidCrystal.h>
#include <string.h>

Adafruit_LiquidCrystal lcd(7);

byte pilka[8] = {
  B00100,
  B01110,
  B11111,
  B10101,
  B11111,
  B01110,
  B00100,
  B00000
};

byte korona[8] = {
  B10101,
  B11111,
  B01110,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000
};

// PRZEWIJANIE OD PRAWEJ DO LEWEJ
void przewijaj(const char* tekst, int speed) {

  int dlugosc = strlen(tekst);

  for (int krok = 0; krok < dlugosc + 16; krok++) {

    lcd.setCursor(0, 0);

    for (int kolumna = 0; kolumna < 16; kolumna++) {

      int pozycja = kolumna - (16 - krok);

      if (pozycja >= 0 && pozycja < dlugosc) {
        lcd.write(tekst[pozycja]);
      } else {
        lcd.print(" ");
      }
    }

    lcd.setCursor(0, 1);
    lcd.print(" DO BOJU VICTA! ");

    delay(speed);
  }
}

// DOPING
void doping(const char* gora, const char* dol) {

  for (int i = 0; i < 5; i++) {

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print(gora);

    lcd.setCursor(0, 1);
    lcd.print(dol);

    delay(400);

    lcd.clear();
    delay(150);
  }
}

// LOGO
void logo() {

  for (int i = 0; i < 6; i++) {

    lcd.clear();

    lcd.setCursor(2, 0);
    lcd.write(byte(1));
    lcd.print(" VICTORIA ");
    lcd.write(byte(1));

    lcd.setCursor(1, 1);
    lcd.print("OSTRZESZOW FC");

    delay(450);
  }
}

// ANIMACJA PIŁKI
void pilkaAnimacja() {

  for (int i = 0; i < 16; i++) {

    lcd.clear();

    lcd.setCursor(i, 0);
    lcd.write(byte(0));

    lcd.setCursor(0, 1);
    lcd.print("DO BOJU VICTA!");

    delay(180);
  }
}

// GŁÓWNY START
void setup() {

  lcd.begin(16, 2);
  lcd.setBacklight(1);

  lcd.createChar(0, pilka);
  lcd.createChar(1, korona);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("VICTORIA OSTRZ");

  lcd.setCursor(0, 1);
  lcd.print("ZESZOW!!!");

  delay(2000);
}

// REKLAMA
void loop() {

  // LOGO KLUBU
  logo();

  // ZAPROSZENIE
  przewijaj("ZAPRASZAMY NA MECZ VICTORII OSTRZESZOW!!!", 180);

  // DOPING
  doping("DO BOJU VICTA!", "DO BOJU VICTA!");

  przewijaj("CALY OSTRZESZOW KIBICUJE!", 170);

  doping("JEDEN KLUB!", "TYSIACE SERC!");

  // PIŁKA
  pilkaAnimacja();

  // KOLEJNE HASŁA
  przewijaj("VICTORIA OSTRZESZOW - NASZA DUMA!", 160);

  doping("WALCZYC! GRAC!", "VICTA MUSI WYGRAC!");

  przewijaj("NIECH ZYJE VICTORIA!", 170);

  // WIELKI FINAŁ
  for (int i = 0; i < 10; i++) {

    lcd.clear();

    if (i % 2 == 0) {

      lcd.setCursor(1, 0);
      lcd.print("VICTORIA!!!");

      lcd.setCursor(1, 1);
      lcd.print("DO BOJU!!!");

    } else {

      lcd.setCursor(0, 0);
      lcd.write(byte(1));
      lcd.print(" VICTA FOREVER");

      lcd.setCursor(1, 1);
      lcd.print("OSTRZESZOW FC!");
    }

    delay(400);
  }

  doping("VICTORIA!!!", "NASZA DUMA!!!");
}
