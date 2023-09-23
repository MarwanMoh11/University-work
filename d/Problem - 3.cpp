#include <iostream>
#include <cmath>

using namespace std;

void Pythagoras(int m, int n, int& a, int& b, int& c) { // pass by reference to have variables a and b and c for practicality
    a = pow(m, 2) - pow(n, 2);
    b = 2 * m * n;
    c = pow(m, 2) + pow(n, 2);
}

int main() {
    int m = 3;
    int n = 2;
    int a, b, c;
    Pythagoras(m, n, a, b, c);

    cout << "a: " << a << endl << "b:  " << b << endl << "c:  " << c << endl;

    return 0;
}