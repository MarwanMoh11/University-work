#include <iostream>

using namespace std;

enum color { black, white };
// This enum type represents two possible colors: black and white
bool isNegative(color A[][100], color B[][100], int n, int m) { 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == black && B[i][j] == white) {
                return false;
            }
            else if (A[i][j] == white && B[i][j] == black) {
                return false;
            }
        }
    }
    return true; // if we have not returned false by now, then B is the negation of A
} 

int main() {
    color A[100][100] = { {black, black, white}, {white, white, black} };
    color B[100][100] = { {white, white, black}, {black, black, white} };
    bool isNeg = isNegative(A, B, 2, 3);
    if (isNeg) {
        cout << "A is the negative of B." << endl;
    }
    else {
        cout << "A is not the negative of B." << endl;
    }
    return 0;
}