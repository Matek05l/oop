#include <iostream>
#include <string>

using namespace std;

class Figura {
public:
    string kolor;

    virtual void opis() {
        cout << "Kolor figury: " << kolor << endl;
    }
};

class Kolo : public Figura {
public:
    double promien;

    void opis() override {
        double pole = 3.14159 * promien * promien;
        double obwod = 2 * 3.14159 * promien;

        cout << "KOLO" << endl;
        cout << "Kolor: " << kolor << endl;
        cout << "Pole: " << pole << endl;
        cout << "Obwod: " << obwod << endl;
    }
};

class Kwadrat : public Figura {
public:
    double bok;

    void opis() override {
        double pole = bok * bok;
        double obwod = 4 * bok;

        cout << "KWADRAT" << endl;
        cout << "Kolor: " << kolor << endl;
        cout << "Pole: " << pole << endl;
        cout << "Obwod: " << obwod << endl;
    }
};

int main() {
    int wybor;
    cout << "Wybierz figure:\n1 - Kolo\n2 - Kwadrat\n";
    cin >> wybor;

    if (wybor == 1) {
        Kolo k;
        cout << "Podaj kolor: ";
        cin >> k.kolor;
        cout << "Podaj promien: ";
        cin >> k.promien;
        cout << endl;
        k.opis();
    }
    else if (wybor == 2) {
        Kwadrat q;
        cout << "Podaj kolor: ";
        cin >> q.kolor;
        cout << "Podaj bok: ";
        cin >> q.bok;
        cout << endl;
        q.opis();
    }
    else {
        cout << "Niepoprawny wybor." << endl;
    }

    return 0;
}
