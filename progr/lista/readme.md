# Wczytywanie i obsługa jednokierunkowej listy w C++

Prosty program dydaktyczny w języku C++, który demonstruje podstawowe operacje na **dynamicznej liście jednokierunkowej** (struktura typu pociąg/wagoniki). Program wczytuje liczby całkowite z zewnętrznego pliku tekstowego, zapisuje je do listy, wyświetla na ekranie, a na koniec poprawnie zwalnia zajętą pamięć RAM.

---

## 🛠️ Wymagania wstępne
* Kompilator obsługujący standard C++ (np. GCC/MinGW, Clang, MSVC).
* Plik tekstowy o nazwie **`liczby.txt`** umieszczony w tym samym katalogu co plik wykonywalny programu. Plik powinien zawierać liczby całkowite oddzielone spacjami lub nowymi liniami.

---

## 🚀 Jak uruchomić program?

1. **Sklonuj lub pobierz** pliki projektu na swój komputer.
2. Utwórz w folderze z programem plik tekstowy `liczby.txt` i wpisz w nim kilka liczb (np. `5 12 3 8 20`).
3. **Skompiluj kod** za pomocą wybranego kompilatora, na przykład w terminalu:
   ```bash
   g++ main.cpp -o program_listy



4. **Uruchom skompilowany plik:**
* Linux / macOS: `./program_listy`
* Windows: `program_listy.exe`



---

## 🧠 Jak działa program (Architektura)

Program operuje na strukturze `lista`, która reprezentuje pojedynczy węzeł ("wagonik"):

* `int id` – przechowuje wartość liczbową.
* `struct lista *next` – wskaźnik prowadzący do następnego elementu listy.

### Kluczowe funkcje:

* **`wczytaj(lista *&L, lista *&P)`**: Otwiera plik `liczby.txt`, dynamicznie alokuje pamięć dla każdego nowego elementu (`new lista`) i podpina go na końcu listy (korzystając ze wskaźnika na początek `L` oraz koniec `P` dla zachowania optymalnej złożoności czasowej $O(n)$).
* **`wypisz(lista *L)`**: Przechodzi iteracyjnie przez wszystkie elementy listy od początku do końca i wypisuje ich wartości na standardowe wyjście.
* **`zwolnij(lista *&L)`**: Zapobiega wyciekom pamięci (memory leaks), przechodząc przez listę i usuwając każdy element za pomocą operatora `delete`.
