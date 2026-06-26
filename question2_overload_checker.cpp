// ============================================================
// BEE 208 - Control Statements in C++
// Question 2: Current Overload Checker
// Topic: if...else
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables for rated and measured current
    double ratedCurrent;
    double measuredCurrent;

    // Display program header
    cout << "============================================" << endl;
    cout << "      BEE 208 - Current Overload Checker   " << endl;
    cout << "============================================" << endl;

    // Accept rated current of the circuit breaker
    cout << "Enter the rated current of the circuit breaker (in Amperes): ";
    cin >> ratedCurrent;

    // Accept measured current in the circuit
    cout << "Enter the measured current in the circuit (in Amperes): ";
    cin >> measuredCurrent;

    cout << endl;
    cout << "Rated Current   : " << ratedCurrent << " A" << endl;
    cout << "Measured Current: " << measuredCurrent << " A" << endl;
    cout << "Status          : ";

    // Compare measured current with rated current using if...else
    if (measuredCurrent > ratedCurrent) {
        cout << "Overload detected. Circuit breaker should trip." << endl;
    }
    else {
        cout << "Current is within safe limit." << endl;
    }

    cout << "============================================" << endl;

    return 0;
}
