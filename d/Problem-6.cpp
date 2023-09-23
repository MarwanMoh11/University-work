#include <iostream>
using namespace std;

bool descendOrder(int table[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (table[i] < table[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = { 5, 4, 3, 2, 1 }; 
    int arr2[] = { 1, 3, 2, 4, 5 };
    // Two array examples are being used to check validity of code
    if (descendOrder(arr1, 5)) {
        cout << "arr1 is in descending order\n";
    }
    else {
        cout << "arr1 is NOT in descending order\n";
    }

    if (descendOrder(arr2, 5)) {
        cout << "arr2 is in descending order\n";
    }
    else {
        cout << "arr2 is NOT in descending order\n";
    }

    return 0;
}