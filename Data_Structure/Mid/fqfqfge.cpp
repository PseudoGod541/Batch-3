#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* prev;
    Node* next;

    Node(int val) {
        value = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert(int index, int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            if (index != 0) {
                cout << "Invalid" << endl;
                return;
            }

            head = newNode;
            tail = newNode;
        } else 
        {
            if (index == 0) {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            } else {
                Node* curr = head;
                int currIndex = 0;

                while (curr != nullptr && currIndex < index) {
                    curr = curr->next;
                    currIndex++;
                }

                if (curr == nullptr && currIndex != index) {
                    cout << "Invalid" << endl;
                    return;
                }

                if (curr == nullptr) {
                    newNode->prev = tail;
                    tail->next = newNode;
                    tail = newNode;
                } else {
                    newNode->prev = curr->prev;
                    newNode->next = curr;
                    curr->prev->next = newNode;
                    curr->prev = newNode;
                }
            }
        }

        printLeftToRight();
        printRightToLeft();
    }

    void printLeftToRight() {
        Node* curr = head;
        cout << "L -> ";

        while (curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->next;
        }

        cout << endl;
    }

    void printRightToLeft() {
        Node* curr = tail;
        cout << "R -> ";

        while (curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->prev;
        }

        cout << endl;
    }
};

int main() {
    int Q;
    cin >> Q;

    DoublyLinkedList dll;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        dll.insert(X, V);
    }

    return 0;
}