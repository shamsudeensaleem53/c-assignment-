// ============================================================
// BEE 208 - Control Statements in C++
// Question 6: Series Resistor Calculator
// Topic: for loop
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double resistorValue;
    double totalResistance = 0;
    int i;

    // Display program header
    cout << "============================================" << endl;
    cout << "   BEE 208 - Series Resistor Calculator    " << endl;
    cout << "============================================" << endl;
    cout << "Enter the values of 5 resistors in series:" << endl;
    cout << "--------------------------------------------" << endl;

    // Use a for loop to accept 5 resistor values and add them
    for (i = 1; i <= 5; i++) {
        cout << "Enter value of Resistor R" << i << " (in Ohms): ";
        cin >> resistorValue;
        totalResistance = totalResistance + resistorValue;
    }

    // Display the total resistance
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Series Resistance = " << totalResistance << " Ohms" << endl;
    cout << "============================================" << endl;

    return 0;
}
