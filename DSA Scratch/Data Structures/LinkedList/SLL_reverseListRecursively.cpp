#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* reverse(Node*& head) {
    // Base case: empty list or single node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Recursively reverse the rest of the list
    Node* newHead = reverse(head->next);

    // Reverse current link
    head->next->next = head;
    head->next = nullptr;

    // Return new head of the reversed list
    return newHead;
}

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtHead(head, 4);
    insertAtHead(head, 7);
    insertAtHead(head, 10);
    
    head = reverse(head);

    printList(head);

    return 0;
}
