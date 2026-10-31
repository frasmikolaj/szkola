# Sterownik Świateł Ruchu z Obsługą Przerwań (Arduino)

Prosty i wydajny projekt na mikrokontroler Arduino, który symuluje system sterowania ruchem (np. na wahadle lub skrzyżowaniu jednopasmowym) za pomocą czujników ruchu i przerwań sprzętowych.


## 🚀 Opis Projektu
Program obsługuje dwa kierunki ruchu. Każdy kierunek posiada własną parę diod (zieloną i czerwoną) oraz czujnik wykrywający ruch. Dzięki zastosowaniu **przerwań sprzętowych (`attachInterrupt`)**, mikrokontroler natychmiast reaguje na sygnały z czujników, co eliminuje opóźnienia wynikające z tradycyjnego odpytywania stanów pinów (`polling`).

---

## 🔌 Schemat Podłączeń (Pinout)

| Komponent | Pin Arduino | Opis |
| :--- | :---: | :--- |
| **Zielone światło 1** | `4` | Wyjście LED dla kierunku 1 |
| **Czerwone światło 1** | `5` | Wyjście LED dla kierunku 1 |
| **Zielone światło 2** | `6` | Wyjście LED dla kierunku 2 |
| **Czerwone światło 2** | `7` | Wyjście LED dla kierunku 2 |
| **Czujnik ruchu 1** | `2` | Wejście przerwania (INT0) dla kierunku 1 |
| **Czujnik ruchu 2** | `3` | Wejście przerwania (INT1) dla kierunku 2 |

---

## ⚙️ Jak to działa?
1. **Stan początkowy:** Po uruchomieniu systemu lub zmianie świateł, oba kierunki mają ustawione czerwone światło (`wszystkieCzerwone()`).
2. **Przerwane wejścia:** Wykrycie ruchu na jednym z czujników ustawia odpowiednią flagę (`ruch1` lub `ruch2`) w funkcji obsługi przerwania (`ISR`).
3. **Pętla główna (`loop`):** Bezpiecznie odczytuje i czyści flagi z użyciem blokady przerwań (`noInterrupts()` / `interrupts()`), a następnie włącza zielone światło dla odpowiedniego kierunku, automatycznie gasząc drugi.

---

## 🛠️ Wymagania
* Płytka Arduino (np. Uno, Nano, Mega posiadająca piny z obsługą przerwań `2` i `3`).
* 2x dioda czerwona, 2x dioda zielona (wraz z rezystorami ograniczającymi prąd ok. 220–330Ω).
* 2x czujnik ruchu / przyciski generujące zbocze narastające (`RISING`).
* Środowisko **Arduino IDE**.

---

## 📦 Instalacja i Uruchomienie
1. Pobierz lub sklonuj niniejsze repozytorium.
2. Otwórz plik projektu w **Arduino IDE**.
3. Podłącz płytkę Arduino do komputera.
4. Wybierz odpowiednią płytkę oraz port w menu *Narzędzia (Tools)*.
5. Wgraj szkic (`Upload`) do mikrokontrolera.

---

## 📝 Licencja
Projekt udostępniany na licencji MIT – możesz go swobodnie modyfikować i wykorzystywać we własnych celach.
