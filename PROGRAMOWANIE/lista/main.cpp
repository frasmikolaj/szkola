#include <iostream>
#include <fstream>
using namespace std;

// Struktura jednego wagonika listy
struct lista {
    int id;             // Liczba przechowywana w wagoniku
    struct lista *next; // Wskaznik na nastepny wagonik
};

// Funkcja wczytujaca liczby z pliku i tworzaca liste
// & oznacza, ze zmieniamy wskazniki z funkcji main()
void wczytaj(lista *&L, lista *&P) {
    ifstream plik("liczby.txt"); // Otwieramy plik do odczytu
    int liczba;                  // Zmienna na wczytana liczbe

    // Sprawdzamy, czy plik zostal otwarty
    if (!plik) {
        cout << "Nie mozna otworzyc pliku!" << endl;
        return; // Konczymy funkcje, jesli nie ma pliku
    }

    // Wczytujemy kolejne liczby, dopoki sa w pliku
    while (plik >> liczba) {

        // Tworzymy nowy wagonik w pamieci
        lista *nowy = new lista;

        nowy->id = liczba; // Zapisujemy liczbe w wagoniku
        nowy->next = NULL; // Na razie nie ma kolejnego wagonika

        // Jesli lista jest pusta, nowy wagonik jest pierwszy
        if (L == NULL) {
            L = nowy;       // Ustawiamy poczatek listy
            P = nowy;    // Ustawiamy koniec listy
        } else {
            // Dolaczamy wagonik na koncu listy
            P->next = nowy;
            P = nowy;    // Przesuwamy koniec listy
        }
    }

    plik.close(); // Zamykamy plik po wczytaniu danych
}

// Funkcja wypisujaca wszystkie liczby z listy
void wypisz(lista *L) {
    lista *pom = L; // Zaczynamy od pierwszego wagonika

    // Przechodzimy przez liste do jej konca
    while (pom != NULL) {
        cout << pom->id << " "; // Wypisujemy liczbe
        pom = pom->next;        // Przechodzimy do nastepnego
    }

    cout << endl; // Przechodzimy do nowej linii
}

// Funkcja zwalniajaca pamiec wszystkich wagonikow
void zwolnij(lista *&L) {

    // Usuwamy wagoniki, dopoki lista nie bedzie pusta
    while (L != NULL) {
        lista *pom = L; // Zapamietujemy aktualny wagonik
        L = L->next;    // Przesuwamy poczatek na nastepny
        delete pom;     // Usuwamy wagonik i zwalniamy pamiec
    }
}

// Glowna funkcja programu
int main() {
    lista *L = NULL;     // Poczatek pustej listy
    lista *P = NULL;  // Koniec pustej listy

    wczytaj(L, P); // Wczytujemy liczby i tworzymy wagoniki

    cout << "Liczby w liscie: ";
    wypisz(L); // Wypisujemy zawartosc listy

    zwolnij(L); // Zwalniamy pamiec calej listy

    return 0; // Konczymy program
}
