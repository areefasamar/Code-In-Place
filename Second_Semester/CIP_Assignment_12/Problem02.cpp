#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;

void openFile(string filename) {
        ifstream file(filename);

        if (!file.is_open()) {
                throw runtime_error("Error: Could not open file '" + filename + "'. File may not exist.");
        }

        cout << "File '" << filename << "' opened successfully!" << endl;
        file.close();
}

int main() {
        string name;
        cout << "Enter filename (e.g., test.txt): ";
        cin >> name; 
        try {
                openFile(name);
        }
        catch (const runtime_error& e) {
                cout << "Caught Exception: " << e.what() << endl;
                cout << "Tip: Ensure the file is in the project folder!" << endl;
        }

        return 0;
}