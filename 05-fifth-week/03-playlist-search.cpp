// ============================================================
//  A është kjo këngë në playlist? — kërkim linear
//  Koncepte: for + if, ndërprerja e hershme, "nuk u gjet"
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 20;
    string songs[MAX];
    int count;

    cout << "How many songs in the playlist? ";
    cin >> count;
    if (count > MAX) {
        count = MAX;
    }

    cout << "Enter song titles (one word each, e.g. Believer):" << endl;
    for (int i = 0; i < count; i++) {
        cin >> songs[i];
    }

    string target;
    cout << "Search for song: ";
    cin >> target;

    // Kërkimi linear: krahasojmë një nga një
    int foundIndex = -1;
    for (int i = 0; i < count; i++) {
        if (songs[i] == target) {
            foundIndex = i;
            break;   // e gjetëm — nuk na duhet të vazhdojmë
        }
    }

    if (foundIndex == -1) {
        cout << "\"" << target << "\" is not in the playlist." << endl;
    } else {
        cout << "\"" << target << "\" found at position " << (foundIndex + 1) << endl;
    }

    return 0;
}
