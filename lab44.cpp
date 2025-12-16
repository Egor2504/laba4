#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> readFile(string filename) {
    vector<string> lines;
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
        cout << "Read " << lines.size() << " lines from file" << endl;
    }

    return lines;
}

void printLines(vector<string> lines) {
    cout << "Printing to screen" << endl;
}

void writeFile(vector<string> lines, string filename) {
    cout << "Writing to file: " << filename << endl;
}

int main() {
    vector<string> lines = readFile("input.txt");
    printLines(lines);
    writeFile(lines, "output.txt");

    cout << "Program finished!" << endl;
    return 0;
}