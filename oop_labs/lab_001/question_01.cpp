// Write a program to input two numbers and print its Sum, difference and Product.

#include<iostream>
using namespace std;
int main(){
    int num1, num2 ;
    cout << "Enter two numbers:" << endl ;
    cin >> num1 >> num2 ;

    //calculating sum of two numbers.
    int sum = num1 + num2 ; 
    cout << "The sum is: " << sum << endl ;

    //calculating difference of two numbers.
    int diff = num1 - num2 ;
    cout << "The difference is: " << diff << endl;

    //calculating product of two numbers.
    int mul = num1 * num2 ;
    cout << "The multiplication is: " << mul << endl;

    return 0;
}
