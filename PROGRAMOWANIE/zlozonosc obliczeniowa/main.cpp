#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
#include <iterator>
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
    cout<<"=======VECTOR======="<<endl;
    vector<int> v;
    //dodanie liczb
    auto start = chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++){
        v.push_back(liczby[i]);
    }
    auto koniec = chrono::high_resolution_clock::now();
    cout<<"Vector: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //sortowanie
    start = chrono::high_resolution_clock::now();
    sort(v.begin(), v.end());
    koniec = chrono::high_resolution_clock::now();
    cout<<"Vector sortowanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //usuniecie ze srodka
    start = chrono::high_resolution_clock::now();
    v.erase(v.begin() + 50000);
    koniec = chrono::high_resolution_clock::now();
    cout<<"Vector usuwanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //dodanie do srodka
    start = chrono::high_resolution_clock::now();
    v.insert(v.begin() + 50000, 123);
    koniec = chrono::high_resolution_clock::now();
    cout<<"Vector wstawianie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    cout<<endl;

    //tablica --------------------------------------------------
    cout<<"=======TABLICA======="<<endl;
    int tablica[N+1];
    //dodanie liczb
    start = chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++){
        tablica[i] = liczby[i];
    }
    koniec = chrono::high_resolution_clock::now();
    cout<<"Tablica: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //sortowanie
    start = chrono::high_resolution_clock::now();
    sort(tablica, tablica + N);
    koniec = chrono::high_resolution_clock::now();
    cout<<"Tablica sortowanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //usuniecie ze srodka
    start = chrono::high_resolution_clock::now();
    for(int i = 50000; i<N-1; i++){
        tablica[i] = tablica[i+1];
    }
    koniec = chrono::high_resolution_clock::now();
    cout<<"Tablica usuwanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //dodanie do srodka
    start = chrono::high_resolution_clock::now();
    for(int i = N-1; i>= 50000; i--){
        tablica[i+1] = tablica[i];
    }
    tablica[50000] = 123;
    koniec = chrono::high_resolution_clock::now();
    cout<<"Tablica dodawanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    cout<<endl;

    //lista --------------------------------------------------
    cout<<"=======LISTA======="<<endl;
    list<int> lista;
    //dodanie liczb
    start = chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++){
        lista.push_back(liczby[i]);
    }
    koniec = chrono::high_resolution_clock::now();
    cout<<"Lista: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //sortowanie
    start = chrono::high_resolution_clock::now();
    lista.sort();
    koniec = chrono::high_resolution_clock::now();
    cout<<"Lista sortowanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //usuniecie ze srodka
    start = chrono::high_resolution_clock::now();
    auto it = lista.begin();
    advance(it, 50000);
    lista.erase(it);
    koniec = chrono::high_resolution_clock::now();
    cout<<"Lista usuwanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;

    //dodanie do srodka
    start = chrono::high_resolution_clock::now();
    auto it2 = lista.begin();
    advance(it2, 50000);
    lista.insert(it2, 123);
    koniec = chrono::high_resolution_clock::now();
    cout<<"Lista dodawanie: "<<chrono::duration_cast<chrono::microseconds>(koniec - start).count()<<" mikrosekund"<<endl;
    return 0;
}
