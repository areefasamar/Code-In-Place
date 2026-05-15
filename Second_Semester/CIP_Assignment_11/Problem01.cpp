#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int imag;

    public:
        Complex(int r = 0, int i = 0) {
                real = r;
                imag = i;
        }

        friend Complex multiply(const Complex& c1, const Complex& c2);

        void display() const {
                if (imag >= 0)
                        cout << real << " + " << imag << "i" << endl;
                else
                        cout << real << " - " << -imag << "i" << endl;
        }
};

Complex multiply(const Complex& c1, const Complex& c2) {
    return Complex((c1.real * c2.real) - (c1.imag * c2.imag),
                    (c1.real * c2.imag) + (c1.imag * c2.real));
}

int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = multiply(c1, c2);

    cout << "Multiplication Result: ";
    c3.display();

    return 0;
}
