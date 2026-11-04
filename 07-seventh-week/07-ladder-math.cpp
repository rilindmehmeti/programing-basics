// ============================================================
//  Shkalla te muri — funksion matematik me cmath
//  Koncepte: sqrt, pow (biblioteka math)
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


double ladderLength(double wallHeight, double distanceFromWall) {
    // Pitagora: hypotenuse = sqrt(a^2 + b^2)
    return sqrt(pow(wallHeight, 2) + pow(distanceFromWall, 2));
}

int main() {
    double wallHeight = 3.0;       // metra
    double distanceFromWall = 1.5; // metra

    cout << fixed << setprecision(2);
    cout << "Wall height:        " << wallHeight << " m" << endl;
    cout << "Distance from wall: " << distanceFromWall << " m" << endl;
    cout << "Ladder length:      "
         << ladderLength(wallHeight, distanceFromWall) << " m" << endl;

    return 0;
}
