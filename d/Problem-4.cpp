#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rarray(int* x, int n) {
    srand(time(NULL)); // initialize random set using the time

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 2; // generate a random number between 0 and 1
    }
}

int main() {
    const int n = 10;
    int x[n];

    rarray(x, n);

    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }

    cout << endl;

    return 0;
}