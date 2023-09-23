#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int maxLen(string infile) {
    ifstream file(infile);
    if (!file.is_open()) { // check if the file could not be opened
        cout << "Error opening file!" << endl; // print an error message
        return -1; // return -1 to indicate an error
    }

    int max_len = 0; // initialize the maximum line length to 0
    string line;
    while (getline(file, line)) { // read each line from the file
        int len = line.length();// get the length of the current line
        if (len > max_len) { // if the current line is longer than the maximum line length, update the maximum line length
            max_len = len;
        }
    }
    file.close(); // close the file
    return max_len;  // return the maximum line length
}

int main() {
    string infile = "example.txt";
    int max_length = maxLen(infile);// get the maximum line length from the file
    if (max_length != -1) {// if the file was opened successfully
        cout << "The maximum line length in " << infile << " is " << max_length << "." << endl; // print the maximum line length
    }
    return 0;
}