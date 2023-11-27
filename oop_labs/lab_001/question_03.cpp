// Write a program to input a number and prints its cube.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    int cube = num * num * num;
    cout << "The cube is: " << cube;

    return 0;
}
