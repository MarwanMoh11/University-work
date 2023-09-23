#include <iostream>
#include <vector>
#include "LinkedLists.h"

int main() {
    std::vector<int> v;
    int n;
    std::cout << "Enter the number of integers to input: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> num;
        v.push_back(num);
    }

    LinkedList list;
    Node* head = list.createList(v);

    std::cout << "Original list: ";
    list.printList();

    int firstValue, secondValue;
    std::cout << "Enter first value to search for: ";
    std::cin >> firstValue;
    std::cout << "Enter second value to insert: ";
    std::cin >> secondValue;

    list.insertAfter(firstValue, secondValue);
    std::cout << "List after insertions: ";
    list.printList();

    int removeValue;
    std::cout << "Enter value to remove: ";
    std::cin >> removeValue;
    list.removeNode(removeValue);
    std::cout << "List after removal: ";
    list.printList();

    int sum = list.sumNodes();
    std::cout << "Sum of all nodes: " << sum << std::endl;

    return 0;
}
