// ============================================================
//  Hapat javore — shuma, mesatarja, min, max
//  Koncepte: vargu (array), for, agregime
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DAYS = 7;
    int steps[DAYS];

    cout << "Enter steps for 7 days (Mon-Sun): ";
    for (int i = 0; i < DAYS; i++) {
        cin >> steps[i];
    }

    int sum = 0;
    int minimum = steps[0];
    int maximum = steps[0];

    for (int i = 0; i < DAYS; i++) {
        sum += steps[i];
        if (steps[i] < minimum) {
            minimum = steps[i];
        }
        if (steps[i] > maximum) {
            maximum = steps[i];
        }
    }

    double average = static_cast<double>(sum) / DAYS;

    cout << fixed << setprecision(1);
    cout << "\nTotal steps:   " << sum << endl;
    cout << "Daily average: " << average << endl;
    cout << "Least active:  " << minimum << endl;
    cout << "Most active:   " << maximum << endl;

    return 0;
}
