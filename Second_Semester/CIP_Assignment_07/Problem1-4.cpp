#include <iostream>
#include <string>
using namespace std;

class Employee{
    protected:
        string name;

    public:
        Employee(string n) : name(n) { }

        virtual double calculateSalary() = 0;

        virtual ~Employee(){
            cout << "Employee " << name << " memory cleaned up." << endl;
        }

        void printInfo(){
            cout << "Employee: " << name << " | Salary: " << calculateSalary() << endl;
        }
};

class FullTimeEmployee : public Employee{
    private:
        double monthlyPay;

    public:
        FullTimeEmployee(string n, double pay) : Employee(n), monthlyPay(pay) { }

        double calculateSalary() override {
            return monthlyPay;
        }
};

class Contractor : public Employee{
    private:
        double hourlyRate;
        int hoursWorked;

    public:
        Contractor(string n, double rate, int hours) : Employee(n), hourlyRate(rate), hoursWorked(hours) { }

        double calculateSalary() override {
            return hourlyRate * hoursWorked;
        }
};

int main(){
    Employee* staff[2];

    staff[0] = new FullTimeEmployee("Areefa", 50000);
    staff[1] = new Contractor("Waqar", 290, 160);

    for(int i = 0; i < 2; i++){
        staff[i]->printInfo();
    }

    for(int i = 0; i < 2; i++){
        delete staff[i];
    }

    return 0;
}


/*QUESTION 02: What would happen if you removed virtual?
If we remove the virtual keyword from calculateSalary() method in the base class and provides a basic implementation instead of = 0, 
static binding would occur. Because as we are using base class pointers (Employee* staff), the compiler would only look at the pointer type, 
not the actual object it points to. It would call the Employee version of the function for every object, completely ignoring the overridden 
formulas in FullTimeEmployee and Contractor. (If we just remove the virtual but left = 0, the code simply wouldn't compile).
Similarly, If we remove the virtual keyword from the destructor in the base class, deleting a derived object through a base pointer 
(delete staff[i];) would only call the Employee destructor, skipping the destructors for FullTimeEmployee and Contractor. This causes undefined 
behavior and memory leaks.


QUESTION 03: Why can’t you create an object of the base class?
If we try to create an object of Employee (e.g., Employee emp;), the code will not work because it is an abstract class. A class automatically 
becomes abstract when we include at least one pure virtual function (= 0). Since pure virtual functions have no implementation in the base class, 
the class is considered incomplete and serves only as a blueprint (interface) for derived classes to follow.


QUESTION 04:  Add a printInfo() method in base class that calls area() or play() (in my case calculateSalary() ), does it work?
Yes, it works! We actually already implemented this in the code:
void printInfo(){
cout << "Employee: " << name << " | Salary: " << calculateSalary() << endl;
}
Even though we define printInfo() in the base class Employee, and calculateSalary() is a pure virtual function with no base implementation, 
the implementation of runtime polymorphism makes this work. When we run staff[i]->printInfo(), the program dynamically looks up the actual object 
type (FullTimeEmployee or Contractor) and calls their specific version of calculateSalary().*/

