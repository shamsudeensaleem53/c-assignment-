// Question 15: Use the conditional operator to find the larger of two floats
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two floating point numbers: ";
    cin >> a >> b;

    // Note: "ternary operator" (Q10) and "conditional operator" here both
    // refer to the same ?: operator in C++ -- just two common names for it.
    double larger = (a > b) ? a : b;

    cout << "The larger value is: " << larger << endl;
    return 0;
}
