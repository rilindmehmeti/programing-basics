// ============================================================
//  Çmimet e produkteve — bubble sort rritës
//  Koncepte: këmbimi (swap), cikle të dyfishta
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 20;
    double prices[MAX];
    int count;

    cout << "How many products? ";
    cin >> count;
    if (count > MAX) {
        count = MAX;
    }

    cout << "Enter prices (EUR): ";
    for (int i = 0; i < count; i++) {
        cin >> prices[i];
    }

    // Bubble sort — rend rritës (më i liri → më i shtrenjti)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (prices[j] > prices[j + 1]) {
                // Këmbimi i dy elementeve
                double temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nPrices cheapest → most expensive: ";
    for (int i = 0; i < count; i++) {
        cout << prices[i] << " ";
    }
    cout << "EUR" << endl;

    return 0;
}
