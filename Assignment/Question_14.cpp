// Write a C++ program to define a Class String and use Overloaded == operator to compare two string. 

#include <iostream>
#include <cstring> // for strcmp
using namespace std;

class String {
private:
    char* str;

public:
    // Constructor
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Overloaded == operator
    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0;
    }
};

int main() {
    String s1("Hello");
    String s2("Hello");
    String s3("World");

    if (s1 == s2) {
        cout << "s1 and s2 are equal." << endl;
    } else {
        cout << "s1 and s2 are not equal." << endl;
    }

    if (s1 == s3) {
        cout << "s1 and s3 are equal." << endl;
    } else {
        cout << "s1 and s3 are not equal." << endl;
    }

    return 0;
}
