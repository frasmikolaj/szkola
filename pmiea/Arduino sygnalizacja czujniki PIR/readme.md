🚦 Sygnalizacja świetlna Arduino

Opis projektu



Projekt wykorzystuje Arduino Uno, 4 czujniki ruchu PIR oraz 8 diod LED. Układ wykrywa ruch i steruje światłami w czterech kierunkach.



🛠️ Wykorzystane elementy

Arduino Uno

4 czujniki PIR

4 czerwone diody LED

4 zielone diody LED

Rezystory i przewody

⚙️ Jak to działa?

Gdy nie ma ruchu, wszystkie światła są czerwone.

Gdy czujnik wykryje ruch, zapala się zielone światło w odpowiednim kierunku.

Pozostałe kierunki mają czerwone światło.

Po ustaniu ruchu zielone światło świeci jeszcze przez 5 sekund.

Jeśli inny czujnik wykryje ruch, czeka na swoją kolej.

🔌 Podłączenie

Element	Pin Arduino

Górny PIR	D13

Prawy PIR	D11

Dolny PIR	D10

Lewy PIR	D12

Czerwone LED	D9, D7, D5, D3

Zielone LED	D8, D6, D4, D2

🚀 Uruchomienie

Podłącz elementy do Arduino zgodnie z tabelą.

Otwórz program w Arduino IDE.

Wybierz płytkę Arduino Uno i odpowiedni port.

Wgraj program na płytkę.

📌 Cel projektu



Projekt służy do nauki programowania Arduino, obsługi czujników PIR i sterowania diodami LED.

