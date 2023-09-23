#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool file_ordered(string infile) {
    string prev_word = "";// initialize the previous word to an empty string
    string word;
    ifstream file(infile);
    while (file >> word) {
        if (prev_word > word) {// if the current word is smaller than the previous word, then the file is not ordered
            return false;
        }
        prev_word = word; // update the previous word to the current word
    }
    return true; // if we have not returned false by now, then the file is ordered
}

int main() {
    string infile = "words.txt";
    if (file_ordered(infile)) { // check if the file is ordered
        cout << "The words in the file " << infile << " are in ascending order." << endl;
    }
    else {
        cout << "The words in the file " << infile << " are not in ascending order." << endl;
    }
    return 0;
}