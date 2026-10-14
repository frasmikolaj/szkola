📚 Zarządzanie klasą – C++

Prosty program konsolowy napisany w języku C++, umożliwiający zarządzanie listą uczniów w klasie.

Program pozwala na:

wczytywanie uczniów z pliku,
wyświetlanie listy uczniów,
dodawanie nowych osób,
usuwanie osób po numerze w dzienniku,
sortowanie uczniów według nazwiska,
zapisywanie danych do pliku,
sprawdzanie liczby uczniów.
🛠️ Technologie
C++
Biblioteka standardowa:
iostream – obsługa wejścia i wyjścia,
fstream – obsługa plików,
string – obsługa napisów,
algorithm – sortowanie danych.
📋 Funkcjonalności

Program posiada proste menu tekstowe:

===== MENU =====
1. Wczytaj z pliku
2. Wypisz osoby
3. Zapisz do pliku
4. Dodaj osobe
5. Posortuj po nazwisku
6. Usun osobe po numerze w dzienniku
7. Pokaz liczbe uczniow
0. Wyjscie

1. Wczytywanie danych z pliku

Program odczytuje dane uczniów z pliku osoby.txt.

Każdy uczeń powinien znajdować się w osobnej linii w formacie:

Jan Kowalski 1
Anna Nowak 2
Piotr Wisniewski 3


Format danych:

imie nazwisko numer_w_dzienniku


Program może przechowywać maksymalnie 30 osób.

2. Wyświetlanie osób

Opcja pozwala wyświetlić wszystkich uczniów znajdujących się aktualnie w pamięci programu.

Przykład:

Lista osob:
1. Jan Kowalski - nr w dzienniku: 1
2. Anna Nowak - nr w dzienniku: 2
3. Piotr Wisniewski - nr w dzienniku: 3

3. Zapisywanie danych do pliku

Aktualna lista uczniów jest zapisywana do pliku wynik.txt.

Dane są zapisywane w formacie:

Jan Kowalski 1
Anna Nowak 2
Piotr Wisniewski 3

4. Dodawanie osoby

Program pozwala dodać nowego ucznia poprzez podanie:

imienia,
nazwiska,
numeru w dzienniku.

Po dodaniu osoba jest automatycznie zapisywana do pliku osoby.txt.

Przykład:

Podaj imie: Jan
Podaj nazwisko: Kowalski
Podaj numer w dzienniku: 15
Osoba zostala dodana

5. Sortowanie po nazwisku

Program umożliwia posortowanie uczniów alfabetycznie według nazwiska.

Za sortowanie odpowiada funkcja:

sortujPoNazwisku()


Wykorzystuje ona funkcję sort() z biblioteki <algorithm>.

6. Usuwanie osoby

Uczeń może zostać usunięty na podstawie numeru w dzienniku.

Program wyszukuje osobę o podanym numerze, a następnie przesuwa pozostałe elementy tablicy o jedno miejsce w lewo.

Przykład:

Podaj numer w dzienniku osoby do usuniecia: 2
Osoba zostala usunieta

7. Liczba uczniów

Program może wyświetlić aktualną liczbę osób znajdujących się w klasie.

Przykład:

Liczba uczniow: 24

📁 Pliki programu

Przykładowa struktura projektu:

/
├── main.cpp
├── osoby.txt
├── wynik.txt
└── README.md

main.cpp

Główny plik programu zawierający całą implementację.

osoby.txt

Plik wejściowy zawierający listę uczniów.

Przykład:

Jan Kowalski 1
Anna Nowak 2
Piotr Wisniewski 3

wynik.txt

Plik, do którego program zapisuje aktualną listę uczniów po wybraniu odpowiedniej opcji.

▶️ Uruchomienie
Kompilacja

Jeżeli korzystasz z kompilatora g++, program można skompilować poleceniem:

g++ main.cpp -o program

Uruchomienie

Linux / macOS:

./program


Windows:

program.exe

💡 Przykładowe działanie

Po uruchomieniu programu pojawi się menu:

===== MENU =====
1. Wczytaj z pliku
2. Wypisz osoby
3. Zapisz do pliku
4. Dodaj osobe
5. Posortuj po nazwisku
6. Usun osobe po numerze w dzienniku
7. Pokaz liczbe uczniow
0. Wyjscie
Wybierz opcje:


Przykładowy scenariusz:

Wybierz opcje: 1
Dane zostaly wczytane

Wybierz opcje: 2

Lista osob:
1. Jan Kowalski - nr w dzienniku: 1
2. Anna Nowak - nr w dzienniku: 2
3. Piotr Wisniewski - nr w dzienniku: 3

Wybierz opcje: 5
Osoby zostaly posortowane po nazwisku

Wybierz opcje: 7
Liczba uczniow: 3

🧱 Struktura programu

Program wykorzystuje dwie główne konstrukcje:

struct Osoba

Przechowuje informacje o pojedynczym uczniu:

struct Osoba
{
    string imie;
    string nazwisko;
    int nrWDzienniku;
};

class Klasa

Odpowiada za zarządzanie wszystkimi uczniami.

Najważniejsze metody:

Metoda	Opis
wczytajZPliku()	Wczytuje osoby z pliku
wypisz()	Wyświetla listę osób
dodaj()	Dodaje nową osobę
sortujPoNazwisku()	Sortuje osoby po nazwisku
usun()	Usuwa osobę po numerze w dzienniku
ileUczniow()	Zwraca liczbę uczniów
zapiszDoPliku()	Zapisuje dane do pliku
⚠️ Ograniczenia
Maksymalna liczba uczniów wynosi 30.
Imię i nazwisko nie mogą zawierać spacji.
Program korzysta ze zwykłej tablicy o stałym rozmiarze.
Dane są przechowywane w pamięci programu podczas jego działania.
Usunięcie osoby nie zapisuje automatycznie zmienionej listy do pliku.
Program nie sprawdza, czy podany numer w dzienniku jest unikalny.
Program wymaga poprawnego formatu danych w pliku.
🎯 Cel projektu

Projekt został stworzony w celu przećwiczenia podstaw programowania obiektowego w C++, w szczególności:

struktur (struct),
klas i metod,
tablic,
operacji na plikach,
sortowania,
wyszukiwania elementów,
usuwania elementów z tablicy,
obsługi menu konsolowego,
podstawowej obsługi danych wejściowych.
👨‍💻 Autor

Projekt edukacyjny napisany w języku C++.