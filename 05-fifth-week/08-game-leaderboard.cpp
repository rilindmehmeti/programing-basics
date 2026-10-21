// ============================================================
//  Leaderboard i lojës — bubble sort zbritës
//  Koncepte: e njëjta ide si 07, por > bëhet <
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int MAX = 15;
    int scores[MAX];
    int count;

    cout << "How many players? ";
    cin >> count;
    if (count > MAX) {
        count = MAX;
    }

    cout << "Enter scores: ";
    for (int i = 0; i < count; i++) {
        cin >> scores[i];
    }

    // Bubble sort — rend zbritës (më i larti → më i ulëti)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) {
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    cout << "\n=== LEADERBOARD ===" << endl;
    for (int i = 0; i < count; i++) {
        cout << "  #" << (i + 1) << "  " << scores[i] << " pts" << endl;
    }

    if (count >= 3) {
        cout << "\nPodium: " << scores[0] << " / "
             << scores[1] << " / " << scores[2] << endl;
    }

    return 0;
}
