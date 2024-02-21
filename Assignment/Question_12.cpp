// Write a program in C++ to read text-file and display count of character in file. 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    int charCount = 0;
    char ch;
    while (file.get(ch)) {
        charCount++;
    }

    cout << "Number of characters in the file: " << charCount << endl;

    file.close();
    return 0;
}
