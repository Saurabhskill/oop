//Write a program to check whether a number is positive or negative or zero.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "The given number is zero.";
    }
    else if (num > 0) {
        cout << "The given number is positive.";
    }
    else if (num < 0) {
        cout << "The given number is negative";
    }
   
    return 0;
}
