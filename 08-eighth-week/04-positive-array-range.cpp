// ============================================================
//  Varg me 7 numra pozitivë — sa janë mes a dhe b
//  Koncepte: varg, do-while për validim, numërim me kusht
//  TIPI: Detyre  (Kolokviumi K1 — Detyra 4)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int numbers[SIZE];

    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "vargu[" << i << "] = ";
            cin >> numbers[i];
        } while (numbers[i] <= 0);
    }

    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > a && numbers[i] < b) {
            count++;
        }
    }

    cout << "Elementet e vargut që plotësojnë kushtin > a dhe < b janë "
         << count << "." << endl;

    return 0;
}
