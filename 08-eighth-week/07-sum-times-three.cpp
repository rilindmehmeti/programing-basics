// ============================================================
//  Shuma e shumëzuar me 3 — variabla, lexim, shprehje
//  Koncepte: int, cin, prioriteti i operatorëve
//  TIPI: Detyre  (Kolokviumi K2 — Detyra 2)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int p, q, r;

    cout << "Jepni p: ";
    cin >> p;
    cout << "Jepni q: ";
    cin >> q;

    r = (p + q) * 3;

    cout << "Prodhimi: " << r * (p + q) << endl;

    return 0;
}
