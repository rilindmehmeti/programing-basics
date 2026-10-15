// ============================================================
//  Çmimi i biletës së kinemasë sipas moshës
//  Koncepte: if / else if / else me intervale
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age;
    double price;

    cout << "Enter your age: ";
    cin >> age;

    // Rregullat e çmimeve (inventuar për shembull)
    //   < 5   → falas
    //   5-17  → 3.50 EUR (nxënës)
    //   18-64 → 6.00 EUR (i rritur)
    //   65+   → 4.00 EUR (pensionist)
    if (age < 5) {
        price = 0.0;
        cout << "Free entry for little ones!" << endl;
    } else if (age <= 17) {
        price = 3.50;
    } else if (age <= 64) {
        price = 6.00;
    } else {
        price = 4.00;
    }

    cout << fixed << setprecision(2);
    cout << "Ticket price: " << price << " EUR" << endl;

    return 0;
}
