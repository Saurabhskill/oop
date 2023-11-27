//Write a program to input two numbers and print the bigger number.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is the bigger number.";
    }
    else if (num1 == num2) {
        cout << "Both the numbers are equal.";
    }
    else {
        cout << num2 << " is the bigger number.";
    }
    return 0;
}
