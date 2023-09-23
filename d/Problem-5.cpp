#include <iostream>

using namespace std;

void reverse(int* x, int n) {
    if (n <= 1) {
         return;  // this is for if the array is empty
    }
    else {
        
        int temp = x[0];
        x[0] = x[n - 1];
        x[n - 1] = temp;
        reverse(x + 1, n - 2); // the first and last elements are swapped and then the middle using recursion
    }
}

int main() {
    const int n = 4;
    int x[n] = { 1, 5, 3, 2 };

    reverse(x, n);

    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }

    cout << endl;

    return 0;
}