
#include <iostream>
#include <fstream>
using namespace std;

//struktura pojedynczego elementu listy
struct Element {
    int liczba;
    Element* next;
};

//wczytanie liczb z pliku tekstowego
void wczytaj(Element*& glowa) {
    int liczba;
    Element* koniec = NULL;

    //otworzenie pliku z liczbami
    ifstream plik("liczby.txt");

    //sprawdzenie czy zostal otwarty
    if (!plik) {
        cout << "Nie mozna otworzyc pliku!\n";
        return;
    }

    //wczytanie kolejnych liczb z pliku
    while (plik >> liczba) {
        Element* nowy = new Element;

        //przypisanie liczb do nowego elementu
        nowy->liczba = liczba;
        nowy->next = NULL;

        //jezeli lista jest pusta, tworzymy pierwszy element
        if (glowa == NULL) {
            glowa = nowy;
            koniec = nowy;
        }
        else {
            //dodanie elementu na koniec listy
            koniec->next = nowy;
            koniec = nowy;
        }
    }

    //zamykamy plik
    plik.close();
}

//funkcja wyswietlajaca liste
void wyswietl(Element* glowa) {
    //przechodzimy przez wszystkie elementy listy
    while (glowa != NULL) {
        cout << glowa->liczba << " ";
        glowa = glowa->next;
    }

    cout << endl;
}

//funkcja usuwajaca podany element z listy
void usun(Element*& glowa, int liczba) {
    Element* temp = glowa;
    Element* poprzedni = NULL;

    //szukamy elementu do usuniecia
    while (temp != NULL) {
        if (temp->liczba == liczba) {

            //jezeli usuwamy pierwszy element
            if (poprzedni == NULL) {
                glowa = temp->next;
            }
            else {
                //pomijamy usuwany element
                poprzedni->next = temp->next;
            }

            //zwalniamy pamiec usunietego elementu
            delete temp;

            cout << "Usunieto element\n";
            return;
        }

        poprzedni = temp;
        temp = temp->next;
    }

    cout << "Nie ma takiego elementu\n";
}

//funkcja szukajaca podanej liczby w liscie
void szukaj(Element* glowa, int liczba) {

    //przechodzimy przez cala liste
    while (glowa != NULL) {

        //sprawdzamy, czy liczba znajduje sie w liscie
        if (glowa->liczba == liczba) {
            cout << "Jest taka liczba\n";
            return;
        }

        glowa = glowa->next;
    }

    //jezeli nie znalezlismy liczby
    cout << "Nie ma takiej liczby\n";
}

//funkcja odwracajaca kolejnosc elementow listy
void odwroc(Element*& glowa) {
    Element* poprzedni = NULL;
    Element* aktualny = glowa;
    Element* nastepny;

    //odwracamy wskazniki kolejnych elementow
    while (aktualny != NULL) {

        //zapamietujemy nastepny element
        nastepny = aktualny->next;

        //zmieniamy kierunek wskaznika
        aktualny->next = poprzedni;

        //przechodzimy do kolejnego elementu
        poprzedni = aktualny;
        aktualny = nastepny;
    }

    //ustawiamy nowa glowe listy
    glowa = poprzedni;
}

//funkcja zwalniajaca pamiec calej listy
void zwolnij(Element*& glowa) {

    //usuwamy kolejne elementy listy
    while (glowa != NULL) {
        Element* temp = glowa;
        glowa = glowa->next;
        delete temp;
    }
}

//funkcja glowna programu
int main() {
    Element* glowa = NULL;

    //wczytujemy liste z pliku
    wczytaj(glowa);

    //wyswietlamy liste
    cout << "Lista: ";
    wyswietl(glowa);

    int liczba;

    //pobieramy liczbe do wyszukania
    cout << "Podaj liczbe do wyszukania: ";
    cin >> liczba;

    //wyszukujemy podana liczbe
    szukaj(glowa, liczba);

    //pobieramy liczbe do usuniecia
    cout << "Podaj liczbe do usuniecia: ";
    cin >> liczba;

    //usuwamy podana liczbe
    usun(glowa, liczba);

    //wyswietlamy liste po usunieciu
    cout << "Lista po usunieciu: ";
    wyswietl(glowa);

    //odwracamy liste
    odwroc(glowa);

    //wyswietlamy liste po odwroceniu
    cout << "Lista po odwroceniu: ";
    wyswietl(glowa);

    //zwalniamy pamiec calej listy
    zwolnij(glowa);

    return 0;
}
