// ============================================================
// BEE 208 - Control Statements in C++
// Question 9: Current Monitoring System
// Topic: while loop
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variable for current reading
    double current;

    // Display program header
    cout << "============================================" << endl;
    cout << "    BEE 208 - Current Monitoring System    " << endl;
    cout << "============================================" << endl;
    cout << "Monitoring current readings (limit = 10 A)" << endl;
    cout << "--------------------------------------------" << endl;

    // Accept the first reading before the loop
    cout << "Enter current reading (in Amperes): ";
    cin >> current;

    // Use a while loop to continue reading while current is 10 A or below
    while (current <= 10) {
        cout << "  >> Current: " << current << " A - SAFE" << endl;

        // Accept the next reading
        cout << "Enter current reading (in Amperes): ";
        cin >> current;
    }

    // When current exceeds 10 A, display the overcurrent message
    cout << endl;
    cout << "Current Reading : " << current << " A" << endl;
    cout << "Status          : Overcurrent detected. Monitoring stopped." << endl;
    cout << "============================================" << endl;

    return 0;
}
