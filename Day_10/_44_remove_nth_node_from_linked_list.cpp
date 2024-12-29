// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

Node* removeNthFromEnd(Node* head, int n) {
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;
    for (int i = 0; i < n + 1; ++i) {
        fast = fast->next;
    }
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}

void traverse(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    removeNthFromEnd(head,3);
    traverse(head);

    return 0;
}
