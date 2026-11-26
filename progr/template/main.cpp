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

int main()
{
    int a = 10;
    string b = "Hello";
    double c = 3.14;
    char d = 'A';
    bool e = true;

    wypisz(a);
    wypisz(b);
    wypisz(c);
    wypisz(d);
    wypisz(e);

    return 0;
}
