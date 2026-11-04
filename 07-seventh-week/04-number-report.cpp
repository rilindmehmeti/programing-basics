// ============================================================
//  Raporti i numrit — disa funksione në të njëjtin program
//  Koncepte: isEven + isPrime + printReport së bashku
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

bool isEven(int number) {
    return number % 2 == 0;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void printReport(int number) {
    cout << "=== Report for " << number << " ===" << endl;

    if (isEven(number)) {
        cout << "Even:  yes" << endl;
    } else {
        cout << "Even:  no" << endl;
    }

    if (isPrime(number)) {
        cout << "Prime: yes" << endl;
    } else {
        cout << "Prime: no" << endl;
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    printReport(number);

    return 0;
}
