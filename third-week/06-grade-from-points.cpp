// ============================================================
//  Nota sipas numrit të pikëve (sistemi 5–10)
//  Koncepte: else if me intervale, switch nuk është ideal këtu
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int points;
    int grade;

    cout << "Enter points (0-100): ";
    cin >> points;

    // Validim i thjeshtë i hyrjes
    if (points < 0 || points > 100) {
        cout << "Invalid points. Must be between 0 and 100." << endl;
        return 1;
    }

    // Shkalla tipike universitare (përshtatur për shembull)
    //   0–49  → 5 (mbetës)
    //  50–59  → 6
    //  60–69  → 7
    //  70–79  → 8
    //  80–89  → 9
    //  90–100 → 10
    if (points < 50) {
        grade = 5;
    } else if (points < 60) {
        grade = 6;
    } else if (points < 70) {
        grade = 7;
    } else if (points < 80) {
        grade = 8;
    } else if (points < 90) {
        grade = 9;
    } else {
        grade = 10;
    }

    cout << "Grade: " << grade << endl;

    if (grade == 5) {
        cout << "Status: failed — see you at the next exam!" << endl;
    } else if (grade == 10) {
        cout << "Status: excellent — coffee is on us (metaphorically)." << endl;
    } else {
        cout << "Status: passed." << endl;
    }

    return 0;
}
