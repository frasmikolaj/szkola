# ⚽ Victoria Ostrzeszów - LCD Arduino Animation

Projekt w środowisku Arduino sterujący wyświetlaczem LCD (16x2) za pomocą biblioteki `Adafruit_LiquidCrystal`. Program wyświetla animacje, motywujące hasła kibicowskie, niestandardowe znaki (piłka, korona) oraz ruchome napisy wspierające klub **Victoria Ostrzeszów**.

---

## 🛠 Wymagania sprzętowe

* Pytka mikrokontrolera zgodna z Arduino (np. **Arduino Uno**, Nano itp.)
* Wyświetlacz LCD 16x2 (współpracujący z biblioteką Adafruit LiquidCrystal, np. podłączony przez I2C lub bezpośrednio w zależności od konfiguracji hardware)
* Przewody połączeniowe

---

## 📚 Wymagane biblioteki

Przed kompilacją upewnij się, że w swoim środowisku (np. Arduino IDE) masz zainstalowane następujące biblioteki:

* `Adafruit_LiquidCrystal`
* `string.h` (biblioteka standardowa C, zazwyczaj wbudowana)

---

## 🚀 Funkcje programu

Program składa się z kilku sekcji animowanych w pętli `loop()`:

* **Własne znaki (Custom Chars):** Zdefiniowane bitmapy przedstawiające **piłkę** (`byte pilka`) oraz **koronę** (`byte korona`).
* **Logo klubu:** Wyświetlanie nazwy "VICTORIA OSTRZESZÓW FC" z migającymi koronami.
* **Przewijanie tekstu (`przewijaj`):** Płynny ruch haseł reklamowych i kibicowskich od prawej do lewej strony górnego wiersza.
* **Doping (`doping`):** Efektowne miganie haseł motywacyjnych na przemian w górnym i dolnym wierszu.
* **Animacja piłki (`pilkaAnimacja`):** Przemieszczająca się ikonka piłki na ekranie LCD.

---

## 📂 Struktura kodu

* **`setup()`**: Inicjalizuje wyświetlacz 16x2, ustawia podświetlenie, wgrywa własne znaki i wyświetla ekran powitalny.
* **`loop()`**: Główna pętla reklamowo-kibicowska, w której odtwarzane po kolei są kolejne sekwencje: logotypy, zaproszenia na mecz, animacje piłki oraz wielki finał.

---

## 💻 Uruchomienie

1. Otwórz plik projektu w **Arduino IDE**.
2. Podłącz płytkę Arduino do komputera.
3. Wybierz odpowiednią płytkę oraz port w menu *Narzędzia (Tools)*.
4. Kliknij przycisk **Wgraj (Upload)**.
