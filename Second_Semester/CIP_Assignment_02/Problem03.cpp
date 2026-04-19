#include<iostream>
#include<vector>
#include<string>
using namespace std;
class BankAccount {
    private:
    double balance;
    vector<string> transactionLog; 
    
    public:
    BankAccount(double initialDeposit) {
        if (initialDeposit >= 0) {
            balance = initialDeposit;
            transactionLog.push_back("Account opened with balance: $" + to_string(initialDeposit));
        } 
		else {
            balance = 0;
            transactionLog.push_back("Account opened with $0 (invalid initial deposit)");
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            transactionLog.push_back("Deposited: $" + to_string(amount));
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            transactionLog.push_back("Withdrew: $" + to_string(amount));
        } 
		else {
            transactionLog.push_back("Failed withdrawal attempt: $" + to_string(amount));
        }
    }

    void printStatement() {
        cout<< "\n--- OFFICIAL BANK STATEMENT ---" << endl;
        for (int i = 0; i < transactionLog.size(); i++) {
            cout<<i + 1<< ": " <<transactionLog[i]<<endl;
        }
        cout<<"Final Balance: $"<<balance<<endl;
        cout<<"-------------------------------" << endl;
    }
};

int main() {
    BankAccount myAccount(500);
    myAccount.deposit(150);
    myAccount.withdraw(50);
    myAccount.withdraw(700); 
    myAccount.deposit(25);
    myAccount.printStatement();
    return 0;
}