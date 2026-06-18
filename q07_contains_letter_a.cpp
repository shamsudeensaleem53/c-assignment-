// Question 7: Check if a string contains the character 'a'
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Note: C++ has no "in" operator (that's Python syntax, e.g. 'a' in text).
    // The C++ equivalent is std::string::find(), which returns string::npos
    // if the character isn't found.
    if (input.find('a') != string::npos) {
        cout << "Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }

    return 0;
}
