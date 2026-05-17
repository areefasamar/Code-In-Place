#include <iostream>
using namespace std;

class Vehicle {
    public:
        void start() {
                cout << "Start\n";
        }
};

class Car : virtual public Vehicle {
};

class Boat : virtual public Vehicle {
};

class AmphibiousCar : public Car, public Boat {
};

int main(){
        AmphibiousCar myVehicle;

        myVehicle.start();

        return 0;
}