// ============================================================
//  Kalkulator i thjeshtë me switch
//  Koncepte: switch / case / break / default, char si operator
//  TIPI: Detyre
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double left, right, result;
    char op;

    cout << "Enter expression (e.g 12.5 * 3): ";
    cin >> left >> op >> right;

    cout << fixed << setprecision(2);

    switch(op) {
        case '+':
            result = left + right;
            break;
        case '-':
            result = left - right;
            break;
        case '*':
            result = left * right;
            break;
        case '/':
            if(right == 0) {
                cout << "Error: division by zero." << endl;
                return 1;
            }
            result = left / right;
            break;
        case '%':
            result = static_cast<int>(left) % static_cast<int>(right);
            break;
        default:
            cout << "Unknown opeartor." << endl;
            return 1;
    }

    cout << left << " " << op << " " << right << " = " << result << endl;
    return 0;
}
