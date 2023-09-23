#include "LinkedLists.h"

LinkedList::LinkedList() {
    head = nullptr;
    length = 0;
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::addNode(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->count = 1;
    newNode->next = head;
    head = newNode;
    length++;
}

void LinkedList::removeNode(int value) {
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current->value != value) {
        previous = current;
        current = current->next;
    }
    if (current == nullptr) {
        std::cout << "Value not found in list" << std::endl;
        return;
    }
    if (previous == nullptr) {
        head = current->next;
    }
    else {
        previous->next = current->next;
    }
    delete current;
    length--;
}

void LinkedList::printList() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " (" << current->count << ") -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

Node* LinkedList::createList(std::vector<int> v) {
    for (int i = v.size() - 1; i >= 0; i--) {
        int value = v[i];
        Node* current = head;
        bool found = false;
        while (current != nullptr) {
            if (current->value == value) {
                current->count++;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            addNode(value);
        }
    }
    return head;
}
void LinkedList::insertAfter(int firstValue, int secondValue) {
    Node* current = head;
    while (current != nullptr) {
        if (current->value == firstValue) {
            Node* newNode = new Node;
            newNode->value = secondValue;
            newNode->count = 1;
            newNode->next = current->next;
            current->next = newNode;
            length++;
        }
        current = current->next;
    }
}

int LinkedList::sumNodes() {
    int sum = 0;
    Node* current = head;
    while (current != nullptr) {
        sum += current->value * current->count;
        current = current->next;
    }
    return sum;
}
