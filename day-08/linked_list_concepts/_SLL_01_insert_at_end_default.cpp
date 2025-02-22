#include<iostream>
#define endl "\n"
using namespace std;

struct Node {
    int data;
    Node * next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* head = nullptr;

void insertAtEnd(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void printLL(){
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {

    // Node* head = new Node(20);
    // Node* second = new Node(30);
    // Node* third = new Node(40);

    // head->next = second;
    // second->next = third;
    // third->next = nullptr;
    insertAtEnd(4);
    insertAtEnd(6);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(7);
    printLL();

    return 0;
}
