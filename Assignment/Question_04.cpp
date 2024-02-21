// Write a C++ program to which replace all the words “dogs” with “cat”.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void replaceWordsInFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Unable to open file: " << filename << endl;
        return;
    }

    string line;
    string content;
    while (getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find("dogs", pos)) != string::npos) {
            line.replace(pos, 4, "cat");
            pos += 3; // Move past the replaced word
        }
        content += line + "\n";
    }

    inFile.close();

    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Unable to write to file: " << filename << endl;
        return;
    }

    outFile << content;
    outFile.close();

    cout << "Replacement completed successfully." << endl;
}

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    replaceWordsInFile(filename);

    return 0;
}
