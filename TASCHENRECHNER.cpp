#include <iostream>
using namespace std;

void Addieren();
void Subtrahieren();
void Multiplizieren();
void Dividieren();

int main()
{
    int Auswahl;

    do
    {
        cout << "TASCHENRECHNER" << endl;

        cout << "1 - Addieren" << endl;
        cout << "2 - Subtrahieren" << endl;
        cout << "3 - Multiplizieren" << endl;
        cout << "4 - Dividieren" << endl;
        cout << "5 - Programm beenden" << endl;

        cout << endl;

        cout << "Waehle eine Rechenoperation: ";
        cin >> Auswahl;

        cout << endl;

        switch (Auswahl)
        {
            case(1):
            {
                Addieren();

            } break;

            case(2):
            {
                Subtrahieren();

            } break;

            case(3):
            {
                Multiplizieren();

            } break;

            case(4):
            {
                Dividieren();

            } break;

            case(5):
            {
                cout << "Programm beenden" << endl;

            } break;

            default:
            {
                cout << "Falsche Eingabe!" << endl;
            }

            cout << endl;
        }
    } while (Auswahl != 5);

    return 0;
}

void Addieren()
{
    int Zahl1;
    int Zahl2;
    int Ergebnis;

    cout << "Zahl 1: ";
    cin >> Zahl1;

    cout << "Zahl 2: ";
    cin >> Zahl2;

    Ergebnis = Zahl1 + Zahl2;

    cout << "Ergebnis: " << Ergebnis << endl;

    cout << endl;
}

void Subtrahieren()
{
    int Zahl1;
    int Zahl2;
    int Ergebnis;

    cout << "Zahl 1: ";
    cin >> Zahl1;

    cout << "Zahl 2: ";
    cin >> Zahl2;

    Ergebnis = Zahl1 - Zahl2;

    cout << "Ergebnis: " << Ergebnis << endl;

    cout << endl;
}

void Multiplizieren()
{
    int Zahl1;
    int Zahl2;
    int Ergebnis;

    cout << "Zahl 1: ";
    cin >> Zahl1;

    cout << "Zahl 2: ";
    cin >> Zahl2;

    Ergebnis = Zahl1 * Zahl2;

    cout << "Ergebnis: " << Ergebnis << endl;

    cout << endl;
}

void Dividieren()
{
    float Zahl1;
    float Zahl2;
    float Ergebnis;

    cout << "Zahl 1: ";
    cin >> Zahl1;

    cout << "Zahl 2: ";
    cin >> Zahl2;

    Ergebnis = Zahl1 / Zahl2;

    cout << "Ergebnis: " << Ergebnis << endl;

    cout << endl;
}
