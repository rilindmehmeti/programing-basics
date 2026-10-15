// ============================================================
//  Notat e lëndëve — shuma, prodhimi, mesatarja e n numrave
//  Koncepte: for me n të panjohur, akumulatorë
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double grade;
    double sum = 0.0;
    double product = 1.0;

    cout << "How many subjects? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Grade for subject " << i << ": ";
        cin >> grade;
        sum += grade;
        product *= grade;
    }

    cout << fixed << setprecision(2);
    cout << "\nSum:     " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << (sum / n) << endl;

    return 0;
}