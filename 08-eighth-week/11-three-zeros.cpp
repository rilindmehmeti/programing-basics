// ============================================================
//  Lexo derisa të jepen tri zero — shuma e dyshifrorëve pozitivë
//  Koncepte: while, numërues, kusht i përbërë
//  TIPI: Detyre  (Kolokviumi K2 — Detyra 6)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int x;
    int zeros = 0;
    int sum = 0;

    while (zeros < 3) {
        cout << "Jepni nje numer: ";
        cin >> x;

        if (x == 0) {
            zeros++;
        } else if (x >= 10 && x <= 99) {
            sum += x;
        }
    }

    cout << "Shuma e numrave dyshifror pozitiv: " << sum << endl;

    return 0;
}
