// ============================================================
//  Paga neto — kontributi pensional dhe tatimi në pagë
//  Koncepte: double, përqindje, renditja e llogaritjeve
//  TIPI: Detyre  (Kolokviumi K2 — Detyra 8)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    double paga;

    cout << "Jepni pagen bruto: ";
    cin >> paga;

    double pension = paga * 0.05;
    double tax = (paga - pension) * 0.07;
    double net = paga - pension - tax;

    cout << "Kontributi pensional (5%): " << pension << endl;
    cout << "Tatimi ne page (7%): " << tax << endl;
    cout << "Paga neto: " << net << endl;

    return 0;
}
