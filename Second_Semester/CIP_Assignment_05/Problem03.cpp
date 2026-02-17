#include<iostream>
#include<string>
using namespace std;
class Product{
    public:
        string name;
        float price;

        Product(string n, float p) : name(n), price(p) {}
};

class Electronics : public Product{
    private:
        int warrantyYears;

    public:
        Electronics(string n, float p, int w) : Product(n, p), warrantyYears(w) {}

        float FinalPrice(){
            return price + (price * 0.10);
        }

        void Display(){
            cout << "Product Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Warranty Years: " << warrantyYears << endl;
            cout << "Final Price: " << FinalPrice() << endl;
        }
};

class Clothing : public Product{
    private:
        string size;

    public:
        Clothing(string n, float p, string s) : Product(n, p), size(s) {}

        float FinalPrice(){
            return price - (price * 0.05);
        }

        void Display(){
            cout << "Product Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Size: " << size << endl;
            cout << "Final Price: " << FinalPrice() << endl;
        }
};

int main(){
    Electronics e1("Laptop", 1000, 2);
    Clothing c1("Shirt", 500, "M");

    cout << "Electronics Details:" << endl;
    e1.Display();

    cout << endl;

    cout << "Clothing Details:" << endl;
    c1.Display();

    return 0;
}
