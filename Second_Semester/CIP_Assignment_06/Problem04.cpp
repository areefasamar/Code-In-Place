#include <iostream>
using namespace std;

class Vector2D {
    private:
        double x;
        double y;

    public:
        Vector2D(double x_val = 0, double y_val = 0) {
                x = x_val;
                y = y_val;
        }

        Vector2D operator*(double s) const {
                return Vector2D(x * s, y * s);
        }

        friend Vector2D operator*(double s, const Vector2D& v);

        bool operator==(const Vector2D& other) const {
                return (x == other.x && y == other.y);
        }

        void display() const {
                cout << "(" << x << ", " << y << ")" << endl;
        }
};

Vector2D operator*(double s, const Vector2D& v) {
        return v * s; 
}

int main() {
        Vector2D v(1, 2);

        Vector2D a = v * 3.0; 
        Vector2D b = 3.0 * v; 

        cout << "Vector a: "; a.display();
        cout << "Vector b: "; b.display();

        cout << "Are they equal? " << (a == b) << endl;

        return 0;
}