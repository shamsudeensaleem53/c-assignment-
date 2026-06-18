// Question 18: Convert a binary number to decimal
#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    for (char bit : binary) {
        // Each step shifts the running total one place left (x2)
        // then adds in the new bit (0 or 1).
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal value: " << decimal << endl;
    return 0;
}
