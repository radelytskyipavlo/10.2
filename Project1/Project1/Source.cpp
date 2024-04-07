#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

void capitalizeAfterDot(string& s) {
    bool capitalizeNext = false;
    for (char& c : s) {
        if (c == '.') {
            capitalizeNext = true;
        }
        else if (c != ' ' && c != '.' && capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
}

int main() {
    ifstream inputFile("102ap1.txt"); 
    ofstream outputFile("102ap2.txt"); 

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cout << "Failed to open files." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        capitalizeAfterDot(line); 
        outputFile << line << endl; 
    }

    inputFile.close(); 
    outputFile.close(); 

    cout << "Operation completed successfully." << endl;

    return 0;
}
