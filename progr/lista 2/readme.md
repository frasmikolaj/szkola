# Jednokierunkowa Lista Powiązana w C++

Ten projekt zawiera prostą implementację **jednokierunkowej listy powiązanej** (ang. *Singly Linked List*) w języku C++. Program demonstruje podstawowe operacje na strukturach danych, takie jak wczytywanie danych z pliku, przeglądanie, wyszukiwanie, usuwanie, odwracanie oraz bezpieczne zwalnianie pamięci.

---

## Funkcjonalności programu

Program wykonuje następujące operacje po kolei w funkcji `main`:

1. **Wczytywanie z pliku** – pobiera liczby z pliku tekstowego `liczby.txt` i buduje z nich listę jednokierunkową.
2. **Wyświetlanie** – wypisuje zawartość całej listy na ekranie.
3. **Wyszukiwanie** – sprawdza, czy wskazana przez użytkownika liczba znajduje się na liście.
4. **Usuwanie** – znajduje i usuwa z listy podany element, odpowiednio aktualizując wskaźniki oraz zwalniając pamięć.
5. **Odwracanie** – odwraca kolejność wszystkich elementów na liście (od końca do początku).
6. **Zarządzanie pamięcią** – na zakończenie działania programu dynamicznie alokowana pamięć jest całkowicie zwalniana, co zapobiega wyciekom pamięci (*memory leaks*).

---

## Dostępne funkcje w kodzie

* `void wczytaj(Element*& glowa)` – wczytuje elementy z pliku `liczby.txt` na koniec listy.
* `void wyswietl(Element* glowa)` – wypisuje elementy listy w jednej linii.
* `void szukaj(Element* glowa, int liczba)` – szuka konkretnej wartości w liście.
* `void usun(Element*& glowa, int liczba)` – usuwa pierwszy napotkany węzeł o podanej wartości.
* `void odwroc(Element*& glowa)` – odwraca kolejność elementów listy.
* `void zwolnij(Element*& glowa)` – usuwa wszystkie węzły i zwalnia pamięć RAM.

---

## Wymagania wstępne

Aby skompilować i uruchomić program, potrzebujesz:

* Kompilatora obsługującego standard C++ (np. **g++**, **Clang** lub **MSVC**).
* Pliku tekstowego o nazwie **`liczby.txt`** umieszczonego w tym samym katalogu co kod źródłowy, zawierającego liczby całkowite oddzielone spacjami lub nowymi liniami.

---

## Jak uruchomić?

1. Zapisz powyższy kod w pliku o nazwie np. `main.cpp`.
2. Utwórz w tym samym folderze plik `liczby.txt` i wpisz w nim kilka liczb (np. `5 12 3 8 20`).
3. Otwórz terminal w folderze z plikiem i skompiluj program (np. za pomocą GCC):
```bash
g++ main.cpp -o program

```


4. Uruchom skompilowany plik:
* **Windows:** `./program.exe`
* **Linux / macOS:** `./program`
