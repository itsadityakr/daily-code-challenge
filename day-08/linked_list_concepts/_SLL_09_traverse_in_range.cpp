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

void printLLinRange(int start, int end) {
    Node* current = head;
    int index = 0;
    bool found = false;
    
    while (current != nullptr) {
        if (index >= start && index <= end) {
            cout << current->data << " -> ";
            found = true;
        }
        if (index > end) {
            break;
        }
        current = current->next;
        index++;
    }
    
    if (found) {
        cout << "nullptr" << endl;
    } else {
        cout << "No elements in range [" << start << ", " << end << "]" << endl;
    }
}

int main() {

    insertAtEnd(4);
    insertAtEnd(6);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(7);

    printLL();
    printLLinRange(2, 4);

    return 0;
}