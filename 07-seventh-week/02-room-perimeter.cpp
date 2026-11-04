// ============================================================
//  Dhoma — edhe perimetri (ndërton mbi 01)
//  Koncepte: disa funksione me return
//  TIPI: Pyetje
// ============================================================

#include <iostream>
using namespace std;

void printTitle() {
    cout << "=== Room calculator ===" << endl;
}

double rectangleArea(double width, double length) {
    return width * length;
}

double rectanglePerimeter(double width, double length) {
    return 2 * (width + length);
}

int main() {
    double width, length;

    cout << "Enter width and length (m): ";
    cin >> width >> length;

    printTitle();
    cout << "Area:      " << rectangleArea(width, length) << " m2" << endl;
    cout << "Perimeter: " << rectanglePerimeter(width, length) << " m" << endl;

    return 0;
}
