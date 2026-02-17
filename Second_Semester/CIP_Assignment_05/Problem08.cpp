#include<iostream>
using namespace std;

class Attack{
    protected:
        int attackPower;

    public:
        Attack(int a) : attackPower(a) {}

        void attack(){
            cout << "Attacking with power: " << attackPower << endl;
        }
};

class Defense{
    protected:
        int shieldPower;

    public:
        Defense(int s) : shieldPower(s) {}

        void defend(){
            cout << "Defending with shield power: " << shieldPower << endl;
        }
};

class Warrior : public Attack, public Defense{
    public:
        Warrior(int a, int s) : Attack(a), Defense(s) {}

        void DisplayBattlePower(){
            attack();
            defend();
            cout << "Total Battle Power: " << (attackPower + shieldPower) << endl;
        }
};

int main(){
    Warrior w1(50, 30);
    w1.DisplayBattlePower();
    return 0;
}
