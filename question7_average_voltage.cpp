// ============================================================
// BEE 208 - Control Statements in C++
// Question 7: Average Voltage from Sensor Readings
// Topic: for loop
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double voltageReading;
    double totalVoltage = 0;
    double averageVoltage;
    int i;

    // Display program header
    cout << "============================================" << endl;
    cout << "  BEE 208 - Average Voltage from Sensor    " << endl;
    cout << "============================================" << endl;
    cout << "Enter 10 voltage readings from the sensor:" << endl;
    cout << "--------------------------------------------" << endl;

    // Use a for loop to accept 10 voltage readings
    for (i = 1; i <= 10; i++) {
        cout << "Enter Reading " << i << " (in Volts): ";
        cin >> voltageReading;
        totalVoltage = totalVoltage + voltageReading;
    }

    // Calculate the average voltage
    averageVoltage = totalVoltage / 10;

    // Display the results
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Voltage   = " << totalVoltage << " V" << endl;
    cout << "Number of Readings = 10" << endl;
    cout << "Average Voltage = " << averageVoltage << " V" << endl;
    cout << "============================================" << endl;

    return 0;
}
