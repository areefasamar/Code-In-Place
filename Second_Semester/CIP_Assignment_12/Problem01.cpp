#include <iostream>
#include <stdexcept> 
using namespace std;

class SafeArray {
    private:
        int data[5];
        int size;

    public:
        SafeArray() {
                size = 5;
                for (int i = 0; i < size; i++) {
                        data[i] = (i + 1) * 10; 
                }
        }

        int at(int index) {
                if (index < 0 || index >= size) {
                        throw out_of_range("Index is invalid! Access denied.");
                }
                return data[index];
        }
};

int main() {
        SafeArray myArr;
        int userIndex;

        cout << "Enter index to access (0-4): ";
        cin >> userIndex;

        try {
                int value = myArr.at(userIndex);
                cout << "Value at index " << userIndex << " is: " << value << endl;
        }
        catch (const out_of_range& e) {
                cout << "Caught Exception: " << e.what() << endl;
        }

        cout << "Program continues after catch block..." << endl;

        return 0;
}
