// ============================================================
//  Viti i brishtë (leap year)
//  Koncepte: kushte të kombinuara (&&, ||), rregulla reale
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Rregulla:
    //  - pjesëtueshme me 400  → i brishtë
    //  - pjesëtueshme me 100  → JO i brishtë
    //  - pjesëtueshme me 4    → i brishtë
    //  - përndryshe           → JO
    bool isLeap;

    if (year % 400 == 0) {
        isLeap = true;
    } else if (year % 100 == 0) {
        isLeap = false;
    } else if (year % 4 == 0) {
        isLeap = true;
    } else {
        isLeap = false;
    }

    // Versioni i shkurtër (tregoje NË FUND, pasi e kanë kuptuar logjikën):
    // bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (isLeap) {
        cout << year << " is a leap year (366 days)." << endl;
    } else {
        cout << year << " is not a leap year (365 days)." << endl;
    }

    // Fun fact për klasën — vitet e famshme
    if (year == 2000) {
        cout << "Fun fact: year 2000 WAS a leap year (divisible by 400)." << endl;
    } else if (year == 1900) {
        cout << "Fun fact: year 1900 was NOT a leap year (divisible by 100, not 400)." << endl;
    }

    return 0;
}
