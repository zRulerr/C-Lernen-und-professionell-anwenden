#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void) {

    string meldung = "\nAus Fehlern wird man klug!";
    cout << meldung << endl;

    double a = 4,
        b = 12.25,
        c = 0.0121,
        user_input = 0.0,
        ergebnis = 0.0;

    // cout << "Bitte geben Sie einen Wert ein (kommazahlen mit \".\" schreiben)" << endl;
    // cin >> user_input;
    // cout << "Folgender Wert wurde erkannt: " << user_input << endl;

    int len = meldung.length();
    cout << "\n" << len << "\n";

    //Ausgabe Tabelle
    cout << "\n" << "ZAHL\t\tWURZEL\n" << endl; 

    ergebnis = sqrt(a);
    cout << a << "\t\t" << ergebnis << endl;

    ergebnis = sqrt(b);
    cout << b << "\t\t" << ergebnis << endl;

    ergebnis = sqrt(c);
    cout << c << "\t\t" << ergebnis << endl;

    ergebnis = sqrt(user_input);
    cout << user_input << "\t\t" << ergebnis << endl;

    return 0;
}