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

void deleteValueAtIndex(int index) {
    if (head == nullptr) return;
    
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* current = head;
    for (int i = 0; current != nullptr && i < index - 1; i++) {
        current = current->next;
    }
    
    if (current == nullptr || current->next == nullptr) return;
    
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

int main() {

    insertAtEnd(4);
    insertAtEnd(6);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(7);

    printLL();
    deleteValueAtIndex(2);

    printLL();

    return 0;
}
