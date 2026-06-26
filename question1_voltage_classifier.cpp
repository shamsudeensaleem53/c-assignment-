// ============================================================
// BEE 208 - Control Statements in C++
// Question 1: Voltage Level Classifier
// Topic: if...else if...else
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variable for voltage reading
    double voltage;

    // Display program header
    cout << "============================================" << endl;
    cout << "       BEE 208 - Voltage Level Classifier  " << endl;
    cout << "============================================" << endl;

    // Accept voltage input from user
    cout << "Enter the voltage reading (in Volts): ";
    cin >> voltage;

    cout << endl;
    cout << "Voltage Reading : " << voltage << " V" << endl;
    cout << "Classification  : ";

    // Classify the voltage using if...else if...else
    if (voltage < 0) {
        cout << "Invalid voltage reading" << endl;
    }
    else if (voltage >= 0 && voltage <= 50) {
        cout << "Low voltage" << endl;
    }
    else if (voltage >= 51 && voltage <= 240) {
        cout << "Normal voltage" << endl;
    }
    else if (voltage >= 241 && voltage <= 415) {
        cout << "High voltage" << endl;
    }
    else {
        cout << "Dangerous voltage" << endl;
    }

    cout << "============================================" << endl;

    return 0;
}
