// ============================================================
//  Numri i fanellës — funksion që kontrollon nëse është i thjeshtë
//  Koncepte: funksion bool, return true/false
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

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

int main() {
    int jersey = 17;

    cout << "Jersey number: " << jersey << endl;

    if (isPrime(jersey)) {
        cout << jersey << " is a prime jersey number!" << endl;
    } else {
        cout << jersey << " is not prime." << endl;
    }

    return 0;
}
