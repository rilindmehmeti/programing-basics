// ============================================================
//  Dhoma — void për shtypje + funksion me kthim (sipërfaqja)
//  Koncepte: void, return, thirrja e funksionit
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

// Vetëm shtyp — nuk kthen asgjë
void printTitle() {
    cout << "=== Room calculator ===" << endl;
}

// Llogarit dhe kthen sipërfaqen
double rectangleArea(double width, double length) {
    return width * length;
}

int main() {
    double width = 4.5;
    double length = 6.0;

    printTitle();

    cout << "Width:  " << width << " m" << endl;
    cout << "Length: " << length << " m" << endl;
    cout << "Area:   " << rectangleArea(width, length) << " m2" << endl;

    return 0;
}
