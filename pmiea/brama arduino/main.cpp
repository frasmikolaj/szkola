
#include <Servo.h>
#include <IRremote.hpp>

Servo serwo1, serwo2;

#define IR_PIN 10
#define POWER 0x00
#define LED 12
#define PIR_PIN 4

// DEFINICJE STANOW
#define ZAMKNIETA 0
#define OTWARTA 1
#define OTWIERANIE 2
#define ZAMYKANIE 3
#define ZATRZYMANA_OTWIERANIE 4
#define ZATRZYMANA_ZAMYKANIE 5

int pozycja1 = 0, pozycja2 = 180;
int cel1 = 0, cel2 = 180;

int stan = ZAMKNIETA;

bool ruch = false;

unsigned long czas = 0, przycisk = 0;


// STAN ZAMKNIETA
void zamknieta() {
  cel1 = 0;
  cel2 = 180;
  stan = ZAMKNIETA;
  ruch = false;
}


// STAN OTWARTA
void otwarta() {
  cel1 = 90;
  cel2 = 90;
  stan = OTWARTA;
  ruch = false;
}


// STAN OTWIERANIE
void otwieranie() {
  cel1 = 90;
  cel2 = 90;
  stan = OTWIERANIE;
  ruch = true;
}


// STAN ZAMYKANIE
void zamykanie() {
  cel1 = 0;
  cel2 = 180;
  stan = ZAMYKANIE;
  ruch = true;
}


// STAN ZATRZYMANA
void zatrzymanie() {

  if (stan == OTWIERANIE) {
    stan = ZATRZYMANA_OTWIERANIE;
  }
  else if (stan == ZAMYKANIE) {
    stan = ZATRZYMANA_ZAMYKANIE;
  }

  cel1 = pozycja1;
  cel2 = pozycja2;

  ruch = false;
}


// OBSLUGA POWER
void obslugaPower() {

  switch (stan) {

    case ZAMKNIETA:
      otwieranie();
      break;

    case OTWARTA:
      zamykanie();
      break;

    case OTWIERANIE:
    case ZAMYKANIE:
      zatrzymanie();
      break;

    // ZATRZYMANO PODCZAS OTWIERANIA
    // Kolejne klikniecie = ZAMYKANIE
    case ZATRZYMANA_OTWIERANIE:
      zamykanie();
      break;

    // ZATRZYMANO PODCZAS ZAMYKANIA
    // Kolejne klikniecie = OTWIERANIE
    case ZATRZYMANA_ZAMYKANIE:
      otwieranie();
      break;
  }
}


// OBSLUGA PIR
void obslugaPIR() {

  switch (stan) {

    case OTWIERANIE:

      if (digitalRead(PIR_PIN) == HIGH) {
        zamykanie();
      }

      break;

    case ZAMYKANIE:
      // Wykrycie ruchu nic nie robi
      break;

    default:
      // W pozostalych stanach PIR nie reaguje
      break;
  }
}


// STEROWANIE SERWAMI
void sterowanieSerwami() {

  if (!ruch || millis() - czas < 15) return;

  czas = millis();

  if (pozycja1 < cel1) pozycja1++;
  else if (pozycja1 > cel1) pozycja1--;

  if (pozycja2 < cel2) pozycja2++;
  else if (pozycja2 > cel2) pozycja2--;

  serwo1.write(pozycja1);
  serwo2.write(pozycja2);

  if (pozycja1 == cel1 && pozycja2 == cel2) {

    switch (stan) {

      case OTWIERANIE:
        otwarta();
        break;

      case ZAMYKANIE:
        zamknieta();
        break;
    }
  }
}


// ODCZYT PILOTA
void obslugaPilota() {

  if (!IrReceiver.decode()) return;

  if (IrReceiver.decodedIRData.command == POWER &&
      !(IrReceiver.decodedIRData.flags & IRDATA_FLAGS_IS_REPEAT) &&
      millis() - przycisk > 300) {

    przycisk = millis();
    obslugaPower();
  }

  IrReceiver.resume();
}


// SETUP
void setup() {

  serwo1.attach(3);
  serwo2.attach(5);

  pinMode(LED, OUTPUT);
  pinMode(PIR_PIN, INPUT);

  serwo1.write(pozycja1);
  serwo2.write(pozycja2);

  IrReceiver.begin(IR_PIN, ENABLE_LED_FEEDBACK);
}


// LOOP
void loop() {

  obslugaPIR();
  obslugaPilota();
  sterowanieSerwami();

  digitalWrite(LED, ruch);
}
