# oop
#include <iostream>
#include <string>

using namespace std;

// Klasa bazowa
class Figura {
public: // Ustawiamy na public, żeby inne klasy i funkcja main miały tu dostęp
    string kolor;

    // Podstawowa metoda opis
    void opis() {
        cout << "Kolor figury: " << kolor << endl;
    }
};

// Klasa Kolo, która dziedziczy po klasie Figura
class Kolo : public Figura {
public:
    double promien;

    // Tworzymy nową metodę opis specjalnie dla Koła
    void opis() {
        double pole = 3.14159 * promien * promien;
        double obwod = 2 * 3.14159 * promien;
        
        cout << "--- KOŁO ---" << endl;
        cout << "Kolor: " << kolor << endl; // Możemy użyć 'kolor', bo odziedziczyliśmy to z Figury
        cout << "Pole: " << pole << endl;
        cout << "Obwód: " << obwod << endl;
    }
};

// Klasa Kwadrat, która dziedziczy po klasie Figura
class Kwadrat : public Figura {
public:
    double bok;

    // Tworzymy nową metodę opis specjalnie dla Kwadratu
    void opis() {
        double pole = bok * bok;
        double obwod = 4 * bok;
        
        cout << "--- KWADRAT ---" << endl;
        cout << "Kolor: " << kolor << endl; // Tutaj też mamy dostęp do 'kolor'
        cout << "Pole: " << pole << endl;
        cout << "Obwód: " << obwod << endl;
    }
};

int main() {
    // 1. Zwykła figura
    Figura zwyklaFigura;
    zwyklaFigura.kolor = "Szary"; // Ręczne przypisanie wartości
    zwyklaFigura.opis();
    cout << endl;
    
    // 2. Koło
    Kolo mojeKolo;
    mojeKolo.kolor = "Czerwony"; // Dziedziczy kolor z Figury
    mojeKolo.promien = 5.0;      // Ma swój własny promień
    mojeKolo.opis();
    cout << endl;
    
    // 3. Kwadrat
    Kwadrat mojKwadrat;
    mojKwadrat.kolor = "Niebieski"; // Dziedziczy kolor z Figury
    mojKwadrat.bok = 4.0;           // Ma swój własny bok
    mojKwadrat.opis();

    return 0;
}
