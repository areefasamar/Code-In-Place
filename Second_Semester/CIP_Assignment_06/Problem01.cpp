#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;

    public:
        Complex(double r = 0, double i = 0) {
                real = r;
                imag = i;
        }

        Complex operator+(const Complex& obj) {
                return Complex(real + obj.real, imag + obj.imag);
        }

        Complex operator-(const Complex& obj) {
                return Complex(real - obj.real, imag - obj.imag);
        }

        Complex operator*(const Complex& obj) {
                return Complex((real * obj.real) - (imag * obj.imag),
                               (real * obj.imag) + (imag * obj.real));
        }

        friend ostream& operator<<(ostream& out, const Complex& c);
};

ostream& operator<<(ostream& out, const Complex& c) {
        if (c.real == 0 && c.imag == 0) {
                out << "0";
        } else if (c.real == 0) {
                out << c.imag << "i";
        } else if (c.imag == 0) {
                out << c.real;
        } else {
                out << c.real;
                if (c.imag > 0)
                        out << " + " << c.imag << "i";
                else
                        out << " - " << -c.imag << "i";
        }
        return out;
}

int main() {
        Complex c1(2, 3), c2(1, -1);

        Complex c_add = c1 + c2;
        Complex c_sub = c1 - c2;
        Complex c_mul = c1 * c2;

        cout << "c1 + c2 = " << c_add << endl;
        cout << "c1 - c2 = " << c_sub << endl;
        cout << "c1 * c2 = " << c_mul << endl;

        return 0;
}
