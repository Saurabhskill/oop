// Define a class to represent a bank account include the following members: 
// Data Members: 
// a. Name of the depositor 
// b. Account Number 
// c. Type of Account 
// d. Balance amount in the account 
// Member Functions: 
// a. To assign initial Values 
// b. To Deposit an amount 
// c. To withdraw an amount after checking the balance 
// d. To display name and balance 
// Write a main program which handles 10 customers.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Function to assign initial values
    void initiate(const string& name, int accNum, const string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accounts[10];


    // Initiate 10 bank accounts

    char name[30];
    int accNo;
    char type[8];
    int amount;

    for(int i = 0; i< 10; i++){
        cout<<"Enter the name: ";
        cin.getline(name,30);
        cout<<"Enter the account no.:";
        cin>>accNo;
        cout<<"Enter the account type( savings/current): ";
        cin>>type;
        cout<<"Enter the initial amount you want to deposite: ";
        cin>>amount; 

        accounts[i].initiate(name, accNo, type, amount);
        cin.ignore();

    }

    // Perform operations on each account
    for (int i = 0; i < 2; ++i) {
        cout << "Account " << i + 1 << " Details:" << endl;
        accounts[i].display();
        cout << endl;

        // Deposit and withdraw operations
        accounts[i].deposit(1000);
        accounts[i].withdraw(2000);
        cout << endl;
    }

    return 0;
}
