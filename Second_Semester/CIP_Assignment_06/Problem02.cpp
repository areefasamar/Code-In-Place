#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;

    public:
        Rectangle() {
                length = 1.0;
                width = 1.0;
        }

        Rectangle(double side) {
                length = side;
                width = side;
        }

        Rectangle(double l, double w) {
                length = l;
                width = w;
        }

        double area() {
                return length * width;
        }

        bool isSquare() {
                return length == width;
        }
};

int main() {
        Rectangle r1;          
        Rectangle r2(5);       
        Rectangle r3(4, 6);   

        cout << "r1 Area: " << r1.area() << ", isSquare: " << r1.isSquare() << endl;
        cout << "r2 Area: " << r2.area() << ", isSquare: " << r2.isSquare() << endl;
        cout << "r3 Area: " << r3.area() << ", isSquare: " << r3.isSquare() << endl;

        return 0;
}