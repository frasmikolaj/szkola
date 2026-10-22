# WinFormsApp1 - Generator Haseł i Dane Pracownika

Prosta aplikacja desktopowa stworzona w języku **C#** z wykorzystaniem technologii **Windows Forms** w środowisku **Visual Studio**. Aplikacja umożliwia wprowadzanie danych pracownika (imię, nazwisko, stanowisko) oraz generowanie bezpiecznego, losowego hasła na podstawie wybranych kryteriów.

## 🚀 Funkcjonalności

* **Wprowadzanie danych pracownika:** Pola tekstowe na imię (`name`), nazwisko (`surname`) oraz stanowisko (`position`).
* **Generator haseł (`btnGenerate`):**
* Pobiera określoną długość hasła z pola `charCount`.
* Pozwala na uwzględnienie wielkich liter (`smallChar` - *uwaga: nazwa kontrolki w kodzie odpowiada wielkim literom/kodom ASCII 65-90*).
* Obsługuje dodawanie cyfr (`numbers`).
* Obsługuje znaki specjalne (`specialChar` zdefiniowane jako `!@#$%^&*()_+-=`).


* **Podsumowanie (`button2`):** Wyświetla okno dialogowe (`MessageBox`) ze wszystkimi wprowadzonymi danymi pracownika oraz wygenerowanym hasłem.

---

## 🛠 Wymagania wstępne

Aby uruchomić i edytować projekt, potrzebujesz:

* **Visual Studio** (zalecana wersja 2019 lub nowsza)
* Zainstalowanego obciążenia **Programowanie aplikacji klasycznych dla platformy .NET** (*.NET desktop development*)
* Platformy **.NET** (zależnie od konfiguracji projektu, np. .NET Framework lub .NET 6/7/8)

---

## 📥 Uruchomienie projektu

1. Sklonuj repozytorium lub pobierz pliki projektu na swój komputer.
2. Otwórz program **Visual Studio**.
3. Wybierz **Otwórz projekt lub rozwiązanie** (*Open a project or solution*) i wskaż plik rozwiązania projektu (`.sln`) lub otwórz folder projektu.
4. W Eksploratorze rozwiązań upewnij się, że projekt jest poprawnie załadowany.
5. Naciśnij przycisk **Start** (zielona strzałka z napisem *Start* lub klawisz `F5`), aby skompilować i uruchomić aplikację.

---

## 💻 Struktura kodu

Główna logika aplikacji znajduje się w pliku `Form1.cs`:

* `btnGenerate_Click`: Odpowiada za algorytm generowania losowego ciągu znaków na podstawie ustawień zaznaczonych w kontrolkach `CheckBox` oraz liczby znaków z pola `charCount`.
* `button2_Click`: Odpowiada za zebranie danych i wyświetlenie ich podsumowania.
