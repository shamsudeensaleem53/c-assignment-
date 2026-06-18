// Question 10: Use the ternary operator to find the larger of two integers
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int larger = (a > b) ? a : b;

    cout << "The larger value is: " << larger << endl;
    return 0;
}
