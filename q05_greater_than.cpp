// Question 5: Check if the first integer is greater than the second using >
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    // Note: if a and b are equal, this falls into the "else" branch below,
    // since the assignment only asks for two outcomes.
    if (a > b) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}
