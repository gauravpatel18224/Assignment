#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
   
    BankAccount(string name, string accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

     void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
  
    BankAccount account("gaurav", "1234567890", "Savings", 1000.0);

    
    cout << "Initial Account Details:" << endl;
    account.display();
    cout << endl;

  
    account.deposit(500.0);

    
    cout << "\nAccount Details after deposit:" << endl;
    account.display();
    cout << endl;

  
    account.withdraw(2000.0);

    cout << "\nAccount Details after attempted withdrawal:" << endl;
    account.display();
    cout << endl;

    return 0;
}
