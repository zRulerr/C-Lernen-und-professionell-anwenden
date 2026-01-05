#include <iostream>
using namespace std;

int main() {

    //Const = Der Wert kann nicht mehr verändert werden. Z.b x = y + 5 unzulässig
    const int x = 5;
    int y = 9;

    int a = 3;
    int b = 4;

    y = a + b;
    cout << y << endl;    

    //Der Compiler optimiert die Variable nicht und wird jedesmal den Wert 6 sozusagen neu einlesen (Falls externe faktoren genau diese Speicherstelle geändert haben,, sicherheit)
    volatile int f = 6;

    int moin;
    return 0;
}