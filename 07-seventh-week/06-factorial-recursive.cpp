// ============================================================
//  Faktorieli rekursiv — i njëjti problem, qasje tjetër
//  Koncepte: funksion që thërret vetveten
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1;   // rasti bazë
    }
    return n * factorial(n - 1);   // hapi rekursiv
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << n << "! = " << factorial(n) << endl;

    return 0;
}