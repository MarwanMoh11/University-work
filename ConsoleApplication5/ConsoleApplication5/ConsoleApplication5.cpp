#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Data
    vector<int> light_morphs = { 648, 537, 484, 392, 246, 225, 193, 232, 312, 503 };
    vector<int> dark_morphs = { 83, 112, 198, 210, 281, 357, 412, 382, 249, 109 };

    // Determine maximum value
    int max_value = 0;
    for (int i = 0; i < light_morphs.size(); i++) {
        if (light_morphs[i] > max_value) {
            max_value = light_morphs[i];
        }
        if (dark_morphs[i] > max_value) {
            max_value = dark_morphs[i];
        }
    }

    // Draw graph
    for (int i = max_value; i >= 0; i--) {
        for (int j = 0; j < light_morphs.size(); j++) {
            if (light_morphs[j] >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "| ";
        for (int j = 0; j < dark_morphs.size(); j++) {
            if (dark_morphs[j] >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Draw x-axis
    cout << "  ";
    for (int i = 0; i < light_morphs.size(); i++) {
        cout << "- ";
    }
    cout << "| ";
    for (int i = 0; i < dark_morphs.size(); i++) {
        cout << "- ";
    }
    cout << endl;

    // Draw labels
    cout << "  ";
    for (int i = 0; i < light_morphs.size(); i++) {
        cout << i + 1 << " ";
    }
    cout << "| ";
    for (int i = 0; i < dark_morphs.size(); i++) {
        cout << i + 1 << " ";
    }
    cout << endl;

    return 0;
}
