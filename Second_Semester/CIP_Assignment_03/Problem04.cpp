#include<iostream>
using namespace std;

// A
class A {
int x;
double y;
public:
A(int a, double b) : x(a), y(b) {}
};
// No
// It contains only primitive types (int, double) which the default copy/assignment handles perfectly.

// B
class B {
string name;
public:
B(string n) : name(n) {}
};
// No
// It uses std::string, which manages its own memory, the compiler generated defaults work correctly here.

// C
class C {
FILE* fp;
public:
C(const char* filename) { fp = fopen(filename, "r"); }
~C() { if (fp) fclose(fp); }
};
// Yes
// It manages a raw FILE* and defines a destructor, but lacks copy/assignment logic to handle file pointer duplication.

// D
class D {
int* arr;
public:
D(int n) { arr = new int[n]; }
~D() { delete[] arr; }
};
// Yes
// It manages raw heap memory (new[]) and defines a destructor, but lacks copy/assignment to prevent double deletion of the pointer.