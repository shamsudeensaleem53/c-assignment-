// ============================================================
// BEE 208 - Control Statements in C++
// Question 10: Battery Voltage Monitoring
// Topic: while loop
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variable for battery voltage
    double voltage;

    // Display program header
    cout << "============================================" << endl;
    cout << "   BEE 208 - Battery Voltage Monitoring    " << endl;
    cout << "============================================" << endl;
    cout << "Monitoring battery voltage (minimum = 12 V)" << endl;
    cout << "--------------------------------------------" << endl;

    // Accept the first voltage reading
    cout << "Enter battery voltage reading (in Volts): ";
    cin >> voltage;

    // Use a while loop to continue while voltage is 12 V or above
    while (voltage >= 12) {
        cout << "  >> Voltage: " << voltage << " V - OK" << endl;

        // Accept the next voltage reading
        cout << "Enter battery voltage reading (in Volts): ";
        cin >> voltage;
    }

    // When voltage drops below 12 V, display warning
    cout << endl;
    cout << "Battery Voltage : " << voltage << " V" << endl;
    cout << "Status          : Battery voltage low. Recharge required." << endl;
    cout << "============================================" << endl;

    return 0;
}
