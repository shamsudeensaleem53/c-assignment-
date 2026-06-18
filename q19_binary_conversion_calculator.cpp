// Question 19: Calculator to convert binary to decimal, hexadecimal, and octal
// Note: the assignment says "octadecimal" -- the standard term is "octal" (base 8),
// so that's what this program uses.
#include <iostream>
#include <string>
using namespace std;

long binaryToDecimal(const string& binary) {
    long decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

int main() {
    string binary;
    int choice;

    cout << "Enter a binary number: ";
    cin >> binary;

    long decimal = binaryToDecimal(binary);

    do {
        cout << "\n--- Binary Conversion Calculator ---\n";
        cout << "1. Convert to Decimal\n";
        cout << "2. Convert to Hexadecimal\n";
        cout << "3. Convert to Octal\n";
        cout << "4. Show all three\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Decimal: " << decimal << endl;
                break;
            case 2:
                cout << "Hexadecimal: " << hex << decimal << dec << endl;
                break;
            case 3:
                cout << "Octal: " << oct << decimal << dec << endl;
                break;
            case 4:
                cout << "Decimal: " << decimal << endl;
                cout << "Hexadecimal: " << hex << decimal << dec << endl;
                cout << "Octal: " << oct << decimal << dec << endl;
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option, try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
