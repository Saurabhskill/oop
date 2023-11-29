//Write a program to input a number a print whether it is odd or even. 

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even.";
    }
    
    else {
        cout << num << " is odd.";
    }
    return 0;
}
