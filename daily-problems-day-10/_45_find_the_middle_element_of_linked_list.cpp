// https://leetcode.com/problems/middle-of-the-linked-list/description/

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

Node* middleNode(Node* head) {
    if (head == nullptr) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    Node* middle = middleNode(head);
    if (middle != nullptr) {
        cout << middle->data << endl;
    } else {
        cout <<-1<< endl;
    }

    return 0;
}
