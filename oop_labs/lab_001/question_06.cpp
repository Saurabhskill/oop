// Given that 1+2+3+4+---------+n = n*(n+1)/2.
//  Write a program to determine the value of 10+11+12+13+----+20.

#include <iostream>
using namespace std;
int main()
{
    int first_term = 10;
    int last_term = 20;
    
    int result = (last_term * (last_term + 1) / 2) - (first_term * (first_term + 1) / 2) + first_term;

    cout << "The required sum is: " << result;

    return 0;
}
