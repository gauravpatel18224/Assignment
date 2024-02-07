#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
   
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit successful. New balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        }
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
   
    BankAccount account(12345, 1000);

 
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500); 

   
    std::cout << "Account Number: " << account.getAccountNumber() << std::endl;
    std::cout << "Current Balance: " << account.getBalance() << std::endl;

    return 0;
}
