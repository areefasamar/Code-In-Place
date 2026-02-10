#include <iostream>
using namespace std;

int callCounter() {
    static int count = 0;  
    count++;
    return count;
}

int main() {
    cout << "Call 1: " << callCounter() << endl;
    cout << "Call 2: " << callCounter() << endl;
    cout << "Call 3: " << callCounter() << endl;
    cout << "Call 4: " << callCounter() << endl;
    cout << "Call 5: " << callCounter() << endl;
    cout << "Call 6: " << callCounter() << endl;
    cout << "Call 7: " << callCounter() << endl;
    cout << "Call 8: " << callCounter() << endl;

    return 0;
}
