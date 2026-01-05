#include <iostream>
using namespace std;


int main(void) {

    //2.Aufgabe -----------------------------------------------------------------------------------
    cout << "ICH\n\t\"SAUSE\"\n\t\t\\HIN\\\n\tUND\n/HER/"; 

    //3.Aufgabe -----------------------------------------------------------------------------------
    int a(2.5);
    cout << endl << a << endl;

    int b = '?';
    cout << endl << b << endl;

    char z(63);
    cout << endl << z << endl;

    double flaeche(1.2E+5);
    cout << endl << flaeche << endl;

    //const long breite; //Ein variable mit "const" muss davor immer initialisiert werden 

    char c('\'');
    cout << endl << c << endl;

    unsigned char ch = '\201';
    cout << endl << ch << endl;

    unsigned size(40000); //Ist das selbe wie "unsigned int"
    cout << endl << size << endl;

    float val = 12345.12345;
    cout << endl << val << endl;

    //4.Aufgabe -----------------------------------------------------------------------------------
    float m = 123.456f;
    float n = 76.543f;

    double o = m - n;
    cout << endl << "Die Differenz von " << m << " und " << n << "beträgt: " << o << endl;



    return 0;
}