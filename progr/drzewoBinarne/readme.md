# 🌲 Sortowanie liczb za pomocą drzewa BST (C++)

> Lekki program w **C++**, który wczytuje liczby całkowite z pliku `liczby.txt`, buduje z nich **binarne drzewo poszukiwań (BST)**, wypisuje je w porządku rosnącym (*in-order*), a na koniec bezpiecznie zwalnia dynamicznie przydzieloną pamięć.

---

## ⚙️ Jak to działa?

1. **Wczytywanie danych** – program otwiera plik `liczby.txt` i czyta kolejne liczby całkowite.
2. **Budowa drzewa BST** – każda liczba trafia do drzewa: wartości większe od bieżącego węzła idą na **prawo**, a mniejsze lub równe – na **lewo**.
3. **Sortowanie (*in-order*)** – przejście przez drzewo w kolejności *lewy → węzeł → prawy* wypisuje liczby od najmniejszej do największej.
4. **Sprzątanie pamięci (*post-order*)** – program usuwa węzły od liści do korzenia i zlicza zwolnione rekordy.

---

## 🚀 Szybki start

### 1. Przygotuj plik `liczby.txt`

Umieść plik `liczby.txt` w tym samym folderze co kod źródłowy. Liczby mogą być oddzielone spacjami lub znakami nowej linii:

```text
42 15 88 4 23 15 100

```

### 2. Skompiluj i uruchom

```bash
g++ -std=c++17 -Wall -Wextra -o drzewo_bst main.cpp
./drzewo_bst

```

---

## 🖥️ Przykładowy wynik

Dla przykładowego pliku wejściowego na ekranie zobaczysz:

```text
Liczby posortowane: 4 15 15 23 42 88 100 
Usunieto: 7 rekordow z pamieci
Liczba wczytanych liczb: 7

```

---

## 🧩 Struktura danych i opis funkcji

### `struct drzewo`

Reprezentuje pojedynczy węzeł drzewa binarnego:

| Pole / Zmienna | Typ | Opis |
| --- | --- | --- |
| `liczba` | `int` | Wartość całkowita zapisana w węźle |
| `lewy` | `drzewo*` | Wskaźnik na lewe poddrzewo (wartości mniejsze lub równe) |
| `prawy` | `drzewo*` | Wskaźnik na prawe poddrzewo (wartości większe) |
| `usuniete` *(globalna)* | `int` | Licznik węzłów zwolnionych z pamięci (`delete`) |

---

### `void wstaw(struct drzewo *&d, int liczba)`

Rekurencyjnie dodaje nowy element do drzewa BST.

* Parametr `d` jest przekazany **przez referencję do wskaźnika** (`*&d`), dzięki czemu funkcja może bezpośrednio utworzyć nowy węzeł i podpiąć go pod korzeń lub rodzica.
* Gdy trafi na pusty wskaźnik (`d == NULL`), alokuje pamięć (`new struct drzewo`) i ustawia wskaźniki potomków na `NULL`.

### `void wypisz(struct drzewo *d)`

Wypisuje zawartość drzewa w kolejności rosnącej (przejście **in-order**: lewe poddrzewo → węzeł → prawe poddrzewo).

* Przerywa rekurencję, gdy napotka `NULL`.

### `void usun(struct drzewo *d)`

Zwalnia całą pamięć zajmowaną przez drzewo w kolejności **post-order** (najpierw lewe i prawe poddrzewo, na końcu sam węzeł).

* Takie podejście gwarantuje, że nie stracimy dostępu do dzieci przed ich usunięciem, a każdy usunięty węzeł powiększa licznik `usuniete`.

### `int main()`

Koordynuje cały przebieg programu:

* sprawdza, czy udało się otworzyć plik `liczby.txt`,
* wczytuje liczby w pętli `while (plik >> liczba)` i zlicza je w zmiennej `ile`,
* wypisuje posortowany ciąg liczb,
* wywołuje `usun(d)` i wyświetla podsumowanie operacji.

---

## 📌 Złożoność i uwagi

| Aspekt | Przypadek średni / losowy | Przypadek pesymistyczny (np. dane posortowane) |
| --- | --- | --- |
| **Wstawianie jednego elementu** | $O(\log n)$ | $O(n)$ |
| **Wypisywanie i usuwanie całości** | $O(n)$ | $O(n)$ |
| **Pamięć** | $O(n)$ | $O(n)$ |

* **Duplikaty** nie są odrzucane – trafiają do lewego poddrzewa (`liczba <= d->liczba`).
* Przy bardzo dużych i posortowanych plikach wejściowych drzewo bez równoważenia rozciągnie się w kształt listy jednokierunkowej.
