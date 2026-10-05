// ============================================================
//  Largesa mes dy pikave në hartë
//  Koncepte: sqrt(), pow(), teorema e Pitagorës
// ============================================================

#include <iostream>
#include <iomanip>
#include <cmath>     // sqrt, pow, abs
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Coordinates of point A (x y): ";
    cin >> x1 >> y1;

    cout << "Coordinates of point B (x y): ";
    cin >> x2 >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;

    // Largesa sipas teoremës së Pitagorës
    double distance = sqrt(pow(dx, 2) + pow(dy, 2));

    cout << fixed << setprecision(2);

    cout << "\nDifference along the x axis: " << abs(dx) << " km" << endl;
    cout << "Difference along the y axis: " << abs(dy) << " km" << endl;
    cout << "Straight-line distance A-B:  " << distance << " km" << endl;

    return 0;
}