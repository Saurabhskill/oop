// C++ program to print the area of a circle using Single Inheritance

#include <iostream>
using namespace std;

// Base class for shapes
class Shape {
    protected:
        double area; // common attribute for all shapes
    public:
        Shape() { // default constructor
            area = 0;
        }
        virtual double getArea() { // virtual function to get the area of a shape
            return area;
        }
};

// Derived class for circles
class Circle : public Shape { // inherits from Shape class
    private:
        double radius; 
    public:
        Circle(double r) { // parameterized constructor
            radius = r;
        }
        double getArea() override { // override the base class function
            area = 3.14 * radius * radius; // calculate the area of a circle
            return area;
        }
};

// Main function
int main() {
    double r; // variable to store the radius
    cout << "Enter the radius of the circle: ";
    cin >> r; // take user input
    Circle c(r); // create a Circle object with the given radius
    cout << "The area of the circle is: " << c.getArea() << endl; // print the area of the circle
    return 0;
}
