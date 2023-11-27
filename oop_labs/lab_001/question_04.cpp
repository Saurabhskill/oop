// Write a program to input a number and print its square root.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    float result = sqrt(num);
    cout << "The square root is: " << result;

    return 0;
}
