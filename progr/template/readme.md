# README – Funkcja szablonowa w C++

## 📌 Opis projektu

Program napisany w języku C++, który prezentuje działanie funkcji szablonowej (template).

Głównym celem programu jest pokazanie, w jaki sposób można stworzyć jedną uniwersalną funkcję, która obsługuje różne typy danych bez konieczności pisania osobnych funkcji dla każdego typu.

## ⚙️ Wykorzystane biblioteki

Program wykorzystuje następujące biblioteki standardowe:

- `<iostream>` – obsługa wejścia i wyjścia.
- `<vector>` – obsługa dynamicznych tablic.
- `<queue>` – obsługa kolejek.
- `<string>` – obsługa napisów.
- `<list>` – obsługa list.
- `<stack>` – obsługa stosów.

## 🧩 Działanie programu

W programie została zdefiniowana funkcja szablonowa:

cpp

```cpp
template <typename T>
void wypisz(T zmienna)
{
    cout << zmienna << endl;
}
```

Funkcja `wypisz()` przyjmuje jeden argument dowolnego typu i wyświetla jego wartość w konsoli.

Dzięki zastosowaniu `template <typename T>` funkcja może obsługiwać różne typy danych.

### Przykładowe dane

W funkcji `main()` zadeklarowano następujące zmienne:

| Zmienna | Typ danych | Wartość |
| --- | --- | --- |
| `a` | `int` | `10` |
| `b` | `string` | `"Hello"` |
| `c` | `double` | `3.14` |
| `d` | `char` | `'A'` |
| `e` | `bool` | `true` |

Każda ze zmiennych jest przekazywana do funkcji `wypisz()`, która wyświetla jej wartość.

## ▶️ Uruchomienie programu

1. Skopiuj kod źródłowy do pliku, np. `main.cpp`.
2. Skompiluj program za pomocą kompilatora C++:

bash

```bash
g++ main.cpp -o program
```

3. Uruchom program:

bash

```bash
./program
```

W systemie Windows:

bash

```bash
program.exe
```

## 📤 Przykładowy wynik działania

text

```text
10
Hello
3.14
A
1
```

Warto zauważyć, że wartość `true` typu `bool` jest domyślnie wyświetlana jako `1`, natomiast `false` jako `0`.

## 🎯 Cel programu

Celem programu jest:

- Poznanie podstaw funkcji szablonowych w C++.
- Zrozumienie działania `template`.
- Nauka obsługi różnych typów danych za pomocą jednej funkcji.
- Poznanie sposobu wyświetlania wartości zmiennych w konsoli.

## 🛠️ Technologie

- Język: C++
- Standard: C++11 lub nowszy
- Kompilator: GCC / G++ lub inny kompatybilny kompilator.
