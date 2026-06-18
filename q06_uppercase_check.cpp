// Question 6: Check if a character is uppercase using && and isupper()
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // isalpha() confirms it's a letter; isupper() confirms it's uppercase.
    // Combining them with && satisfies the "logical AND" requirement.
    if (isalpha(ch) && isupper(ch)) {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }

    return 0;
}
