// ============================================================
//  Buxheti i javës — break dhe continue
//  Koncepte: continue (anashkalo), break (ndalo krejt)
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DAYS = 7;
    double expense;
    double total = 0.0;
    double limit;

    cout << "Weekly budget limit (EUR): ";
    cin >> limit;

    cout << "Enter expenses for 7 days (use 0 for a free day):\n";

    for (int day = 1; day <= DAYS; day++) {
        cout << "Day " << day << ": ";
        cin >> expense;

        // continue: anashkalo ditët pa shpenzim
        if (expense == 0) {
            cout << "  (skipped — free day)\n";
            continue;
        }

        total += expense;
        cout << "  running total: " << fixed << setprecision(2) << total << " EUR\n";

        // break: ndalo sapo të kalojë buxheti
        if (total > limit) {
            cout << "Budget exceeded on day " << day << "! Stopping.\n";
            break;
        }
    }

    cout << "\nFinal total: " << fixed << setprecision(2) << total << " EUR" << endl;
    if (total <= limit) {
        cout << "You stayed within budget. Nice!" << endl;
    }

    return 0;
}
