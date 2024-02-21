// Write a program to generate Fibonacci Series by using constructor to initialize the data member.
#include <iostream>

using namespace std;

class FibonacciSeries {
private:
    int n; // Number of terms in the series

public:
    // Constructor to initialize the number of terms
    FibonacciSeries(int num) {
        n = num;
    }

    // Function to generate and display the Fibonacci series
    void generateSeries() {
        cout << "Fibonacci Series with " << n << " terms:" << endl;
        if (n >= 1) {
            cout << "0 ";
        }
        if (n >= 2) {
            cout << "1 ";
        }
        if (n > 2) {
            int first = 0, second = 1;
            for (int i = 3; i <= n; ++i) {
                int next = first + second;
                cout << next << " ";
                first = second;
                second = next;
            }
        }
        cout << endl;
    }
};

int main() {
    int numTerms;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> numTerms;

    FibonacciSeries fibSeries(numTerms); // Create an object with the specified number of terms
    fibSeries.generateSeries(); // Generate and display the Fibonacci series

    return 0;
}
