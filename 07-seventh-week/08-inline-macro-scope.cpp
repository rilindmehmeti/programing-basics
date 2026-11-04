// ============================================================
//  Çmimi me TVSH — inline vs makro + lokale / globale
//  Koncepte: inline, #define, scope
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Variabël globale — e dukshme në të gjithë skedarin
double taxRate = 0.18;

// Makro: zëvendësim teksti para kompajlimit (kujdes me kllapat!)
#define SQUARE(x) ((x) * (x))

// Inline: si funksion normal, por më i shpejtë për trupa të vegjël
inline double addTax(double price) {
    return price * (1 + taxRate);
}

void printFinalPrice(double price) {
    // Variabël lokale — ekziston vetëm brenda këtij funksioni
    double finalPrice = addTax(price);
    cout << "Price with tax: " << finalPrice << " EUR" << endl;
}

int main() {
    double price;

    cout << "Enter price (EUR): ";
    cin >> price;

    cout << fixed << setprecision(2);
    cout << "Global tax rate: " << (taxRate * 100) << "%" << endl;

    printFinalPrice(price);

    cout << "SQUARE of price (macro): " << SQUARE(price) << endl;

    // taxRate mund të ndryshohet këtu sepse është globale
    taxRate = 0.08;
    cout << "\nAfter changing global tax to 8%:" << endl;
    printFinalPrice(price);

    return 0;
}
