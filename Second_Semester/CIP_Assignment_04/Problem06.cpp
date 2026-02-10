#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    Student(int r){
    	rollNo=r;
	}

    int getRoll() const {
        return rollNo;
    }
};

int main() {
    const Student s1(101); 
    cout << "Roll Number: " << s1.getRoll() << endl;
    
     const Student s2(102); 
    cout << "Roll Number: " << s2.getRoll() << endl;

    return 0;
}
