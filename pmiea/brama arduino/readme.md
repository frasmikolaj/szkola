# Projekt: Sterowanie Serwomotorami za pomocą Pilota IR i Czujnika Ruchu PIR (Arduino)

Projekt ten przedstawia oprogramowanie przeznaczone dla mikrokontrolerów Arduino, które realizuje zaawansowane sterowanie dwoma serwomotorami (np. drzwiczkami, bramką lub roletą) przy użyciu pilota na podczerwień (IR) oraz czujnika ruchu PIR.

---


## 🛠 Wymagania Sprzętowe

* Płytka Arduino (np. Arduino Uno / Nano)
* 2x Serwomotor (np. SG90 lub MG996R)
* Odbiornik podczerwieni IR (np. TSOP38238) + Pilot IR
* Czujnik ruchu PIR (np. HC-SR501)
* Dioda LED (wbudowana lub zewnętrzna na pinie 12)
* Przewody połączeniowe i zasilanie odpowiednie dla serwomotorów

---

## 🔌 Schemat Podłączenia (Pinologia)

| Element | Pin w Arduino | Opis / Funkcja |
| --- | --- | --- |
| **Serwomotor 1** | Pin 3 | Sterowanie pozycją pierwszego serwa |
| **Serwomotor 2** | Pin 5 | Sterowanie pozycją drugiego serwa |
| **Odbiornik IR** | Pin 10 | Odczyt sygnałów z pilota (`IR_PIN`) |
| **Czujnik PIR** | Pin 4 | Wykrywanie ruchu (`PIR_PIN`) |
| **Dioda LED** | Pin 12 | Sygnalizacja stanu ruchu systemu |

---

## ✨ Główne Funkcjonalności

* **Płynny ruch serwomotorów:** Pozycje serw zmieniają się stopniowo (co 15 ms), co zapobiega nagłym szarpnięciom mechanicznym.
* **Sterowanie pilotem IR:** Przycisk `POWER` na pilocie zmienia stan systemu w pętli: otwarcie -> zamknięcie -> zatrzymanie.
* **Bezpieczeństwo z czujnikiem PIR:** Jeśli podczas otwierania mechanizmu czujnik PIR wykryje ruch, system automatycznie przełączy się w tryb zamykania.
* **Wielozadaniowość (Non-blocking):** Kod nie używa funkcji `delay()`, dzięki czemu reakcja na pilota i czujnik PIR jest natychmiastowa.

---

## 🔄 Logika Działania i Stany Systemu

Program opiera się na maszynie stanów (*State Machine*):

1. **ZAMKNIETA (0):** Serwa znajdują się w pozycji początkowej (0° i 180°).
2. **OTWIERANIE (2):** Serwa płynnie przesuwają się do pozycji docelowej (90° i 90°).
* *Zabezpieczenie:* Wykrycie ruchu przez czujnik PIR w tym stanie natychmiast inicjuje zamykanie.


3. **OTWARTA (1):** Serwa osiągnęły pozycję docelową.
4. **ZAMYKANIE (3):** Serwa wracają do pozycji początkowej.
5. **ZATRZYMANA (4 / 5):** Naciśnięcie przycisku `POWER` w trakcie ruchu zatrzymuje serwa w aktualnej pozycji. Kolejne wciśnięcie ruszy w przeciwnym kierunku.

---

## 📂 Struktura Kodu

* `setup()` – Inicjalizuje piny serwomotorów, czujnika PIR, diody LED oraz odbiornika IR.
* `loop()` – Główna pętla programu wywołująca cyklicznie:
* `obslugaPIR()` – Sprawdza odczyt z czujnika ruchu.
* `obslugaPilota()` – Odbiera komendy z pilota IR.
* `sterowanieSerwami()` – Odpowiada za płynny ruch serw w czasie (`millis()`).
