// bank_account.cpp
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double accountBalance;

public:
    // constructor to setup a new account
    BankAccount(string name, string number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }

    // func to print out the details
    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << accountBalance << endl;
        cout << "-----------------------\n" << endl;
    }

    // destructor just to show the closed msg when object goes out of scope
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    // test the class with some dummy data
    BankAccount myAccount("John Doe", "ACC-987654321", 150500.75);
    
    myAccount.displayAccount();
    
    // destructor runs automatically here
    return 0; 
}