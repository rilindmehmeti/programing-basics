// ============================================================
//  Parkingu — matricë nga vektori (kolonë pas kolone)
//  Koncepte: i njëjti ide si 07, model i ndryshëm
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int cars[ROWS * COLS];
    int lot[ROWS][COLS];

    cout << "Enter 12 car numbers (queue order): ";
    for (int i = 0; i < ROWS * COLS; i++) {
        cin >> cars[i];
    }

    // Modeli: kolonë pas kolone (lane by lane)
    int k = 0;
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            lot[i][j] = cars[k];
            k++;
        }
    }

    cout << "\nParking lot:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << lot[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
