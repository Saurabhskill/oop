//Write a program to find the area of cube and circle.

#include <iostream>
using namespace std;
int main()
{
    float side, radius;
    cout << "Enter the side of cube and radius of circle in cm:\n";
    cin >> side >> radius;

    // Area of cube.
    float area1 = 6 * side * side;
    cout << "Area of cube is: " << area1 << " cm square.\n";

    // Area of cube.
    float area2 = 3.14 * radius * radius;
    cout << "Area of circle is: " << area2 << " cm square.";

    return 0;
}
