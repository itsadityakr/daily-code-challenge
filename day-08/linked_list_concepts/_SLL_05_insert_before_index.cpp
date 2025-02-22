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

void insertAtEnd(int data){
    Node* newNode = new Node(data);
    if (head==nullptr){
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void insertBeforeIndex(int index, int value) {
    Node* newNode = new Node(value);
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    for (int i = 0; i < index - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current != nullptr) {
        newNode->next = current->next;
        current->next = newNode;
    }
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

    insertAtEnd(4);
    insertAtEnd(6);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(7);

    insertBeforeIndex(4,1);
    printLL();

    return 0;
}