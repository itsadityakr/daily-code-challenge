// https://leetcode.com/problems/linked-list-cycle/description/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

bool hasCycle(Node *head) {
        Node* tmp = head;
        while(tmp && tmp->next){
            head = head->next;
            tmp = tmp->next->next;
            if(head == tmp)
                return true;
        }
        return false;
    }

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next->next;
    //printList(head); //Don't Uncomment as It will run infinte loop as above list is has no nullptr

    cout<<hasCycle(head);

    return 0;
}
