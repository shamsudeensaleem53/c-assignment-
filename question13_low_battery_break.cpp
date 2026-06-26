// ============================================================
// BEE 208 - Control Statements in C++
// Question 13: Stop Test on Low Battery Using Break
// Topic: for loop with break
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double batteryVoltage;
    int i;

    // Display program header
    cout << "============================================" << endl;
    cout << "   BEE 208 - Battery Voltage Test System   " << endl;
    cout << "============================================" << endl;
    cout << "Testing up to 10 battery readings." << endl;
    cout << "Low battery threshold: 10.5 V" << endl;
    cout << "--------------------------------------------" << endl;

    // Use a for loop to accept up to 10 battery voltage readings
    for (i = 1; i <= 10; i++) {
        cout << "Enter Battery Voltage Reading " << i << " (in Volts): ";
        cin >> batteryVoltage;

        // Check if voltage is below the low battery threshold
        if (batteryVoltage < 10.5) {
            cout << "  >> Reading " << i << ": " << batteryVoltage << " V" << endl;
            cout << "  >> Low battery detected. Test stopped." << endl;
            break;  // Exit the loop immediately
        }
        else {
            cout << "  >> Reading " << i << ": " << batteryVoltage << " V - Battery voltage normal." << endl;
        }
    }

    cout << "--------------------------------------------" << endl;
    cout << "Battery test complete." << endl;
    cout << "============================================" << endl;

    return 0;
}
