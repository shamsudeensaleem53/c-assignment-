// ============================================================
// BEE 208 - Control Statements in C++
// Question 4: Electrical Component Menu
// Topic: switch statement
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variable for user's menu choice
    int choice;

    // Display program header
    cout << "============================================" << endl;
    cout << "   BEE 208 - Electrical Component Menu     " << endl;
    cout << "============================================" << endl;

    // Display the menu options
    cout << "Select an electrical component:" << endl;
    cout << "  1. Resistor" << endl;
    cout << "  2. Capacitor" << endl;
    cout << "  3. Diode" << endl;
    cout << "  4. Transistor" << endl;
    cout << "  5. LED" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    cout << endl;
    cout << "Description: ";

    // Use switch statement to display component description
    switch (choice) {
        case 1:
            cout << "Resistor: Used to limit current in a circuit." << endl;
            break;
        case 2:
            cout << "Capacitor: Used to store and release electrical energy." << endl;
            break;
        case 3:
            cout << "Diode: Allows current to flow in one direction only." << endl;
            break;
        case 4:
            cout << "Transistor: Used as a switch or amplifier in circuits." << endl;
            break;
        case 5:
            cout << "LED: A Light Emitting Diode that converts electricity to light." << endl;
            break;
        default:
            cout << "Invalid selection. Please choose a number from 1 to 5." << endl;
            break;
    }

    cout << "============================================" << endl;

    return 0;
}
