#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double grade, secondGrade, thirdGrade;
    cout << "Enter three grade (e.g 7 12 9): ";
    cin >> grade >> secondGrade >> thirdGrade;
    cout << fixed << setprecision(2);
    cout << "\nAverage grade is: " << (grade + secondGrade + thirdGrade) / 3.00 << endl;
    return 0;
}
