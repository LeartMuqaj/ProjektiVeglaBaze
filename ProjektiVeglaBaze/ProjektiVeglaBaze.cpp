#include <iostream>
using namespace std;

bool eshteThjeshte(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    char vendimi;

    do{
    cout << "Jepe nje numer: ";
    cin >> n;

    if (n > 0) {
        cout << "Numri eshte pozitiv." << endl;
    }
    else if (n < 0) {
        cout << "Numri eshte negativ." << endl;
    }
    else {
        cout << "Numri eshte zero." << endl;
    }

    if (n != 0) {
        if (n % 2 == 0) {
            cout << "Numri eshte cift." << endl;
        }
        else {
            cout << "Numri eshte tek." << endl;
        }
    }
    
    if (eshteThjeshte(n)) {
        cout << "Numri eshte i thjeshte." << endl;
    }
    else {
        cout << "Numri nuk eshte i thjeshte." << endl;
    }

    cout << "\nDeshiron te analizosh nje numer tjeter (y/n): ";
    cin >> vendimi;

	} while (vendimi == 'y' || vendimi == 'Y');

    int vleraAbsolute = (n < 0) ? -n : n;
    cout << "Vlera absolute: " << vleraAbsolute << endl;

    cout << "Katrori i numrit: " << n * n << endl;

    cout << "Kubi i numrit: " << n * n * n << endl;



    return 0;
}

