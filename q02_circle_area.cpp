// Question 2: Calculate the area of a circle using pi * r^2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159265358979323846;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Note: C++ has no built-in exponentiation operator ('^' is bitwise XOR).
    // pow() from <cmath> is the standard way to raise a number to a power.
    double area = PI * pow(radius, 2);

    cout << "Area of the circle: " << area << endl;
    return 0;
}
