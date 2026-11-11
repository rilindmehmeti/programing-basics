// ============================================================
//  Shuma prej x deri në y — me rregull për shumëfishat e 6
//  Koncepte: for, %, if/else brenda unazës
//  TIPI: Detyre  (Kolokviumi K2 — Detyra 4)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Jepni x: ";
    cin >> x;
    cout << "Jepni y (y > x): ";
    cin >> y;

    int sum = 0;

    for (int i = x; i <= y; i++) {
        if (i % 6 == 0) {
            sum -= i / 2;
        } else {
            sum += i;
        }
    }

    cout << "Rezultati: " << sum << endl;

    return 0;
}
