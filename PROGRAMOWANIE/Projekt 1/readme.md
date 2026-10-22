🔐 Generator haseł i danych pracownika

<p align="center">
<img src="https://img.shields.io/badge/C%23-Programowanie-68217A?style=for-the-badge&logo=csharp&logoColor=white" alt="C#"/>
<img src="https://img.shields.io/badge/.NET-Windows%20Forms-512BD4?style=for-the-badge&logo=dotnet&logoColor=white" alt=".NET"/>
<img src="https://img.shields.io/badge/IDE-Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white" alt="Visual Studio"/>
</p>

📌 O projekcie

Generator haseł i danych pracownika to aplikacja desktopowa napisana w języku C# z wykorzystaniem technologii Windows Forms (WinForms) w środowisku Visual Studio.

Program umożliwia generowanie losowych haseł o określonej długości oraz wyświetlanie danych pracownika w oknie komunikatu.

✨ Funkcjonalności
Funkcja	Opis
🔑 Generowanie haseł	Tworzenie losowego hasła o podanej długości.
📏 Długość hasła	Możliwość określenia liczby znaków.
🔠 Rodzaje znaków	Opcje dotyczące wielkich liter, cyfr i znaków specjalnych.
💬 Wyświetlanie hasła	Prezentacja wygenerowanego hasła w oknie komunikatu.
👤 Dane pracownika	Wyświetlanie imienia, nazwiska i stanowiska.
🛠️ Technologie
C# – język programowania.
Windows Forms (WinForms) – tworzenie interfejsu graficznego.
.NET – platforma uruchomieniowa.
Visual Studio – środowisko programistyczne.
🚀 Uruchomienie aplikacji
Sklonuj repozytorium na swój komputer:
git clone ADRES_REPOZYTORIUM

Otwórz plik .sln w programie Visual Studio.
Poczekaj na załadowanie projektu.
Uruchom aplikację, naciskając F5 lub klikając Start.
Wprowadź dane i skorzystaj z dostępnych funkcji.
Wymagania: system Windows oraz Visual Studio z obsługą C# i Windows Forms. Wymagana wersja .NET zależy od konfiguracji projektu.
⚙️ Jak działa generator?

Generator wykorzystuje klasę Random do losowania znaków i budowania hasła w pętli for.

W zależności od warunków w kodzie mogą być dodawane:

Wielkie litery (A–Z)
Małe litery (a–z)
Cyfry (0–9)
Znaki specjalne (!@#$%^&*()_+-=)

Po wygenerowaniu hasło wyświetlane jest w oknie MessageBox.

Dane pracownika pobierane są z pól tekstowych formularza i prezentowane w osobnym oknie komunikatu.

📂 Struktura projektu
WinFormsApp1/
├── Form1.cs             # Logika aplikacji i obsługa zdarzeń
├── Form1.Designer.cs    # Kod interfejsu graficznego
├── Form1.resx           # Zasoby formularza
├── Program.cs           # Punkt wejścia aplikacji
└── WinFormsApp1.csproj  # Plik projektu


Pliki mogą się nieznacznie różnić w zależności od konfiguracji projektu.

🔧 Możliwe rozszerzenia
Kopiowanie wygenerowanego hasła do schowka.
Walidacja długości hasła i danych wejściowych.
Poprawa losowania, aby uwzględniało wszystkie zaznaczone rodzaje znaków.
Możliwość podglądu wygenerowanego hasła bez dodatkowego okna.
Zastosowanie RandomNumberGenerator do bezpiecznego generowania haseł.
👨‍💻 Autor

Projekt edukacyjny wykonany w języku C# w środowisku Visual Studio.

<p align="center">
⭐ Jeśli projekt Ci się podoba, zostaw gwiazdkę na GitHubie!
</p>
