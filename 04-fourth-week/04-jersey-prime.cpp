// ============================================================
//  A është numri i fanellës i thjeshtë?
//  Koncepte: for deri te sqrt (ose n/2), flamur bool
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter jersey number: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        // Njafton të kontrollojmë deri te number/2
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;   // e gjetëm pjesëtuesin — ndal
            }
        }
    }

    if (isPrime) {
        cout << number << " is a prime jersey number!" << endl;
    } else {
        cout << number << " is not prime." << endl;
    }

    return 0;
}
