#include <iostream>
using namespace std;
class Employee {
private:
    int id;
    static int employeeCount;

public:
    Employee() {
        employeeCount++;
        id = employeeCount;
    }

    void display() const {
        cout << "Employee ID: " << id << endl;
    }

    static int getTotalEmployees() {
        return employeeCount;
    }
};

int Employee::employeeCount = 0;

int main() {
    Employee e1;
    Employee e2;
    Employee e3;

    e1.display();
    e2.display();
    e3.display();

    cout << "Total employees created: " << Employee::getTotalEmployees() << endl;

    return 0;
}
