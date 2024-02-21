// Write a program to implement a class “STUDENT” having following members. 
// Data Member                                               
// Member                                Description
// Sname                                  Name of the student 
// Marks                                  Array Marks of the student 
// Total                                  Total marks obtained 
// Tmax                                   Total Maximum Marks 

// Member Function
// Member                                Description 
// Assign( )                               Assign initial Value
// Compute()                               To compute total, Average 
// Display( )                              To display the data 

#include <iostream>
#include <string>

using namespace std;

const int MAX_SUBJECTS = 5; // Maximum number of subjects

class STUDENT {
private:
    string Sname; // Name of the student
    int Marks[MAX_SUBJECTS]; // Array to store marks
    int Total; // Total marks obtained
    int Tmax; // Total maximum marks
    float Average;

public:
    // Function to assign initial values
    void Assign(const string& name, const int marks[], int maxMarks) {
        Sname = name;
        for (int i = 0; i < MAX_SUBJECTS; ++i) {
            Marks[i] = marks[i];
        }
        Tmax = maxMarks;
    }

    // Function to compute total and average
    void Compute() {
        Total = 0;
        for (int i = 0; i < MAX_SUBJECTS; ++i) {
            Total += Marks[i];
        }
        Average = (float)Total/MAX_SUBJECTS;
    }

    // Function to display the data
    void Display() {
        cout << "Student Name: " << Sname << endl;
        cout << "Marks: ";
        for (int i = 0; i < MAX_SUBJECTS; ++i) {
            cout << Marks[i] << " ";
        }
        cout << endl;
        cout << "Total marks obtained: " << Total << endl;
        cout << "Total maximum marks that can be obtained: " << Tmax << endl;
        cout << "Average marks: " << Average << endl;
    }
};

int main() {
    // Example usage
    STUDENT student1;
    string name = "Saurabh";
    int marks[MAX_SUBJECTS] = {90, 98, 96, 92, 95};
    int maxMarks = 500;

    student1.Assign(name, marks, maxMarks);
    student1.Compute();
    student1.Display();

    return 0;
}
