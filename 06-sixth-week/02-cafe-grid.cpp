// ============================================================
//  Shitjet e kafenes (produkte × ditë) — shuma rresht / kolonë
//  Koncepte: i njëjti model si 01, me double
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int PRODUCTS = 3;
    const int DAYS = 4;
    double sales[PRODUCTS][DAYS];

    cout << "Enter sales (EUR) for 3 products over 4 days:" << endl;
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Product " << (i + 1) << ": ";
        for (int j = 0; j < DAYS; j++) {
            cin >> sales[i][j];
        }
    }

    cout << fixed << setprecision(2);

    cout << "\nTotal per product:" << endl;
    for (int i = 0; i < PRODUCTS; i++) {
        double rowSum = 0.0;
        for (int j = 0; j < DAYS; j++) {
            rowSum += sales[i][j];
        }
        cout << "  Product " << (i + 1) << ": " << rowSum << " EUR" << endl;
    }

    cout << "\nTotal per day:" << endl;
    for (int j = 0; j < DAYS; j++) {
        double colSum = 0.0;
        for (int i = 0; i < PRODUCTS; i++) {
            colSum += sales[i][j];
        }
        cout << "  Day " << (j + 1) << ": " << colSum << " EUR" << endl;
    }

    return 0;
}
