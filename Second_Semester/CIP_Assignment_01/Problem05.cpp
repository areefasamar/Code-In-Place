#include <iostream>
using namespace std;

int fib_cache[100];

int fib(int n)
{
    if (fib_cache[n] != -1) 
        return fib_cache[n];

    if (n == 0)
        fib_cache[n] = 0;
    else if (n == 1)
        fib_cache[n] = 1;
    else
        fib_cache[n] = fib(n - 1) + fib(n - 2); 

    return fib_cache[n];
}

int main()
{
    for (int i = 0; i < 100; i++)
        fib_cache[i] = -1;

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n >= 100) {
        cout << "Error: n should be less than 100!" << endl;
        return 1;
    }

    cout << "Fib(" << n << ") = " << fib(n) << endl;

    return 0;
}
