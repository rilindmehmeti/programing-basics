// ============================================================
//  Ulëset e kinemasë — diagonalia kryesore dhe dytësore
//  Koncepte: [i][i] dhe [i][n-1-i]
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int N = 3;
    int seats[N][N];

    cout << "Enter ticket prices for a 3x3 cinema hall:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> seats[i][j];
        }
    }

    int mainSum = 0;
    int secondarySum = 0;

    for (int i = 0; i < N; i++) {
        mainSum += seats[i][i];                 // diagonalia kryesore
        secondarySum += seats[i][N - 1 - i];    // diagonalia dytësore
    }

    cout << "\nMain diagonal (center aisle) sum:      " << mainSum << endl;
    cout << "Secondary diagonal (other aisle) sum: " << secondarySum << endl;

    return 0;
}
