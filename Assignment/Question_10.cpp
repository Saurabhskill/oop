// Write a program to demonstrate example of hierarchical inheritance to get square and cube of a number. 

#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int num;

public:
    // Function to input number
    void inputNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

// Derived class for calculating square
class Square : public Number {
public:
    // Function to calculate and display square
    void calculateSquare() {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};

// Derived class for calculating cube
class Cube : public Number {
public:
    // Function to calculate and display cube
    void calculateCube() {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};

int main() {
    Square squareObj;
    Cube cubeObj;

    squareObj.inputNumber();
    squareObj.calculateSquare();

    cubeObj.inputNumber();
    cubeObj.calculateCube();

    return 0;
}
