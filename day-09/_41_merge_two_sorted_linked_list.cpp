// https://leetcode.com/problems/merge-two-sorted-lists/description/

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

Node* mergeTwoLists(Node* list1, Node* list2) {
    if (!list1) return list2;
    if (!list2) return list1;
        
    if (list1->data <= list2->data) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
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
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(4);

    Node* list2 = new Node(1);
    list2->next = new Node(3);
    list2->next->next = new Node(4);

    printList(list1);

    printList(list2);

    Node* mergedList = mergeTwoLists(list1, list2);
    
    printList(mergedList);

    return 0;
}