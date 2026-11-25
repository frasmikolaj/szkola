# System Alarmowy Arduino z Klawiaturą i Czujnikiem PIR

Prosty projekt systemu alarmowego oparty na płytce Arduino, wykorzystujący klawiaturę membranową 4x4, czujnik ruchu PIR, diody LED oraz buzzer.

---


## 🛠️ Opis Projektu

Program zarządza prostym systemem alarmowym za pomocą automatu stanów. Pozwala na uzbrojenie systemu, monitorowanie otoczenia pod kątem ruchu oraz uruchomienie sygnalizacji świetlno-dźwiękowej w przypadku wykrycia intruza.

---

## 📦 Wymagane Komponenty

* Płytka Arduino (np. Uno / Nano)
* Klawiatura membranowa 4x4
* Czujnik ruchu PIR
* Buzzer (aktywny lub pasywny)
* 3x Dioda LED (Czerwona, Zielona, Żółta)
* Rezystory ograniczające prąd dla diod (np. 220Ω)
* Przewody połączeniowe i płytka stykowa (breadboard)

---

## 🔌 Schemat Podłączenia

| Komponent / Piny | Pin w Arduino |
| --- | --- |
| **Buzzer** | Pin 10 |
| **Czujnik PIR** | Pin 9 |
| **Dioda Czerwona** | Pin 11 |
| **Dioda Zielona** | Pin 12 |
| **Dioda Żółta** | Pin 13 |
| **Klawiatura (Wiersze)** | Piny 1, 2, 3, 4 |
| **Klawiatura (Kolumny)** | Piny 5, 6, 7, 8 |

---

## ⚙️ Jak to działa?

System przechodzi przez trzy główne stany:

1. **Stan Uzbrajania (Żółta LED):** Po uruchomieniu systemu klawiszem `#`, następuje 5-sekundowe opóźnienie przed pełnym uzbrojeniem.
2. **Stan Uzbrojony (Zielona LED):** System czuwa i monitoruje czujnik PIR.
3. **Stan Alarmu (Czerwona LED + Buzzer):** Po wykryciu ruchu włącza się sygnał dźwiękowy oraz czerwona dioda ostrzegawcza.

---

## 🚀 Instalacja

1. Upewnij się, że masz zainstalowaną bibliotekę **Keypad** w środowisku Arduino IDE.
2. Skopiuj kod do swojego Arduino IDE.
3. Wgraj program na swoją płytkę Arduino.
