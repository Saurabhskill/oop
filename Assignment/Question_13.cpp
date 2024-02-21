// Write a program to convert the decimal Number into binary number. 

#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int num) {
    // Handle case for 0 separately
    if (num == 0) {
        cout << "Binary representation: 0" << endl;
        return;
    }

    int binary[32]; // Array to store binary digits (up to 32 bits)
    int index = 0;

    // Convert decimal to binary
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    // Print binary representation
    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << binary[i];
    }
    cout << endl;
}

int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    if (decimalNum < 0) {
        cout << "Error: Decimal number cannot be negative." << endl;
        return 1;
    }

    decimalToBinary(decimalNum);

    return 0;
}
