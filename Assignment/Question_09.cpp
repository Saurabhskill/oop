// Write a program to calculate the percentage of a student using multiple inheritance. 

#include <iostream>
using namespace std;

// Base class for storing student details
class StudentDetails {
protected:
    string name;
    int rollNumber;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

// Base class for storing marks
class Marks {
protected:
    int marks[5]; // Assuming 5 subjects

public:
    // Function to input marks of 5 subjects
    void inputMarks() {
        cout << "Enter marks of 5 subjects:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

// Derived class to calculate percentage by inheriting from both StudentDetails and Marks
class CalculatePercentage : public StudentDetails, public Marks {
public:
    // Function to calculate and display percentage
    void displayPercentage() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        double percentage = (float)total / 5; // Calculate average
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    CalculatePercentage student;

    // Input student details and marks
    student.inputDetails();
    student.inputMarks();

    // Display the percentage
    student.displayPercentage();

    return 0;
}
