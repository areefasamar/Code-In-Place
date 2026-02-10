#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    const int* p;  

    cout << "Array elements: ";
    for (p = numbers; p < numbers + n; ++p) {
        cout << *p << " ";
        // *p = 100; // error! cannot modify value through pointer to const
    }
    cout << endl;

    return 0;
}
