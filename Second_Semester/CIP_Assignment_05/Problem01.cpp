#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
        string name;

        Person(string n): name(n) {}
};

class Student : public Person{
    private:
        int rollno;

    public:
        Student(string n, int r) : Person(n), rollno(r) {}

        void Display(){
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollno << endl;
        }
};

int main(){
    Student s1("Areefa", 25062);
    s1.Display();
    return 0;
}
//When we make the data member of the Person class private so we have to either make a getter to access it in the Student class or 
//we can also make a display function of Person and call that display method of Person into the Display method of Student and then 
//print the roll number along it, and if we do not want to call the Display method of Student class so we can simply add virtual keyword
//with the Display method of Person class.
