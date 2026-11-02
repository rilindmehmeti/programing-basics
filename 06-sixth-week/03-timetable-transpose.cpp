// ============================================================
//  Orari i orëve — transpozimi i matricës
//  Koncepte: timetable[orë][ditë] → swapped[ditë][orë]
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int HOURS = 3;
    const int DAYS = 4;
    int timetable[HOURS][DAYS] = {
        {101, 102, 101, 103},
        {204, 204, 205, 201},
        {310, 311, 310, 312}
    };
    int swapped[DAYS][HOURS];

    cout << "Original (hours x days):" << endl;
    for (int i = 0; i < HOURS; i++) {
        cout << "  Hour " << (i + 1) << ": ";
        for (int j = 0; j < DAYS; j++) {
            cout << timetable[i][j] << " ";
        }
        cout << endl;
    }

    // Transpozimi: rreshti bëhet kolonë
    for (int i = 0; i < HOURS; i++) {
        for (int j = 0; j < DAYS; j++) {
            swapped[j][i] = timetable[i][j];
        }
    }

    cout << "\nView by day (transposed):" << endl;
    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << (i + 1) << ": ";
        for (int j = 0; j < HOURS; j++) {
            cout << swapped[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
