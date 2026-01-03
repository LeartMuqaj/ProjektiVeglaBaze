#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Check positive, negative, or zero
    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    // Check even or odd
    if (number != 0) {
        if (number % 2 == 0) {
            cout << "The number is even." << endl;
        }
        else {
            cout << "The number is odd." << endl;
        }
    }
    
    cout << "Cube of the number: " << number * number * number << endl;

    return 0;
}

