// ============================================================
//  Shuma e numrave çift deri në n — for dhe while krah për krah
//  Koncepte: bllok-diagram, gjurmim, rishkrimi i for me while
//  TIPI: Pyetje  (Kolokviumi K1 — Detyra 1)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int n, shuma = 0;
    cout << "Shenoni nje numer: ";
    cin >> n;

    if (n > 2) {
        for (int i = 2; i <= n; i += 2) { shuma += i; }
    } else {
        shuma = 20;
    }
    cout << "Me for:   " << shuma << endl;

    shuma = 0;
    if (n > 2) {
        int i = 2;
        while (i <= n) {
            shuma += i;
            i += 2;
        }
    } else {
        shuma = 20;
    }
    cout << "Me while: " << shuma << endl;

    return 0;
}
