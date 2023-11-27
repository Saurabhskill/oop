// Write a program to input a number and print its cube root.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    float result = cbrt(num);
    cout << "The cube root is: " << result;

    return 0;
}
