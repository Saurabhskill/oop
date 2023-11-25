// Write a program to input a number and print its square.

#include<iostream>
using namespace std;
int main(){

    int num ;
    cout << "Enter a number :" << endl;
    cin >>num;

    // To calculate square of a number we can multiply the number by itself or we can use a function pow() which is defined in math.h header file.
    int square = num * num;  
    cout << "The square of the given number is: "<< square <<endl;
    
    return 0;
}
