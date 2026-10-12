// ============================================================
//  Çift / tek  +  pozitiv / negativ / zero
//  Koncepte: if / else if / else, operatori %
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an intenger: ";
    cin >> number;

    if(number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << number << " is zero." << endl;
    }

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
