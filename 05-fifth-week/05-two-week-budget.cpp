// ============================================================
//  Buxheti i dy javëve — bashkimi i dy vektorëve
//  Koncepte: kopjim në varg të tretë, indekse
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DAYS = 7;
    double week1[DAYS];
    double week2[DAYS];
    double both[DAYS * 2];   // bashkimi: 14 ditë

    cout << "Week 1 spending (7 days, EUR): ";
    for (int i = 0; i < DAYS; i++) {
        cin >> week1[i];
    }

    cout << "Week 2 spending (7 days, EUR): ";
    for (int i = 0; i < DAYS; i++) {
        cin >> week2[i];
    }

    // Bashkimi: fillimisht java 1, pastaj java 2
    for (int i = 0; i < DAYS; i++) {
        both[i] = week1[i];
    }
    for (int i = 0; i < DAYS; i++) {
        both[DAYS + i] = week2[i];
    }

    double total = 0.0;
    for (int i = 0; i < DAYS * 2; i++) {
        total += both[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nCombined 14-day spending: ";
    for (int i = 0; i < DAYS * 2; i++) {
        cout << both[i] << " ";
    }
    cout << endl;
    cout << "Two-week total: " << total << " EUR" << endl;
    cout << "Daily average:  " << (total / (DAYS * 2)) << " EUR" << endl;

    return 0;
}
