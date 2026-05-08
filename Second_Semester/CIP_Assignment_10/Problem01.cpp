#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Course {
    string title;
public:
    Course(const string& t) : title(t) {}
    string getTitle() const { return title; }
};

class Professor {
    string name;
public:
    Professor(const string& n) : name(n) {}
    string getName() const { return name; }

    void teaches(const Course* c) const {
        cout << "  Prof. " << name << " is teaching " << c->getTitle() << endl;
    }
    
    ~Professor() {
        cout << "[Destructor] Professor " << name << " deleted." << endl;
    }
};

class Department {
    string name;
    vector<Professor*> faculty; 

public:
    Department(const string& n) : name(n) {}
    
    void addProfessor(Professor* p) {
        faculty.push_back(p);
    }

    void printSummary() const {
        cout << " Department: " << name << endl;
        for (const auto p : faculty) {
            cout << "  - Faculty Member: " << p->getName() << endl;
        }
    }

    ~Department() {
        cout << "[Destructor] Department " << name << " destroyed." << endl;
    }
};

class University {
    string name;
    vector<Department> departments; 

public:
    University(const string& n) : name(n) {}

    void addDepartment(const string& deptName) {
        departments.push_back(Department(deptName));
    }

    Department& getDept(int index) { return departments[index]; }

    void printSummary() const {
        cout << "\n--- University: " << name << " Summary ---" << endl;
        for (const auto &d : departments) {
            d.printSummary();
        }
        cout << "--------------------------------\n" << endl;
    }

    ~University() {
        cout << "[Destructor] University " << name << " closing down..." << endl;
    }
};

int main() {
    Professor prof1("Dr. Aris");
    Professor prof2("Dr. Sarah");

    Course c1("Object Oriented Programming");
    Course c2("Data Structures");

    {
        University myUni("FAST NUCES");
        myUni.addDepartment("Computer Science");
        myUni.addDepartment("Mathematics");

        myUni.getDept(0).addProfessor(&prof1);
        myUni.getDept(0).addProfessor(&prof2);
        myUni.getDept(1).addProfessor(&prof2); 

        myUni.printSummary();

        cout << "Daily Schedule:" << endl;
        prof1.teaches(&c1);
        prof2.teaches(&c2);

        cout << "\nEnding University scope now..." << endl;
    } 

    cout << "\nBack in main scope:" << endl;
    cout << "Professor " << prof1.getName() << " is still here!" << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Course {
    string title;
public:
    Course(const string& t) : title(t) {}
    string getTitle() const { return title; }
};

class Professor {
    string name;
public:
    Professor(const string& n) : name(n) {}
    string getName() const { return name; }

    void teaches(const Course* c) const {
        cout << "  Prof. " << name << " is teaching " << c->getTitle() << endl;
    }
    
    ~Professor() {
        cout << "[Destructor] Professor " << name << " deleted." << endl;
    }
};

class Department {
    string name;
    vector<Professor*> faculty; 

public:
    Department(const string& n) : name(n) {}
    
    void addProfessor(Professor* p) {
        faculty.push_back(p);
    }

    void printSummary() const {
        cout << " Department: " << name << endl;
        for (const auto p : faculty) {
            cout << "  - Faculty Member: " << p->getName() << endl;
        }
    }

    ~Department() {
        cout << "[Destructor] Department " << name << " destroyed." << endl;
    }
};

class University {
    string name;
    vector<Department> departments; 

public:
    University(const string& n) : name(n) {}

    void addDepartment(const string& deptName) {
        departments.push_back(Department(deptName));
    }

    Department& getDept(int index) { return departments[index]; }

    void printSummary() const {
        cout << "\n--- University: " << name << " Summary ---" << endl;
        for (const auto &d : departments) {
            d.printSummary();
        }
        cout << "--------------------------------\n" << endl;
    }

    ~University() {
        cout << "[Destructor] University " << name << " closing down..." << endl;
    }
};

int main() {
    Professor prof1("Dr. Aris");
    Professor prof2("Dr. Sarah");

    Course c1("Object Oriented Programming");
    Course c2("Data Structures");

    {
        University myUni("FAST NUCES");
        myUni.addDepartment("Computer Science");
        myUni.addDepartment("Mathematics");

        myUni.getDept(0).addProfessor(&prof1);
        myUni.getDept(0).addProfessor(&prof2);
        myUni.getDept(1).addProfessor(&prof2); 

        myUni.printSummary();

        cout << "Daily Schedule:" << endl;
        prof1.teaches(&c1);
        prof2.teaches(&c2);

        cout << "\nEnding University scope now..." << endl;
    } 

    cout << "\nBack in main scope:" << endl;
    cout << "Professor " << prof1.getName() << " is still here!" << endl;

    return 0;
}

/*BONUS

QUESTION 01: Add destructors to verify lifecycle behavior.
ANS: Done in code

QUESTION 02:Add a method in a “whole” class (e.g., University::printSummary()) that iterates over its parts and prints their details. 
ANS: Done in code

QUESTION 03: Does it work correctly when parts are managed via composition vs. aggregation?
ANS: Yes, it works for both but with different ownership rules. In Composition, the University owns the Departments, so they are guaranteed to exist and are cleaned up automatically.
    In Aggregation, the Department only points to Professors, allowing them to stay alive even after the Department is destroyed. This ensures that "Composition" manages the 
	lifecycle strictly, while "Aggregation" allows parts to remain independent and shared.
*/
