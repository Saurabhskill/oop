//Given that 1^2 + 2^2 + 3^2 +------+ n^2 = (n*(n+1)*(2*n+1))/6.
//Write a program to determine the value of n ^ 3, taking n from the user.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    int result = (num * (num + 1) * (2 * num + 1)) / 6;
    cout << "The required sum:" << result;

    return 0;
}
