// Write a program to demonstrate example of Default constructor, Parameterised Constructor and Copy Constructor.

#include <iostream>
#include <string>
using namespace std;

// Class representing a Person
class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "sky";
        age = 18;
    }

    // Parameterized constructor
    Person(const string& n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    // Function to display person details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Person person1; // Default constructor
    Person person2("Saurabh", 21); // Parameterized constructor
    Person person3 = person2; // Copy constructor

    // Displaying person details
    cout << "Person: ";
    person1.display();

    cout << "Person: ";
    person2.display();

    cout << "Person: ";
    person3.display();

    return 0;
}
