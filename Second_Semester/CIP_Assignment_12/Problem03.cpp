#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class BankAccount {
    private:
        double balance;
        string accountName;

    public:
        BankAccount(string name, double initialBalance) {
                accountName = name;
                balance = initialBalance;
        }

        void withdraw(double amount) {
                if (amount <= 0) {
                        throw invalid_argument("Withdrawal amount must be positive.");
                }
                
                if (amount > balance) {
                        throw runtime_error("Insufficient balance for this transaction.");
                }

                balance -= amount;
                cout << "Successfully withdrew $" << amount << ". New balance: $" << balance << endl;
        }

        double getBalance() const {
                return balance;
        }
};

int main() {
        BankAccount myAccount("Areefa Samar", 500.0);
        double testAmounts[] = {100.0, -50.0, 1000.0}; 

        cout << "Account Holder: Areefa Samar | Starting Balance: $500.0" << endl;
        cout << "--------------------------------------------------------" << endl;

        for (int i = 0; i < 3; i++) {
                try {
                        cout << "Attempting to withdraw $" << testAmounts[i] << "..." << endl;
                        myAccount.withdraw(testAmounts[i]);
                }
                catch (const invalid_argument& e) {
                        cout << "Input Error: " << e.what() << endl;
                }
                catch (const runtime_error& e) {
                        cout << "Transaction Error: " << e.what() << endl;
                }
                cout << "--------------------------------------------------------" << endl;
        }

        cout << "Final Account Balance: $" << myAccount.getBalance() << endl;

        return 0;
}