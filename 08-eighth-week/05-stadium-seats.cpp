// ============================================================
//  Ulëset e stadiumit — switch me shkronja të mëdha dhe të vogla
//  Koncepte: char, switch, case pa break (fall-through), përqindje
//  TIPI: Detyre  (Kolokviumi K1 — Detyra 5)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int capacity;
    char place;

    cout << "Shenoni kapacitetin e stadiumit: ";
    cin >> capacity;
    cout << "Shenoni vendin e ndeshjes (V për vendas, M për mysafir dhe N për neutral): ";
    cin >> place;

    switch (place) {
        case 'V':
        case 'v':
            cout << "Numri i ulëseve për vendasit: " << capacity * 70 / 100 << endl;
            break;
        case 'M':
        case 'm':
            cout << "Numri i ulëseve për mysafirët: " << capacity * 30 / 100 << endl;
            break;
        case 'N':
        case 'n':
            cout << "Numri i ulëseve në fushë neutrale: " << capacity * 50 / 100 << endl;
            break;
        default:
            cout << "Hyrja nuk është valide." << endl;
    }

    return 0;
}
