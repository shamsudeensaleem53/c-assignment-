// Question 13: Use the bitwise XOR operator to swap two variables
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Classic XOR swap trick (works because x ^ x == 0 and x ^ 0 == x).
    // Note: this only works safely when a and b are different variables/addresses.
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
