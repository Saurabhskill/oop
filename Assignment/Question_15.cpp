// Write a language program in C++ which accepts the user’s First and last name and print them in reverse order with a space between them. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    // Input first name
    cout << "Enter your first name: ";
    getline(cin, firstName);

    // Input last name
    cout << "Enter your last name: ";
    getline(cin, lastName);

    // Print in reverse order with a space between them
    cout << "Reversed Name: " << lastName << " " << firstName << endl;

    return 0;
}
