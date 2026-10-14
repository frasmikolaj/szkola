\# Porównanie czasu działania struktur danych w C++



\## Opis projektu



Program służy do porównania czasu wykonywania podstawowych operacji na trzech strukturach danych w języku C++:

\- `vector`

\- tablica

\- `list`



Program generuje 100 000 liczb losowych, a następnie wykonuje na nich różne operacje i mierzy czas ich wykonania.



\## Wykorzystane biblioteki



\- `iostream` – wyświetlanie wyników w konsoli.

\- `chrono` – pomiar czasu wykonywania operacji.

\- `vector` – obsługa wektora.

\- `list` – obsługa listy.

\- `cstdlib` – generowanie liczb za pomocą `rand()`.

\- `algorithm` – sortowanie danych funkcją `sort()`.

\- `iterator` – przesuwanie iteratora za pomocą `advance()`.



\## Działanie programu



Program wykonuje następujące czynności:



1\. Generuje 100 000 liczb losowych i zapisuje je w tablicy.

2\. Kopiuje liczby do wektora, zwykłej tablicy oraz listy.

3\. Mierzy czas dodawania liczb do każdej struktury.

4\. Sortuje liczby rosnąco i mierzy czas sortowania.

5\. Usuwa element znajdujący się na indeksie `50000` i mierzy czas usuwania.

6\. Wstawia liczbę `123` na indeksie `50000` i mierzy czas wstawiania.

7\. Wyświetla wyniki w konsoli w mikrosekundach.



\## Pomiar czasu



Do pomiaru czasu wykorzystywana jest biblioteka `chrono`.



Program zapisuje czas rozpoczęcia operacji za pomocą `start`, a po jej wykonaniu zapisuje czas zakończenia w zmiennej `koniec`.



Różnica między tymi wartościami określa czas wykonania operacji.



\## Różnice między strukturami



\- \*\*Vector\*\* – umożliwia szybki dostęp do elementów, ale wstawianie i usuwanie w środku wymaga przesuwania kolejnych elementów.

\- \*\*Tablica\*\* – przechowuje elementy w pamięci w kolejnych miejscach. Wstawianie i usuwanie w środku wymaga przesuwania elementów.

\- \*\*List\*\* – składa się z połączonych elementów. Wstawianie i usuwanie nie wymaga przesuwania pozostałych elementów, ale znalezienie odpowiedniej pozycji wymaga przejścia przez listę.



\## Uruchomienie



1\. Skopiuj kod do pliku `main.cpp`.

2\. Skompiluj program przy użyciu kompilatora C++.

3\. Uruchom program.

4\. Odczytaj wyniki pomiarów wyświetlone w konsoli.



\## Wnioski



Program pozwala porównać wydajność różnych struktur danych podczas dodawania, sortowania, usuwania i wstawiania elementów.



Wyniki mogą się różnić w zależności od komputera i obciążenia systemu. Bardzo krótkie operacje mogą wyświetlać czas `0 mikrosekund`, ponieważ pomiar jest zaokrąglany do całkowitych mikrosekund.



Na podstawie wyników można zauważyć, że wybór struktury danych wpływa na czas wykonywania poszczególnych operacji.



