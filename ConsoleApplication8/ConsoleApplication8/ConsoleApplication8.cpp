#include <iostream>
#include <vector>
using namespace std;

const int TABLE_SIZE = 10;

class HashNode {
public:
    int key;
    HashNode* next;
    HashNode(int key) : key(key), next(nullptr) {}
};

class HashTable {
public:
    vector<HashNode*> table;
    HashTable() : table(TABLE_SIZE, nullptr) {}

    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key) {
        int index = hashFunction(key);
        if (table[index] == nullptr) {
            table[index] = new HashNode(key);
        }
        else {
            HashNode* node = table[index];
            while (node->next != nullptr) {
                node = node->next;
            }
            node->next = new HashNode(key);
        }
    }

    void printTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << " : ";
            HashNode* node = table[i];
            while (node != nullptr) {
                cout << node->key << " -> ";
                node = node->next;
            }
            cout << "nullptr" << endl;
        }
    }
};

int main() {
    int arr[] = { 1, 4, 7, 1, 5, 2, 4, 1, 3, 5 };
    HashTable ht;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        ht.insert(arr[i]);
    }
    ht.printTable();
    return 0;
}
