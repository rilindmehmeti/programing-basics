// ============================================================
//  Vargu me 10 numra — tekët shndërrohen në çiftin e radhës
//  Koncepte: varg, for, %, numërues
//  TIPI: Detyre  (Kolokviumi K2 — Detyra 7)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int converted = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << "numbers[" << i << "] = ";
        cin >> numbers[i];

        if (numbers[i] % 2 != 0) {
            numbers[i]++;
            converted++;
        }
    }

    cout << "Vargu: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Numra te shnderruar nga tek ne cift: " << converted << endl;

    return 0;
}
