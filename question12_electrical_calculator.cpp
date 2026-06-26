// ============================================================
// BEE 208 - Control Statements in C++
// Question 12: Menu-Driven Electrical Calculator
// Topic: do...while loop with switch
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int choice;
    double voltage, current, power, time, resistance, energy;

    // Display program header
    cout << "============================================" << endl;
    cout << " BEE 208 - Menu-Driven Electrical Calculator" << endl;
    cout << "============================================" << endl;

    // Use do...while loop to keep showing the menu until user selects Exit (4)
    do {
        // Display the menu
        cout << endl;
        cout << "--- MAIN MENU ---" << endl;
        cout << "  1. Calculate Power" << endl;
        cout << "  2. Calculate Resistance" << endl;
        cout << "  3. Calculate Energy" << endl;
        cout << "  4. Exit" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cout << endl;

        // Use switch to perform the selected calculation
        switch (choice) {
            case 1:
                // Power = Voltage x Current
                cout << "--- Power Calculation ---" << endl;
                cout << "Enter Voltage (in Volts): ";
                cin >> voltage;
                cout << "Enter Current (in Amperes): ";
                cin >> current;
                power = voltage * current;
                cout << "Power = " << voltage << " V x " << current << " A = " << power << " W" << endl;
                break;

            case 2:
                // Resistance = Voltage / Current
                cout << "--- Resistance Calculation ---" << endl;
                cout << "Enter Voltage (in Volts): ";
                cin >> voltage;
                cout << "Enter Current (in Amperes): ";
                cin >> current;
                if (current == 0) {
                    cout << "Error: Current cannot be zero." << endl;
                } else {
                    resistance = voltage / current;
                    cout << "Resistance = " << voltage << " V / " << current << " A = " << resistance << " Ohms" << endl;
                }
                break;

            case 3:
                // Energy = Power x Time
                cout << "--- Energy Calculation ---" << endl;
                cout << "Enter Power (in Watts): ";
                cin >> power;
                cout << "Enter Time (in Hours): ";
                cin >> time;
                energy = power * time;
                cout << "Energy = " << power << " W x " << time << " h = " << energy << " Wh" << endl;
                break;

            case 4:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid selection. Please choose 1, 2, 3, or 4." << endl;
                break;
        }

    } while (choice != 4);  // Keep looping until user selects Exit

    cout << "============================================" << endl;

    return 0;
}
