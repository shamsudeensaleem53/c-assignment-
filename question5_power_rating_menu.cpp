// ============================================================
// BEE 208 - Control Statements in C++
// Question 5: Power Rating Menu
// Topic: switch statement
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int choice;
    double voltage, current, power, time, resistance, energy;

    // Display program header
    cout << "============================================" << endl;
    cout << "    BEE 208 - Power Rating Calculator Menu " << endl;
    cout << "============================================" << endl;

    // Display the calculation menu
    cout << "Select a calculation:" << endl;
    cout << "  1. Calculate DC Power" << endl;
    cout << "  2. Calculate Resistance using Ohm's Law" << endl;
    cout << "  3. Calculate Energy Consumption" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << endl;

    // Use switch to perform the selected calculation
    switch (choice) {
        case 1:
            // Power = Voltage x Current
            cout << "--- DC Power Calculation ---" << endl;
            cout << "Enter Voltage (in Volts): ";
            cin >> voltage;
            cout << "Enter Current (in Amperes): ";
            cin >> current;
            power = voltage * current;
            cout << "DC Power = " << voltage << " V x " << current << " A" << endl;
            cout << "DC Power = " << power << " W" << endl;
            break;

        case 2:
            // Resistance = Voltage / Current
            cout << "--- Resistance Calculation (Ohm's Law) ---" << endl;
            cout << "Enter Voltage (in Volts): ";
            cin >> voltage;
            cout << "Enter Current (in Amperes): ";
            cin >> current;
            if (current == 0) {
                cout << "Error: Current cannot be zero." << endl;
            } else {
                resistance = voltage / current;
                cout << "Resistance = " << voltage << " V / " << current << " A" << endl;
                cout << "Resistance = " << resistance << " Ohms" << endl;
            }
            break;

        case 3:
            // Energy = Power x Time
            cout << "--- Energy Consumption Calculation ---" << endl;
            cout << "Enter Power (in Watts): ";
            cin >> power;
            cout << "Enter Time (in Hours): ";
            cin >> time;
            energy = power * time;
            cout << "Energy = " << power << " W x " << time << " h" << endl;
            cout << "Energy = " << energy << " Wh" << endl;
            break;

        default:
            cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
            break;
    }

    cout << "============================================" << endl;

    return 0;
}
