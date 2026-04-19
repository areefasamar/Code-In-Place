#include <iostream>
#include <string>
using namespace std;
class StudentGrades{
    private:
	    string name;
        float grades[5];     
        int count;           

    public:
    StudentGrades(string n) {
        name = n;
        count = 0; 
    }
    
    bool addGrade(float g) {
        if (g < 0 || g > 100) {
            cout << "Error: Grade " << g << " is invalid (must be 0-100)." << endl;
            return false;
        }

        if (count >= 5) {
            cout << "Error: Cannot add grade. Max limit of 5 reached." << endl;
            return false;
        }
        
        grades[count] = g;
        count++;
        return true;
    }

    float getAverage() {
        if (count == 0) {
		    return 0; 	
		}
        float sum = 0;
        
        for (int i = 0; i < count; i++) {
            sum = sum + grades[i];
        }
        return sum / count;
    }

    void printReport() {
        cout << "\n--- Student Grade Report ---" << endl;
        cout << "Student: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < count; i++) {
            cout << grades[i] << " ";
        }
        cout << "\nAverage: " << getAverage() << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {

    StudentGrades s1("Shaheer");
    s1.addGrade(85);
    s1.addGrade(90);
    s1.addGrade(78);
    s1.addGrade(92);
    s1.addGrade(105);
    s1.addGrade(88);
    s1.addGrade(99);
    s1.printReport();
    return 0;
}