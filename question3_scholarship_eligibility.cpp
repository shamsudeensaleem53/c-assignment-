// ============================================================
// BEE 208 - Control Statements in C++
// Question 3: Scholarship Eligibility for Engineering Student
// Topic: if...else
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variable for student GPA
    double gpa;

    // Display program header
    cout << "============================================" << endl;
    cout << "  BEE 208 - Scholarship Eligibility Checker" << endl;
    cout << "============================================" << endl;

    // Accept GPA input from user
    cout << "Enter your GPA (0.0 - 4.0): ";
    cin >> gpa;

    cout << endl;
    cout << "GPA Entered : " << gpa << endl;
    cout << "Result      : ";

    // Determine scholarship eligibility using if...else
    if (gpa >= 3.5) {
        cout << "Eligible for engineering scholarship." << endl;
    }
    else {
        cout << "Not eligible for engineering scholarship." << endl;
    }

    cout << "============================================" << endl;

    return 0;
}
