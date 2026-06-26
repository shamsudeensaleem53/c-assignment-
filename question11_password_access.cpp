// ============================================================
// BEE 208 - Control Statements in C++
// Question 11: Password Access to Control Panel
// Topic: while loop
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variable for password
    int password;

    // The correct password is 2080
    int correctPassword = 2080;

    // Display program header
    cout << "============================================" << endl;
    cout << "  BEE 208 - Control Panel Access System    " << endl;
    cout << "============================================" << endl;
    cout << "Please enter the password to gain access." << endl;
    cout << "--------------------------------------------" << endl;

    // Accept first password attempt
    cout << "Enter password: ";
    cin >> password;

    // Use a while loop to keep asking until correct password is entered
    while (password != correctPassword) {
        cout << "  >> Incorrect password. Please try again." << endl;
        cout << "Enter password: ";
        cin >> password;
    }

    // Correct password entered
    cout << endl;
    cout << "============================================" << endl;
    cout << "  Access granted to control panel." << endl;
    cout << "============================================" << endl;

    return 0;
}
