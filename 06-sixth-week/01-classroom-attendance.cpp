// ============================================================
//  Prezenca në klasë — shuma sipas rreshtave dhe kolonave
//  Koncepte: matricë 2D, for të ndërthurura
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int GROUPS = 3;
    const int DAYS = 5;
    int attendance[GROUPS][DAYS] = {
        {18, 20, 19, 21, 17},
        {22, 22, 20, 23, 21},
        {15, 16, 14, 18, 16}
    };

    cout << "Attendance (3 groups x 5 days):" << endl;
    for (int i = 0; i < GROUPS; i++) {
        cout << "  Group " << (i + 1) << ": ";
        for (int j = 0; j < DAYS; j++) {
            cout << attendance[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nStudents per group (row sums):" << endl;
    for (int i = 0; i < GROUPS; i++) {
        int rowSum = 0;
        for (int j = 0; j < DAYS; j++) {
            rowSum += attendance[i][j];
        }
        cout << "  Group " << (i + 1) << ": " << rowSum << endl;
    }

    cout << "\nStudents per day (column sums):" << endl;
    for (int j = 0; j < DAYS; j++) {
        int colSum = 0;
        for (int i = 0; i < GROUPS; i++) {
            colSum += attendance[i][j];
        }
        cout << "  Day " << (j + 1) << ": " << colSum << endl;
    }

    return 0;
}
