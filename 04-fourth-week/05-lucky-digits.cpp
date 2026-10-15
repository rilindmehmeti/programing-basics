// ============================================================
//  Numri i fatit — numërimi dhe shuma e shifrave
//  Koncepte: while, % 10, / 10
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    long long number;
    int digitCount = 0;
    int digitSum = 0;

    cout << "Enter your student ID (or any positive number): ";
    cin >> number;

    if (number < 0) {
        number = -number;   // punojmë me vlerën absolute
    }

    if (number == 0) {
        digitCount = 1;
        digitSum = 0;
    } else {
        // Nxjerrim shifrat nga e djathta: 123 → 3, pastaj 2, pastaj 1
        while (number > 0) {
            int digit = number % 10;
            digitSum += digit;
            digitCount++;
            number = number / 10;
        }
    }

    cout << "Digit count: " << digitCount << endl;
    cout << "Digit sum:   " << digitSum << endl;

    if (digitSum % 7 == 0) {
        cout << "Lucky number! (sum divisible by 7)" << endl;
    } else {
        cout << "Not lucky this time — try another ID :)" << endl;
    }

    return 0;
}
