#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "output.cpp"  

using namespace std;


vector<string> readFile(string filename) {
    vector<string> lines;
    // Temporary test data
    lines.push_back("Test line 1");
    lines.push_back("Test line 2");
    lines.push_back("Test line 3");
    cout << "Using test data for debugging" << endl;
    return lines;
}

int main() {
    vector<string> lines = readFile("input.txt");
    printLines(lines);       // Функция из output.cpp
    writeFile(lines, "output.txt");  // Функция из output.cpp

    cout << "Program finished!" << endl;
    return 0;
}