#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
using namespace std;

//wygeneruj 100k liczb wylosowac i teraz tak wstaw do pokolei lista nasza, vector, tablica c++, lista <list> i pomiar czasu bilbioteka chrono wstaw w srodek sortowanie usun ze srodka
int main()
{
    const int N = 100000;
    int liczby[N];
    for(int i = 0; i < N; i++){
        liczby[i] = rand();
    }
    //vector --------------------------------------------------
    vector<int> v;
    auto start = chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++){
        v.push_back(liczby[i]);
    }
    auto koniec = chrono::high_resolution_clock::now();
    cout<<"Vector: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    start = chrono::high_resolution_clock::now();
    sort(v.begin(), v.end());
    koniec = chrono::high_resolution_clock::now();
    cout<<"Vector sortowanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //tablica --------------------------------------------------
    int tablica[N];
    start = chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++){
        tablica[i] = liczby[i];
    }
    koniec = chrono::high_resolution_clock::now();
    cout<<"Tablica: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    start = chrono::high_resolution_clock::now();
    sort(tablica, tablica + N);
    koniec = chrono::high_resolution_clock::now();
    cout<<"Tablica sortowanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //lista --------------------------------------------------
    list<int> lista;
    start = chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++){
        lista.push_back(liczby[i]);
    }
    koniec = chrono::high_resolution_clock::now();
    cout<<"Lista: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    start = chrono::high_resolution_clock::now();
    lista.sort();
    koniec = chrono::high_resolution_clock::now();
    cout<<"Lista sortowanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    return 0;
}
