// ============================================================
//  Studenti me pikët më të larta — rreshti me shumën max
//  Koncepte: shuma e rreshtit + krahasim
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 4;
    const int TESTS = 3;
    int scores[STUDENTS][TESTS] = {
        {8, 7, 9},
        {6, 5, 7},
        {10, 9, 8},
        {7, 8, 6}
    };

    cout << "Scores (4 students x 3 tests):" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "  Student " << (i + 1) << ": ";
        for (int j = 0; j < TESTS; j++) {
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int bestIndex = 0;
    int bestSum = 0;

    for (int i = 0; i < STUDENTS; i++) {
        int rowSum = 0;
        for (int j = 0; j < TESTS; j++) {
            rowSum += scores[i][j];
        }
        cout << "Student " << (i + 1) << " total: " << rowSum << endl;

        if (rowSum > bestSum) {
            bestSum = rowSum;
            bestIndex = i;
        }
    }

    cout << "\nTop student: #" << (bestIndex + 1)
         << " with " << bestSum << " points" << endl;

    return 0;
}
