// ============================================================
//  15 numra në rritje — ndalo kur numri nuk është më i madh
//  Koncepte: for, break, krahasimi me vlerën paraprake
//  TIPI: Detyre  (Kolokviumi K1 — Detyra 3)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int COUNT = 15;
    double number;
    double previous = 0;

    for (int i = 0; i < COUNT; i++) {
        cout << "Shenoni nje numer: ";
        cin >> number;

        if (i > 0 && number <= previous) {
            cout << "Numri i shenuar " << number
                 << " eshte me i vogel se numri paraprak " << previous << "." << endl;
            break;
        }

        previous = number;
    }

    return 0;
}
