#include <iostream>
using namespace std;

class SafeArray {
    private:
        int* data;
        int size;

    public:
        SafeArray(int n) {
                size = n;
                data = new int[size];
                for (int i = 0; i < size; i++) {
                        data[i] = 0;
                }
        }

        ~SafeArray() {
                delete[] data;
        }

        int& operator[](int index) {
                if (index < 0 || index >= size) {
                        cout << "Index out of bounds!" << endl;
                        return data[0]; // Clamping to first element as safety
                }
                return data[index];
        }

        bool operator==(const SafeArray& other) {
                if (size != other.size) {
                        return false;
                }
                for (int i = 0; i < size; i++) {
                        if (data[i] != other.data[i]) {
                                return false;
                        }
                }
                return true;
        }

        bool operator!=(const SafeArray& other) {
                return !(*this == other);
        }
};

int main() {
        SafeArray a(3), b(3);

        a[0] = 10; 
        b[0] = 10;
        a[1] = 20;
        b[1] = 20;
        a[2] = 30;
        b[2] = 30;

        cout << "Are arrays equal? " << (a == b) << endl; 

        a[5] = 99; 

        b[2] = 100; 
        cout << "Are arrays equal after change? " << (a == b) << endl; 

        return 0;
}