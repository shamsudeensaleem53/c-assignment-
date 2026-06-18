// Question 17: Use the bitwise AND operator to check if a number is a power of 2
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // A power of 2 has exactly one bit set (e.g. 8 = 1000).
    // Subtracting 1 flips that bit and all bits below it (7 = 0111),
    // so ANDing the two together gives 0 only for powers of 2.
    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of 2" << endl;
    } else {
        cout << num << " is not a power of 2" << endl;
    }

    return 0;
}
