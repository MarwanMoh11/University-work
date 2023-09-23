#include <iostream>
#include <string>

using namespace std;

void generateBinaryStrings(string i, int n, int k) {
    if (n == 0) {
        cout << i << endl;
        return;
    }
    if (k > 0) {
        generateBinaryStrings(i + "1", n - 1, k - 1);
    }
    generateBinaryStrings(i + "0", n - 1, k);
}

int main() {
    int n = 3;
    int k = 3;
    generateBinaryStrings("", n, k);
    return 0;
}
