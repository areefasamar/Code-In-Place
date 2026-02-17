#include<iostream>
#include<string>
using namespace std;
class Device{
    public:
        string brand;

        Device(string b) : brand(b) {}
};

class Laptop : public Device{
    public:
        int ram;

        Laptop(string b, int r) : Device(b), ram(r) {}
};

class GamingLaptop : public Laptop{
    private:
        string gpu;

    public:
        GamingLaptop(string b, int r, string g) : Laptop(b, r), gpu(g) {}

        void Display(){
            cout << "Brand: " << brand << endl;
            cout << "RAM: " << ram << " GB" << endl;
            cout << "GPU: " << gpu << endl;
        }
};

int main(){
    GamingLaptop g1("Dell", 16, "NVIDIA RTX 3060");
    g1.Display();
    return 0;
}
