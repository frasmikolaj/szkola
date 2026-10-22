\# WpfApp1 - Prosty Licznik (Counter) w WPF



Prosta aplikacja desktopowa stworzona w technologii \*\*WPF (Windows Presentation Foundation)\*\* przy użyciu języka \*\*VB.NET\*\* w środowisku \*\*Visual Studio\*\*. Aplikacja realizuje podstawowy licznik z możliwością zwiększania i zmniejszania wartości za pomocą przycisków.



\## 🚀 Funkcjonalności



\* \*\*Inicjalizacja startowa:\*\* Licznik uruchamia się z domyślną wartością `0` wyświetlaną w kontrolce `TextBlock` (`CounterBlock`).

\* \*\*Zwiększanie wartości (`Increment`):\*\*

\* Przycisk \*"Dodaj 1"\* (`IncrementBtn`).

\* Zwiększa zmienną `count` o `1` i aktualizuje tekst w interfejsie.





\* \*\*Zmniejszanie wartości (`Decrement`):\*\*

\* Przycisk \*"Odejmij 1"\* (`DecrementBtn`).

\* Zmniejsza zmienną `count` o `1` i aktualizuje tekst w interfejsie.







\---



\## 🛠 Wymagania wstępne



\* \*\*Visual Studio\*\* (zalecana wersja 2019 lub nowsza)

\* Obciążenie \*\*Tworzenie aplikacji klasycznych dla platformy .NET\*\* (\*.NET desktop development\*) z obsługą WPF

\* Platforma \*\*.NET\*\* (np. .NET Framework lub nowoczesne .NET Core / .NET 6/7/8)



\---



\## 📥 Uruchomienie projektu



1\. Otwórz lub utwórz projekt typu \*\*WPF App\*\* w programie \*\*Visual Studio\*\* z językiem VB.NET.

2\. Wklej kod XAML do pliku `MainWindow.xaml`, a kod VB.NET do pliku `MainWindow.xaml.vb`.

3\. Upewnij się, że nazwy klas oraz przestrzeni nazw (np. `x:Class="WpfApp1.MainWindow"` lub `WpfApp1`) są spójne w plikach projektu.

4\. Naciśnij przycisk \*\*Start\*\* (`F5`), aby skompilować i uruchomić aplikację.



\---



\## 💻 Struktura kodu



\* \*\*`MainWindow.xaml`\*\* – zawiera interfejs użytkownika oparty na kontrolce `Grid` oraz `StackPanel`, w którym umieszczono dwa przyciski (`Button`) oraz pole tekstowe (`TextBlock`) wyśświetlające stan licznika.

\* \*\*`MainWindow.xaml.vb`\*\* – zawiera logikę w języku VB.NET:

\* Zmienną prywatną `count` przechowującą aktualny stan liczbowy.

\* Metodę `Increment` reagującą na kliknięcie przycisku dodawania.

\* Metodę `Decrement` reagującą na kliknięcie przycisku odejmowania.

