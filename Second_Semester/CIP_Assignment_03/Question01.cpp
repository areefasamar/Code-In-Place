#include <iostream>
using namespace std;
class DynamicArray {
    private:
        int* data;
        int size;

    public:
   
        DynamicArray(){
            size = 0;
            data = nullptr;
        }

        DynamicArray(int n){
            size = n;
            if (n > 0){
                data = new int[n];
                for (int i = 0; i < n; i++) {
                    data[i] = 0;
                }
            } 
			else
			{
                data = nullptr;
            }
        }

    
        DynamicArray(const DynamicArray& other){
            size = other.size;
            if (size > 0) {
                data = new int[size];
                for (int i = 0; i < size; i++) {
                    data[i] = other.data[i];
                }
            } 
			else
			{
                data = nullptr;
            }
        }

  
        ~DynamicArray(){
            delete[] data;
        }

   
        int& operator[](int index){
            return data[index];
        }

        int getSize() const{
            return size;
        }
};
int main() {
    cout << "Testing parameterized constructor:\n";
    DynamicArray a(3);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    for (int i = 0; i < a.getSize(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "\nTesting copy constructor (deep copy):\n";
    DynamicArray b = a;   // deep copy
    b[0] = 99;

    cout << "Array a[0]: " << a[0] << endl; 
    cout << "Array b[0]: " << b[0] << endl; 

    cout << "\nTesting default constructor:\n";
    DynamicArray c;
    cout << "Size of c: " << c.getSize() << endl;

    return 0;
}
