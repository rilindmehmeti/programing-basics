// ============================================================
//  Ekuacioni kuadratik: ax² + bx + c = 0
//  Koncepte: diskriminanti, if me raste matematikore, cmath
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a b c: ";
    cin >> a >> b >> c;
    cout << fixed << setprecision(4);

    if(a == 0) {
        cout << "Not a quadratic equation (a = 0)." << endl;
        if(b == 0) {
            cout << (c == 0 ? "Infinite soltions." : "No solution.") << endl;
        } else {
            cout << "Linear solution: x = " << (-c / b) << endl;
        }
        return 0;
    }

    // Diskrimimanti: D = b2 - 4ac
    double discriminant = b * b - 4 * a * c;
    cout << "Discriminanti D = " << discriminant << endl;

    if(discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real roots:" << endl;
        cout << "   x1 = " << root1 << endl;
        cout << "   x2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "One real root: x = " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots:" << endl;
        cout << "   x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "   x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    
    return 0;
}
