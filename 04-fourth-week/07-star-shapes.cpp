// ============================================================
//  Figura me yje — trekëndësh dhe drejtkëndësh
//  Koncepte: nested for, kontrolli i kolonave sipas rreshtit
//  TIPI: Detyre
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int height;
    int width;

    cout << "Triangle height: ";
    cin >> height;

    cout << "\nTriangle:\n";
    for (int row = 1; row <= height; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nRectangle width and height: ";
    cin >> width >> height;

    cout << "\nRectangle:\n";
    for (int row = 1; row <= height; row++) {
        for (int col = 1; col <= width; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}