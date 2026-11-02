// ============================================================
//  Playlist në rrjetë — matricë nga vektori (rresht pas rreshti)
//  Koncepte: mbushje e matricës nga një varg 1D
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int CITIES = 3;
    const int DAYS = 4;
    int temp[CITIES][DAYS];
    int freezing[CITIES * DAYS];
    int count = 0;

    cout << "Enter temperatures for 3 cities over 4 days:" << endl;
    for (int i = 0; i < CITIES; i++) {
        cout << "City " << (i + 1) << ": ";
        for (int j = 0; j < DAYS; j++) {
            cin >> temp[i][j];
        }
    }

    for (int i = 0; i < CITIES; i++) {
        for (int j = 0; j < DAYS; j++) {
            if (temp[i][j] < 0) {
                freezing[count] = temp[i][j];
                count++;
            }
        }
    }

    cout << "\nFreezing temperatures: ";
    if (count == 0) {
        cout << "(none)";
    } else {
        for (int i = 0; i < count; i++) {
            cout << freezing[i] << " ";
        }
    }
    cout << endl;
    cout << "Cold days recorded: " << count << endl;

    return 0;
}