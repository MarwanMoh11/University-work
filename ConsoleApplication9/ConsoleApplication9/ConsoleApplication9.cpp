#include <iostream>
#include <vector>

using namespace std;

int hashing(int n) {
    return n % 10;
}

int main() {
    vector<int> arr1[10];
    int arr2[10] = { 13, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < 10; i++) {
        arr1[hashing(arr2[i])].push_back(arr2[i]);
    }

    for (int i = 0; i < 10; i++) {
        cout << "Elements at index " << i << ": ";
        for (int j = 0; j < arr1[i].size(); j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}
