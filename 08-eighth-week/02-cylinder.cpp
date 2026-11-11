// ============================================================
//  Cilindri — sipërfaqja e bazës dhe vëllimi
//  Koncepte: const, double, formula
//  TIPI: Detyre  (Kolokviumi K1 — Detyra 2)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, length;

    cout << "Jepni vlerën e rrezes: ";
    cin >> radius;
    cout << "Jepni vlerën e gjatësisë: ";
    cin >> length;

    double area = radius * radius * PI;
    double volume = area * length;

    cout << "Sipërfaqja është: " << area << endl;
    cout << "Vëllimi është: " << volume << endl;

    return 0;
}
