// ============================================================
//  int = 3.5, float, showpos dhe showpoint
//  Koncepte: konvertimi në int, if/else, manipulatorët e cout
//  TIPI: Pyetje  (Kolokviumi K2 — Detyra 3)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int a = 3.5, b = 2;
    float c = a + b;

    if (c * 2 < 11) {
        cout << c - 1 << endl;
    } else {
        cout << showpos << showpoint << c << endl;
        cout << ++b << endl;
    }

    return 0;
}
