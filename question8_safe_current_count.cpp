// ============================================================
// BEE 208 - Control Statements in C++
// Question 8: Count Safe Current Readings
// Topic: for loop with if...else
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double currentReading;
    int safeCount = 0;
    int unsafeCount = 0;
    int i;

    // Display program header
    cout << "============================================" << endl;
    cout << "   BEE 208 - Count Safe Current Readings   " << endl;
    cout << "============================================" << endl;
    cout << "Enter 8 current readings (safe limit = 10 A):" << endl;
    cout << "--------------------------------------------" << endl;

    // Use a for loop to accept 8 current readings
    for (i = 1; i <= 8; i++) {
        cout << "Enter Current Reading " << i << " (in Amperes): ";
        cin >> currentReading;

        // Use if...else to classify each reading
        if (currentReading <= 10) {
            cout << "  >> Reading " << i << ": SAFE" << endl;
            safeCount = safeCount + 1;
        }
        else {
            cout << "  >> Reading " << i << ": UNSAFE" << endl;
            unsafeCount = unsafeCount + 1;
        }
    }

    // Display the count results
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Readings  : 8" << endl;
    cout << "Safe Readings   : " << safeCount << " (10 A or below)" << endl;
    cout << "Unsafe Readings : " << unsafeCount << " (above 10 A)" << endl;
    cout << "============================================" << endl;

    return 0;
}
