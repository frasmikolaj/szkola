#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <list>
#include <stack>

using namespace std;

template <typename T>
void wypisz(T zmienna)
{
    cout << zmienna << endl;
}

// Funkcja do wypisywania tablicy
template <typename T, int N>
void wypisz(T (&tablica)[N])
{
    for (int i = 0; i < N; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

// Funkcja do wypisywania vectora
template <typename T>
void wypisz(vector<T> wektor)
{
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << wektor[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a = 10;
    string b = "Hello";
    double c = 3.14;
    char d = 'A';
    bool e = true;

    int tablica[] = {1, 2, 3, 4, 5};
    vector<int> wektor = {10, 20, 30, 40, 50};

    wypisz(a);
    wypisz(b);
    wypisz(c);
    wypisz(d);
    wypisz(e);

    wypisz(tablica);
    wypisz(wektor);

    return 0;
}
