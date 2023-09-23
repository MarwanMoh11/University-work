#include <cmath>
#include <iostream>
using namespace std;

struct point {
    double x, y, z;
};

int minDistance(point arr[], int n) {
    double minDist = sqrt(arr[0].x * arr[0].x + arr[0].y * arr[0].y + arr[0].z * arr[0].z);
    int minIndex = 0;
    // Loop through the remaining points and update minimum distance and index if necessary
    for (int i = 1; i < n; i++) {
        double dist = sqrt(arr[i].x * arr[i].x + arr[i].y * arr[i].y + arr[i].z * arr[i].z);
        if (dist < minDist) {
            minDist = dist;
            minIndex = i;
        }
    }
    return minIndex; // Return the index of the point with minimum distance from the origin
}

int main() {
    point arr[] = { {1, 2, 3}, {0, 0, 0}, {7, 8, 9} };
    int n = sizeof(arr) / sizeof(arr[0]);
    int minIndex = minDistance(arr, n); // Find the index of the point with minimum distance from the origin and print it
    cout << "The index of the point with minimum distance from the origin is " << minIndex << endl;
    // Return 0 to signify successful program execution
    return 0;
}