// ============================================================
//  Ti vs shoku — krahasimi i orëve të studimit
//  Koncepte: krahasim element-për-element + totale
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int DAYS = 5;
    double you[DAYS];
    double friendHours[DAYS];

    cout << "Your study hours (Mon-Fri): ";
    for (int i = 0; i < DAYS; i++) {
        cin >> you[i];
    }

    cout << "Friend study hours (Mon-Fri): ";
    for (int i = 0; i < DAYS; i++) {
        cin >> friendHours[i];
    }

    double yourTotal = 0.0;
    double friendTotal = 0.0;
    int youWonDays = 0;
    int friendWonDays = 0;
    int ties = 0;

    cout << "\nDay-by-day:" << endl;
    for (int i = 0; i < DAYS; i++) {
        yourTotal += you[i];
        friendTotal += friendHours[i];

        cout << "  Day " << (i + 1) << ": ";
        if (you[i] > friendHours[i]) {
            cout << "you (+" << (you[i] - friendHours[i]) << "h)";
            youWonDays++;
        } else if (friendHours[i] > you[i]) {
            cout << "friend (+" << (friendHours[i] - you[i]) << "h)";
            friendWonDays++;
        } else {
            cout << "tie";
            ties++;
        }
        cout << endl;
    }

    cout << "\nYour total:    " << yourTotal << " h" << endl;
    cout << "Friend total:  " << friendTotal << " h" << endl;
    cout << "Days won — you: " << youWonDays
         << ", friend: " << friendWonDays
         << ", ties: " << ties << endl;

    if (yourTotal > friendTotal) {
        cout << "Overall: you studied more this week." << endl;
    } else if (friendTotal > yourTotal) {
        cout << "Overall: your friend studied more this week." << endl;
    } else {
        cout << "Overall: same total hours." << endl;
    }

    return 0;
}
