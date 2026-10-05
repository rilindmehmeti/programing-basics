#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double celcius;

    cout << "Enter the temperature in Celcius: ";
    cin >> celcius;

    double fahrenheit = celcius * 9.0 / 5.0 + 32;
    double kelvin = celcius + 273.15;

    cout << fixed << setprecision(2);
    cout << "Celcius: " << celcius << ", Farenheit: " << fahrenheit << ", Kelvin: " << kelvin << endl;

    cout << "\n";

    cout << left << setw(16) << "Unit" 
        << right << setw(12) << "Value" 
        << right << setw(10) << "Symbol" 
        << endl;

    cout << string(38, '-') << endl;

    cout << left << setw(16) << "Celcius" 
        << right << setw(12) << celcius 
        << right << setw(10) << "C" 
        << endl;
    
    cout << left << setw(16) << "Fahreheit" 
        << right << setw(12) << fahrenheit 
        << right << setw(10) << "F" 
        << endl;

    cout << left << setw(16) << "Kelvin"
        << right << setw(12) << kelvin 
        << right << setw(10) << "K" 
        << endl;

    cout << string(38, '-') << endl;

    return 0;
}
