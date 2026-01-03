#include <iostream>
using namespace std;

bool eshteThjeshte(int numri) {
    if (numri <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numri; i++) {
        if (numri % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numri;
    char vendimi;

    do{
    cout << "Jepe nje numer: ";
    cin >> numri;

    if (numri > 0) {
        cout << "Numri eshte pozitiv." << endl;
    }
    else if (numri < 0) {
        cout << "Numri eshte negativ." << endl;
    }
    else {
        cout << "Numri eshte zero." << endl;
    }

    if (numri != 0) {
        if (numri % 2 == 0) {
            cout << "Numri eshte cift." << endl;
        }
        else {
            cout << "Numri eshte tek." << endl;
        }
    }

    if (eshteThjeshte(numri)) {
        cout << "Numri eshte i thjeshte." << endl;
    }
    else {
        cout << "Numri nuk eshte i thjeshte." << endl;
    }

    cout << "\nDeshiron te analizosh nje numer tjeter (y/n): ";
    cin >> vendimi;

	} while (vendimi == 'y' || vendimi == 'Y');

    int vleraAbsolute = (numri < 0) ? -numri : numri;
    cout << "Absolute value: " << vleraAbsolute << endl;



    return 0;
}

