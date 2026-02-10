#include <iostream>
using namespace std;

class Maths {
public:
    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    int num1 = 24, num2 = 36;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << Maths::gcd(num1, num2) << endl;

    return 0;
}
