# 🧮 Arduino Keypad Calculator

Prosty, a zarazem w pełni funkcjonalny kalkulator oparty na platformie **Arduino**, wykorzystujący klawiatury membranowe (4x4) oraz ekran LCD (16x2) sterowany przez interfejs I2C.

---

## 🚀 Funkcje programu
- **Podstawowe operacje arytmetyczne:** Dodawanie (`+`), odejmowanie (`-`), mnożenie (`*`) oraz dzielenie (`/`).
- **Obsługa liczb zmiennoprzecinkowych:** Wyniki dzielenia i innych operacji są poprawnie obsługiwane i formatowane.
- **Zabezpieczenie przed błędem:** Wykrywanie i blokowanie dzielenia przez zero z odpowiednim komunikatem na wyświetlaczu.
- **Tryb ciągłych obliczeń:** Po uzyskaniu wyniku możesz kontynuować działania na otrzymanej wartości (jako pierwszej liczbie).
- **Resetowanie:** Klawisz `*` służy do natychmiastowego wyczyszczenia pamięci kalkulatora i rozpoczęcia nowego działania.

---

## 🛠️ Wymagane komponenty
1. **Płytka Arduino** (np. Arduino Uno / Nano / Mega)
2. **Klawiatura membranowa 4x4**
3. **Wyświetlacz LCD 16x2** z modułem konwertera I2C
4. **Przewody połączeniowe** (kabelki męsko-męskie / żeńsko-męskie)
5. **Płytka stykowa (Breadboard)** (opcjonalnie)

---

## 📦 Wymagane biblioteki
Do poprawnego skompilowania projektu potrzebujesz następujących bibliotek (możesz je zainstalować przez **Menedżer Bibliotek** w Arduino IDE):
- `Adafruit_LiquidCrystal` (lub standardowa `LiquidCrystal_I2C`, dostosowana do wybranego ekranu)
- `Keypad` (autorstwa Marka Stanley, Alexander Brevig)

---

## 🔌 Schemat podłączenia (Pinout)

### 1. Klawiatura 4x4 (Piny cyfrowe Arduino)
| Klawiatura (Pin) | Arduino (Pin cyfrowy) |
| :--- | :--- |
| Wiersz 1 (Row 1) | Pin 2 |
| Wiersz 2 (Row 2) | Pin 3 |
| Wiersz 3 (Row 3) | Pin 4 |
| Wiersz 4 (Row 4) | Pin 5 |
| Kolumna 1 (Col 1) | Pin 6 |
| Kolumna 2 (Col 2) | Pin 7 |
| Kolumna 3 (Col 3) | Pin 8 |
| Kolumna 4 (Col 4) | Pin 9 |

### 2. Wyświetlacz LCD 16x2 (I2C)
| Moduł I2C | Arduino (Uno/Nano) |
| :--- | :--- |
| **SCL** | Pin A5 |
| **SDA** | Pin A4 |
| **VCC** | 5V |
| **GND** | GND |

---

## 🕹️ Sterowanie (Mapa klawiszy)
- **`0` – `9`** : Wprowadzanie cyfr (pierwsza i druga liczba).
- **`A`** : Dodawanie (`+`)
- **`B`** : Odejmowanie (`-`)
- **`C`** : Mnożenie (`*`)
- **`D`** : Dzielenie (`/`)
- **`#`** : Oblicz wynik (`=`)
- **`*`** : Reset / Wyczyszczenie ekranu (Clear)

---

## 📝 Szybki start
1. Pobierz lub sklonuj repozytorium.
2. Otwórz plik `.ino` w programie **Arduino IDE**.
3. Upewnij się, że masz zainstalowane wymagane biblioteki (`Keypad` oraz `Adafruit_LiquidCrystal`).
4. Podłącz Arduino do komputera, wybierz odpowiednią płytkę oraz port w ustawieniach Arduino IDE.
5. Wgraj kod (`Upload`) na mikrokontroler.

---

## 📜 Licencja
Projekt udostępniany na licencji **MIT** – możesz go swobodnie modyfikować, ulepszać i wykorzystywać do własnych celów edukacyjnych lub hobbystycznych.
