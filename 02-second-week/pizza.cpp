#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {
    const double PI = 3.14;
    
    double diameter, price;
    double secondDiameter, secondPrice;

    cout << "Pizza A -> diameter (cm) and price (EUR): ";
    cin >> diameter >> price;

    cout << "Pizza B -> diameter (cm) and price (EUR): ";
    cin >> secondDiameter >> secondPrice;

    double area = PI * pow(diameter / 2.00, 2);
    double secondArea = PI * pow(secondDiameter / 2.00, 2);

    double pricePerCm2 = price / area;
    double secondPricePerCm2 = secondPrice / secondArea;

    cout << "Price for cm2 of Pizza A is: " << pricePerCm2 << endl;
    cout << "Price for cm2 of Pizza B is: " << secondPricePerCm2 << endl;

    return 0;
}
