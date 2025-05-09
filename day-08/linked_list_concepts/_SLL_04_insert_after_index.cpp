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

void insertAfterIndex(int index, int value) {
    Node* newNode = new Node(value);
    Node* current = head;
    int count = 0;

    while (current != nullptr && count < index) {
        current = current->next;
        count++;
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

    insertAfterIndex(4,1);
    printLL();

    return 0;
}
