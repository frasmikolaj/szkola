
# WinFormsApp2 - System Zapisywania i Odczytu Wyników

Prosta aplikacja desktopowa stworzona w języku **C#** (Windows Forms), która umożliwia zbieranie danych użytkownika (płeć, nick, wiek, informacja o dysfunkcjach), zapisywanie ich do pliku tekstowego oraz dynamiczne wyświetlanie historii wyników w interfejsie.

## 🚀 Funkcjonalności

* **Odczyt danych z pliku (`ReadResults`):**
* Sprawdza, czy plik `wyniki.txt` istnieje w katalogu aplikacji.
* Jeśli plik istnieje, odczytuje jego zawartość i wyświetla ją w kontrolce `Wynik` (z pominięciem ostatniej linii lub w zależności od struktury zapisu).
* Jeśli plik nie istnieje, wyświetla domyślny komunikat (*"Twoje wyniki"*).


* **Zapis formularza (`btnZapisz_Click`):**
* Pobiera płeć użytkownika z przycisków wyboru (`PlecK`, `PlecM`).
* Pobiera pseudonim z pola tekstowego `Nick`.
* Pobiera wiek z kontrolki numerycznej `Wiek`.
* Sprawdza status pola wyboru dysfunkcji `Dysfunkcje`.
* Dopisuje zebrane dane do pliku `wyniki.txt` za pomocą klasy `StreamWriter`.
* Automatycznie odświeża widok wyników po zapisaniu.



---

## 🛠 Wymagania wstępne

* **Visual Studio** (zalecana wersja 2019 lub nowsza)
* Obciążenie **Programowanie aplikacji klasycznych dla platformy .NET** (*.NET desktop development*)
* Platforma **.NET** (np. .NET Framework, .NET 6/7/8)

---

## 📥 Uruchomienie projektu

1. Otwórz projekt w programie **Visual Studio**.
2. Upewnij się, że struktura kontrolek na formularzu (`Form1`) zawiera odpowiednie elementy:
* Kontrolki RadioButton dla płci (`PlecK`, `PlecM`)
* Pole tekstowe dla nicku (`Nick`)
* Kontrolkę liczbową dla wieku (`Wiek`)
* Pole wyboru dla dysfunkcji (`Dysfunkcje`)
* Przycisk zapisu (`btnZapisz`)
* Kontrolkę do wyświetlania tekstu (np. Label lub TextBox) o nazwie `Wynik`.


3. Naciśnij przycisk **Start** (`F5`), aby skompilować i uruchomić aplikację.

---

## 💻 Struktura kodu

Główna logika aplikacji w pliku `Form1.cs`:

* `Form1()` – konstruktor inicjalizujący komponenty oraz wywołujący metodę wczytującą dotychczasowe wyniki.
* `ReadResults()` – odpowiada za bezpieczny odczyt pliku `wyniki.txt` i aktualizację widoku w interfejsie.
* `btnZapisz_Click()` – zbiera dane z formularza i dopisuje je linia po linii do pliku tekstowego.
