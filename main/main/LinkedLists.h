#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <vector>

struct Node {
    int value;
    int count;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    int length;

public:
    LinkedList();
    ~LinkedList();

    void addNode(int value);
    void removeNode(int value);
    void printList();
    Node* createList(std::vector<int> v);
    int sumNodes();
    void insertAfter(int firstValue, int secondValue);
};

#endif
