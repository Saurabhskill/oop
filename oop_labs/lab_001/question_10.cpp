/Write a program to convert Farenheit to Celsius and Celsius to Farenheit.

#include <iostream>
using namespace std;
int main()
{
    float far=0, cel=0;
    int option;
    cout << "Enter:\n1 to convert Farenheit to Celsius\n2 to convert Celsius to Farenheit\n";
    
    cin >> option;

    if (option == 1) {
        cout << "Enter the temperature in Farenheit:\n";
        cin >> far;
        cel = 5 * (far - 32) / 9.0;
        cout << "Temperature in degree Celsius is: " << cel;
    }
    else if (option == 2) {
        cout << "Enter temperature in Celsius:\n";
        cin >> cel;
        far = 9 * cel / 5.0 + 32;
        cout << "Temperature in degree Farenheit: " << far;
    }
    else {
        cout << "Retry with valid inputs.";
    }
    return 0;
}
