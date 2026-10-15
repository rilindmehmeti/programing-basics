// ============================================================
//  Sa mënyra rreshtimi? — faktorieli
//  Koncepte: for, prodhim kumulativ, 0! dhe 1!
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;   // long long sepse n! rritet shpejt

    cout << "How many friends to seat in a row? ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    // n! = 1 * 2 * 3 * ... * n
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;
    cout << "There are " << factorial << " ways to seat them." << endl;

    return 0;
}
