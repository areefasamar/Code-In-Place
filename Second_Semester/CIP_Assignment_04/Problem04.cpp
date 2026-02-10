#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h){
	    width=w;
		height=h;
	}

    double getArea() const {
        return width * height;
    }
};

int main() {
    const Rectangle rect1(5.0, 3.0);
    const Rectangle rect2(6.0, 4.0);

    cout << "Area of rectangle: " << rect1.getArea() << endl;
    cout << "Area of rectangle: " << rect2.getArea() << endl;

    return 0;
}
