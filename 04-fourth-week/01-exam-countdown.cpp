// ============================================================
//  Countdown për provim — shtypja e serive me for
//  Koncepte: for, numërim mbrapsht, hap (step)
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int start;

    cout << "Seconds until the exam starts: ";
    cin >> start;

    // Countdown: start, start-1, ... , 1
    cout << "\nCountdown:" << endl;
    for (int i = start; i >= 1; i--) {
        cout << i << "..." << endl;
    }
    cout << "GO! Good luck!" << endl;

    // Seri tjetër: vetëm numrat çift deri te start
    cout << "\nEven numbers from 2 to " << start << ": ";
    for (int i = 2; i <= start; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}