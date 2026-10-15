// ============================================================
//  Tabela e çmimeve — unaza të ndërthurura (nested for)
//  Koncepte: for brenda for, formatim i thjeshtë
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int maxN;

    cout << "Multiplication table size (e.g. 10): ";
    cin >> maxN;

    cout << "\n=== PRICE TABLE (units x unitPrice) ===\n";
    cout << "    ";
    for (int col = 1; col <= maxN; col++) {
        cout << setw(4) << col;
    }
    cout << endl;

    // Rreshti = sasia, kolona = çmimi njësi (1..maxN EUR)
    for (int row = 1; row <= maxN; row++) {
        cout << setw(3) << row << " ";
        for (int col = 1; col <= maxN; col++) {
            cout << setw(4) << (row * col);
        }
        cout << endl;
    }

    return 0;
}
