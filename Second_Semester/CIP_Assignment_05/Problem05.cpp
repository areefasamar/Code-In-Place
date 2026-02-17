#include<iostream>
using namespace std;
class Reader{
    public:
        void read(){
            cout << "Reading from file..." << endl;
        }
};

class Writer{
    public:
        void write(){
            cout << "Writing to file..." << endl;
        }
};

class File : public Reader, public Writer{
};

int main(){
    File f1;

    f1.read();
    f1.write();

    return 0;
}
