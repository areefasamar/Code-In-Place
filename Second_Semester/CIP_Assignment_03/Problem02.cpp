#include<iostream>
#include<cstring>
using namespace std;
class Text{
    char* buffer;
    public:
        Text(const char* s){
            buffer = new char[strlen(s) + 1];
            strcpy(buffer, s);
        }
        
        Text(const Text& other){
            buffer = new char[strlen(other.buffer) + 1];
            strcpy(buffer, other.buffer);
        }
		  
        void print()
		{ 
		    cout << buffer << endl; 
		}
        
		~Text() 
		{ 
		    delete[] buffer; 
		}
};
int main(){
Text t1("Hello");
Text t2 = t1; // Deep copy now prevents double deletion
t1.print();
t2.print();
}

/*The bug occurs because the default copy constructor performs
 a shallow copy, so both Text objects share the same buffer pointer.
When the destructors run, both try to delete the same memory, causing 
the undefined behavior.*/
