
# Porównanie czasu sortowania – Insertion Sort

## Opis projektu

Program napisany w języku C++, którego celem jest porównanie wydajności algorytmu **Insertion Sort (sortowanie przez wstawianie)** dla dwóch różnych struktur danych:
- Tablicy jednowymiarowej.
- Listy dwukierunkowej.

Program generuje losowe liczby, sortuje je za pomocą tego samego algorytmu, a następnie mierzy i porównuje czas wykonania obu operacji.

## Zastosowane technologie

- C++
- Biblioteka `<iostream>` – obsługa wejścia i wyjścia.
- Biblioteka `<chrono>` – pomiar czasu wykonywania sortowania.
- Biblioteka `<cstdlib>` – generowanie liczb pseudolosowych.
- Biblioteka `<ctime>` – inicjalizacja generatora liczb losowych.

## Działanie programu

Program wykonuje następujące operacje:

1. Tworzy tablicę o rozmiarze 10 000 elementów.
2. Tworzy pustą listę dwukierunkową.
3. Generuje 10 000 losowych liczb z zakresu od 0 do 99 999.
4. Wstawia wygenerowane liczby zarówno do tablicy, jak i do listy dwukierunkowej.
5. Sortuje tablicę za pomocą algorytmu Insertion Sort.
6. Sortuje listę dwukierunkową za pomocą algorytmu Insertion Sort.
7. Mierzy czas wykonania obu operacji w milisekundach.
8. Wyświetla wyniki oraz informację, która struktura danych została posortowana szybciej.
9. Zwalnia zaalokowaną pamięć.

## Zastosowane algorytmy

### Insertion Sort – tablica

Algorytm sortuje elementy tablicy poprzez pobieranie kolejnych wartości i umieszczanie ich na odpowiedniej pozycji wśród wcześniej posortowanych elementów.

### Insertion Sort – lista dwukierunkowa

Algorytm działa na liście dwukierunkowej, wykorzystując wskaźniki `next` oraz `prev` do poruszania się pomiędzy elementami.

W strukturze `lista2` znajdują się:
- `liczba` – przechowywana wartość.
- `next` – wskaźnik na następny element.
- `prev` – wskaźnik na poprzedni element.

## Złożoność obliczeniowa

Dla obu zastosowanych implementacji algorytm Insertion Sort charakteryzuje się następującą złożonością:

| Przypadek | Złożoność |
|---|---|
| Najlepszy | O(n) |
| Średni | O(n²) |
| Najgorszy | O(n²) |

Złożoność pamięciowa samego sortowania wynosi O(1), ponieważ algorytm wykonuje operacje bez tworzenia dodatkowych struktur danych.

## Przykładowy wynik działania

```text
Sortowanie tablicy: 85.42 ms
Sortowanie listy: 132.76 ms
Szybsza jest tablica!
```

*Podane wartości są przykładowe. Rzeczywiste wyniki zależą od sprzętu, kompilatora oraz wygenerowanych danych.*

## Kompilacja i uruchomienie

Do skompilowania programu można wykorzystać kompilator g++.

### Kompilacja

```bash
g++ main.cpp -o sortowanie
```

### Uruchomienie

Linux:
```bash
./sortowanie
```

Windows:
```bash
sortowanie.exe
```

## Cel projektu

Głównym celem projektu jest praktyczne porównanie wydajności sortowania przez wstawianie dla tablicy oraz listy dwukierunkowej.

Projekt pozwala zaobserwować, jak wybór struktury danych wpływa na czas wykonywania operacji sortowania.
