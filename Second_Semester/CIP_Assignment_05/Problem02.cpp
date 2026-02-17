#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
        string name;

        Person(string n) : name(n) {}
};

class Student : public Person{
    public:
        string rollno;

        Student(string n, string r) : Person(n), rollno(r) {}
};

class Result : public Student{
    private:
        int marks;

    public:
        Result(string n, string r, int m) : Student(n, r), marks(m) {}

        void Display(){
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main(){
    Result r1("Areefa","CT-25062", 95);
    r1.Display();
    return 0;
}
