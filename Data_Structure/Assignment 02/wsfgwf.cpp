#include <iostream>
#include <climits>

// Node class to represent a node in the linked list
class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

// SinglyLinkedList class to represent the linked list
class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void printMaxMin() {
        if (head == nullptr) {
            std::cout << "Empty list." << std::endl;
            return;
        }

        int maximum = INT_MIN;
        int minimum = INT_MAX;

        Node* current = head;
        while (current != nullptr) {
            if (current->value > maximum) {
                maximum = current->value;
            }
            if (current->value < minimum) {
                minimum = current->value;
            }
            current = current->next;
        }

        std::cout << "Maximum value: " << maximum << std::endl;
        std::cout << "Minimum value: " << minimum << std::endl;
    }
};

int main() {
    SinglyLinkedList linkedList;

    while (true) {
        int value;
        std::cin >> value;
        if (value == -1) {
            break;
        }
        linkedList.insert(value);
    }

    linkedList.printMaxMin();

    return 0;
}
