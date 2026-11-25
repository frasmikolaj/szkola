# Zarządzanie klasą - C++

Prosty program konsolowy napisany w języku **C++**, umożliwiający zarządzanie listą uczniów w klasie z wykorzystaniem programowania obiektowego, struktur oraz obsługi plików.

## 🚀 Funkcjonalności

Program posiada interaktywne menu tekstowe obsługujące następujące operacje:

* **Wczytywanie z pliku (`1`):** Odczytuje dane uczniów z pliku wejściowego `osoby.txt`.
* **Wypisywanie osób (`2`):** Wyświetla aktualną listę uczniów znajdujących się w pamięci programu wraz z ich numerami w dzienniku.
* **Zapisywanie do pliku (`3`):** Zapisuje aktualną listę uczniów do pliku `wynik.txt`.
* **Dodawanie osoby (`4`):** Pozwala dodać nowego ucznia (imię, nazwisko, numer w dzienniku) i automatycznie dopisuje go do pliku `osoby.txt`.
* **Sortowanie po nazwisku (`5`):** Sortuje uczniów alfabetycznie według nazwiska przy użyciu funkcji `std::sort`.
* **Usuwanie osoby (`6`):** Usuwa ucznia na podstawie podanego numeru w dzienniku i aktualizuje tablicę.
* **Liczba uczniów (`7`):** Wyświetla informację o aktualnej liczbie osób w klasie.
* **Wyjście (`0`):** Kończy działanie programu.

---

## 🛠 Wymagania wstępne i Technologie

Projekt wykorzystuje standardową bibliotekę C++ (`<iostream>`, `<fstream>`, `<string>`, `<algorithm>`). Do kompilacji potrzebny jest dowolny kompilator C++ (np. **g++**).

---

## 📥 Uruchomienie projektu

### 1. Kompilacja

Otwórz terminal w folderze z projektem i wpisz polecenie:

```bash
g++ main.cpp -o program

```

### 2. Uruchomienie

* **Linux / macOS:**
```bash
./program

```


* **Windows:**
```bash
program.exe

```



---

## 🧱 Struktura programu

Program opiera się na dwóch głównych konstrukcjach:

* **`struct Osoba`** – przechowuje dane pojedynczego ucznia (`imie`, `nazwisko`, `nrWDzienniku`).
* **`class Klasa`** – zarządza kolekcją uczniów przy użyciu statycznej tablicy (maksymalnie 30 osób) oraz udostępnia metody do operacji na danych (`wczytajZPliku()`, `wypisz()`, `dodaj()`, `sortujPoNazwisku()`, `usun()`, `ileUczniow()`, `zapiszDoPliku()`).

---

## 📁 Struktura projektu

```text
/
├── main.cpp       # Główny plik z implementacją logiki i menu
├── osoby.txt      # Plik wejściowy z listą uczniów
├── wynik.txt      # Plik wyjściowy z zapisanymi danymi
└── README.md      # Dokumentacja projektu

```

---

## ⚠️ Ograniczenia

* Maksymalna liczba uczniów wynosi **30**.
* Imię i nazwisko nie powinny zawierać spacji.
* Program zakłada poprawny format danych w plikach wejściowych.
