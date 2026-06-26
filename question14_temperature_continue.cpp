// ============================================================
// BEE 208 - Control Statements in C++
// Question 14: Skip Invalid Temperature Readings Using Continue
// Topic: for loop with continue
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double temperature;
    double totalTemp = 0;
    int validCount = 0;
    int invalidCount = 0;
    double averageTemp;
    int i;

    // Display program header
    cout << "============================================" << endl;
    cout << " BEE 208 - Temperature Readings Analyser   " << endl;
    cout << "============================================" << endl;
    cout << "Enter 10 temperature readings from the device." << endl;
    cout << "Readings below 0 degrees C are invalid." << endl;
    cout << "--------------------------------------------" << endl;

    // Use a for loop to accept 10 temperature readings
    for (i = 1; i <= 10; i++) {
        cout << "Enter Temperature Reading " << i << " (in degrees C): ";
        cin >> temperature;

        // Use continue to skip invalid readings (below 0 degrees C)
        if (temperature < 0) {
            cout << "  >> Reading " << i << ": " << temperature << " C - INVALID (skipped)" << endl;
            invalidCount = invalidCount + 1;
            continue;  // Skip the rest and move to next iteration
        }

        // This only runs if temperature is valid (>= 0)
        cout << "  >> Reading " << i << ": " << temperature << " C - Valid" << endl;
        totalTemp = totalTemp + temperature;
        validCount = validCount + 1;
    }

    // Display results
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Readings   : 10" << endl;
    cout << "Valid Readings   : " << validCount << endl;
    cout << "Invalid Readings : " << invalidCount << endl;

    // Calculate and display average only if there are valid readings
    if (validCount > 0) {
        averageTemp = totalTemp / validCount;
        cout << "Average Temp     : " << averageTemp << " degrees C" << endl;
    }
    else {
        cout << "No valid readings. Average cannot be calculated." << endl;
    }

    cout << "============================================" << endl;

    return 0;
}
