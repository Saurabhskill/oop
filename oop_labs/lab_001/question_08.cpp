//Write a program to find the area of Rectangle.

#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cout << "Enter the length and breadth of a rectangle in cm:\n";
    cin >> length >> breadth;

    float area = length * breadth;
    cout << "The area is: " << area << " cm square.";

    return 0;
}
