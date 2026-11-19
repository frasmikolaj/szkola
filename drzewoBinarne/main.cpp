
#include <iostream>
#include <fstream>
using namespace std;

struct drzewo
{
    int liczba;
    struct drzewo *lewy, *prawy;
};

int usuniete = 0;

// Dodawanie liczby do drzewa
void wstaw(struct drzewo *&d, int liczba)
{
    if (d == NULL)
    {
        d = new struct drzewo;
        d->liczba = liczba;
        d->lewy = NULL;
        d->prawy = NULL;
        return;
    }

    if (liczba > d->liczba)
        wstaw(d->prawy, liczba);
    else
        wstaw(d->lewy, liczba);
}

// Wypisywanie drzewa w kolejnosci rosnacej
void wypisz(struct drzewo *d)
{
    if (d == NULL)
        return;

    wypisz(d->lewy);
    cout << d->liczba << " ";
    wypisz(d->prawy);
}

// Usuwanie calego drzewa z pamieci
void usun(struct drzewo *d)
{
    if (d == NULL)
        return;

    usun(d->lewy);
    usun(d->prawy);

    delete d;
    usuniete++;
}

int main()
{
    struct drzewo *d = NULL;

    ifstream plik("liczby.txt");

    if (!plik)
    {
        cout << "Nie mozna otworzyc pliku!";
        return 0;
    }

    int liczba;
    int ile = 0;

    // Wczytywanie liczb z pliku i dodawanie do drzewa
    while (plik >> liczba)
    {
        wstaw(d, liczba);
        ile++;
    }

    plik.close();

    // Wypisanie liczb posortowanych
    cout << "Liczby posortowane: ";
    wypisz(d);
    cout << endl;

    // Usuwanie drzewa
    usun(d);

    cout << "Usunieto: " << usuniete
         << " rekordow z pamieci" << endl;

    cout << "Liczba wczytanych liczb: " << ile << endl;

    return 0;
}
