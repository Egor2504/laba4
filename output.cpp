#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void printLines(vector<string> lines) {
    cout << "=== File Content ===" << endl;
    for (int i = 0; i < lines.size(); i++) {
        cout << "Line " << i+1 << ": " << lines[i] << endl;
    }
    cout << "Total lines: " << lines.size() << endl;
}

void writeFile(vector<string> lines, string filename) {
    ofstream file(filename);
    
    if (file.is_open()) {
        for (int i = 0; i < lines.size(); i++) {
            file << lines[i] << endl;
        }
        file.close();
        cout << "File " << filename << " created successfully" << endl;
    } else {
        cout << "Error creating file!" << endl;
    }
}