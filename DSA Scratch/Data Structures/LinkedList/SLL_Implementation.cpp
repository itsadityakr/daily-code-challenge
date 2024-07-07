#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(20);
    Node* head = node1;
    
    cout << "Initial node address: " << node1 << endl; // The memory address of the head node.
    cout << "Initial node data: " << node1->data << endl; // The integer value 10.
    cout << "Initial node next: " << node1->next << endl; // The integer 0 (representing the NULL pointer).
    print(node1);
    return 0;
}