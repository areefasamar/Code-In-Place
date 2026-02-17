#include<iostream>
using namespace std;
class Account{
    protected:
        float balance;

    public:
        Account(float b) : balance(b) {}
};

class SavingAccount : public Account{
    public:
        SavingAccount(float b) : Account(b) {}

        void addInterest(){
            balance = balance + (balance * 0.05);   
        }

        void Display(){
            cout << "Saving Account Balance: " << balance << endl;
        }
};

class FixedAccount : public Account{
    public:
        FixedAccount(float b) : Account(b) {}

        void withdraw(float amount){
            cout << "Withdrawal not allowed in Fixed Account." << endl;
        }

        void Display(){
            cout << "Fixed Account Balance: " << balance << endl;
        }
};

int main(){
    SavingAccount s1(1000);
    s1.addInterest();
    s1.Display();

    cout << endl;

    FixedAccount f1(5000);
    f1.withdraw(1000);
    f1.Display();

    return 0;
}
