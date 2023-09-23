#include <iostream>
#include <string>

using namespace std;

bool Unique(string S, string Sub) {
    int count = 0;
    for (int i = 0; i <= S.length() - Sub.length(); i++) {
        if (S.substr(i, Sub.length()) == Sub) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return count == 1;
}

int main() {
    string S = "hello world";
    string Sub = "llo";
    cout << boolalpha << Unique(S, Sub) << endl; // false

    S = "hello world";
    Sub = "he";
    cout << boolalpha << Unique(S, Sub) << endl; // true
    return 0;
}