// ============================================================
//  Shitjet e kafenes — shuma, mesatarja, min, max
//  Koncepte: i njëjti model si 01, tip double
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DAYS = 5;   // e hënë – e premte
    double sales[DAYS];

    cout << "Enter cafe sales for 5 weekdays (EUR): ";
    for (int i = 0; i < DAYS; i++) {
        cin >> sales[i];
    }

    double sum = 0.0;
    double minimum = sales[0];
    double maximum = sales[0];

    for (int i = 0; i < DAYS; i++) {
        sum += sales[i];
        if (sales[i] < minimum) {
            minimum = sales[i];
        }
        if (sales[i] > maximum) {
            maximum = sales[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nWeekly total:  " << sum << " EUR" << endl;
    cout << "Daily average: " << (sum / DAYS) << " EUR" << endl;
    cout << "Quietest day:  " << minimum << " EUR" << endl;
    cout << "Busiest day:   " << maximum << " EUR" << endl;

    return 0;
}