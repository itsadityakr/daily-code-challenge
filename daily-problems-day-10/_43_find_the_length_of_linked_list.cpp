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

int length(Node* head) {
    int count = 0;
    Node* temp = head;
    
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << length(head) << endl;

    return 0;
}
