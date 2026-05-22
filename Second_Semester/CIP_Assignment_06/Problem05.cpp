#include <iostream>
using namespace std;

class Counter {
    private:
        int value;

    public:
        Counter(int v) {
                value = v;
        }

        Counter operator+(const Counter& other) const {
                return Counter(value + other.value);
        }

        bool operator==(const Counter& other) const {
                return value == other.value;
        }

        friend ostream& operator<<(ostream& os, const Counter& c);
};

ostream& operator<<(ostream& os, const Counter& c) {
        os << c.value;
        return os;
}

int main() {
        Counter c1(5), c2(5);

        cout << "c1: " << c1 << "\n"; 

        cout << "c1 == c2: " << (c1 == c2) << "\n"; 

        Counter c3 = c1 + 10; 
        cout << "c3 (c1 + 10): " << c3 << "\n";

        return 0;
}