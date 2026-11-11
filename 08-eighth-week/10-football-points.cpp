// ============================================================
//  Pikët e ekipit për 5 ndeshje — switch brenda unazës
//  Koncepte: char, switch, while, përsëritja e leximit
//  TIPI: Detyre  (Kolokviumi K2 — Detyra 5)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int MATCHES = 5;
    char rez;
    int total = 0;
    int played = 0;

    while (played < MATCHES) {
        cout << "Rezultati i ndeshjes " << (played + 1) << " (F/H/B): ";
        cin >> rez;

        switch (rez) {
            case 'F':
                total += 3;
                played++;
                break;
            case 'H':
                played++;
                break;
            case 'B':
                total += 1;
                played++;
                break;
            default:
                cout << "Karakteri '" << rez << "' nuk eshte valid. Provoni perseri." << endl;
        }
    }

    cout << "Totali i pikeve: " << total << endl;
    cout << "Mesatarja per ndeshje: " << (double)total / MATCHES << endl;

    return 0;
}
