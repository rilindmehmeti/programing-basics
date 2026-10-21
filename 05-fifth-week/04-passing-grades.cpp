// ============================================================
//  Vetëm notat kaluese — filtër në vektor të ri
//  Koncepte: kusht + mbushje e një vargu të dytë
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int MAX = 30;
    int grades[MAX];
    int passing[MAX];
    int count;
    int passingCount = 0;

    cout << "How many grades? ";
    cin >> count;
    if (count > MAX) {
        count = MAX;
    }

    cout << "Enter grades (5-10): ";
    for (int i = 0; i < count; i++) {
        cin >> grades[i];
    }

    // Mbajmë vetëm notat >= 6 (kaluese)
    for (int i = 0; i < count; i++) {
        if (grades[i] >= 6) {
            passing[passingCount] = grades[i];
            passingCount++;
        }
    }

    cout << "\nAll grades:     ";
    for (int i = 0; i < count; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;

    cout << "Passing grades: ";
    if (passingCount == 0) {
        cout << "(none)";
    } else {
        for (int i = 0; i < passingCount; i++) {
            cout << passing[i] << " ";
        }
    }
    cout << endl;
    cout << "Passed: " << passingCount << " / " << count << endl;

    return 0;
}
