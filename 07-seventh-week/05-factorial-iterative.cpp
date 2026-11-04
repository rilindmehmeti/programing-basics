// ============================================================
//  Sa mënyra rreshtimi? — faktorieli iterativ
//  Koncepte: funksion me for, long long
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int friends = 5;

    cout << "Friends to seat: " << friends << endl;
    cout << friends << "! = " << factorial(friends) << endl;
    cout << "Ways to arrange them: " << factorial(friends) << endl;

    return 0;
}
