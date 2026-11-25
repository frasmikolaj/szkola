# WinFormsApp3 - Galeria i Przeglądarka Zdjęć z Licznikiem Polubień

Prosta aplikacja desktopowa stworzona w języku **C#** (Windows Forms), która umożliwia przeglądanie zdjęć (w tym dodawanie własnych plików z dysku), nawigację między nimi oraz zliczanie polubień dla każdego zdjęcia osobno.

## 🚀 Funkcjonalności

* **Inicjalizacja startowa:**
* Wartości startowe łablują dwie domyślne ścieżki zdjęć (`Zdjecia\zdjecie1.jpg` oraz `Zdjecia\zdjecie2.jpg`).
* Licznik polubień dla obu zdjęć jest ustawiany na `0`, a pierwsze zdjęcie jest wyświetlane w trybie dopasowania `Zoom`.


* **Dodawanie nowych zdjęć (`button3`):**
* Otwiera okno dialogowe (`OpenFileDialog`) filtrowane do plików w formacie JPG (`*.jpg`).
* Pozwala na wgranie nowych zdjęć do galerii, automatycznie przypisując im początkową wartość `0` polubień oraz przełączając widok na ostatnio dodane zdjęcie.


* **Nawigacja po galerii:**
* Przycisk Wstecz / Poprzednie (`button1`): Przechodzi do poprzedniego zdjęcia w liście (z zapętleniem na koniec kolekcji).
* Przycisk Dalej / Następne (`button2`): Przechodzi do kolejnego zdjęcia (z zapętleniem na początek kolekcji).
* Automatycznie aktualizuje wyświetlaną liczbę polubień dla aktualnie wybranego zdjęcia.


* **System polubień (`Polub_Click`):**
* Zwiększa licznik polubień dla aktualnie wyświetlanego zdjęcia o `1` po kliknięciu przycisku polubienia.



---

## 🛠 Wymagania wstępne

* **Visual Studio** (zalecana wersja 2019 lub nowsza)
* Obciążenie **Programowanie aplikacji klasycznych dla platformy .NET** (*.NET desktop development*)
* Platforma **.NET** (np. .NET Framework, .NET 6/7/8)
* Folder o nazwie `Zdjecia` w katalogu projektu zawierający przykładowe pliki (`zdjecie1.jpg`, `zdjecie2.jpg`), aby aplikacja nie zgłaszała błędu braku pliku przy uruchomieniu.

---

## 📥 Uruchomienie projektu

1. Otwórz projekt w programie **Visual Studio**.
2. Upewnij się, że kontrolki na formularzu (`Form1`) posiadają odpowiednie nazwy:
* `pictureBox1` (do wyświetlania grafiki)
* `labelPolubienia` (do pokazywania liczby polubień)
* Przyciski nawigacyjne oraz przycisk polubienia (`Polub`)


3. Skompiluj i uruchom aplikację za pomocą przycisku **Start** (`F5`).

---

## 💻 Struktura kodu

Główna logika aplikacji w pliku `Form1.cs`:

* Listy `zdjecia` i `polubienia` – przechowują odpowiednio ścieżki do plików graficznych oraz liczbę polubień przypisaną do każdego indeksu.
* `button3_Click` – obsługa okna wyboru plików i rozszerzania kolekcji zdjęć w czasie rzeczywistym.
* `button1_Click` / `button2_Click` – mechanizm karuzeli (przeglądania w przód i w tył z zabezpieczeniem przed wyjściem poza zakres).
* `Polub_Click` – inkrementacja licznika polubień dla aktywnego indeksu.
