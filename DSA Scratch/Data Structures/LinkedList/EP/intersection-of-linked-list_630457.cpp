#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

// Definition for singly-linked list node.
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

Node* findIntersection(Node* headA, Node* headB) {
    Node* a = headA;
    Node* b = headB;

    int countA = 0;
    int countB = 0;

    // Count the number of nodes in list A
    while (a != NULL) {
        countA++;
        a = a->next;
    }

    // Count the number of nodes in list B
    while (b != NULL) {
        countB++;
        b = b->next;
    }

    // Adjust headA and headB to be at the same distance from the end
    while (countA > countB) {
        countA--;
        headA = headA->next;
    }

    while (countB > countA) {
        countB--;
        headB = headB->next;
    }

    // Find the intersection node
    while (headA != headB) {
        headA = headA->next;
        headB = headB->next;
    }

    return headA;
}

// Function to add a new node to the end of a linked list
void appendNode(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating two linked lists
    Node* headA = NULL;
    Node* headB = NULL;

    // Adding nodes to the first list
    appendNode(headA, 1);
    appendNode(headA, 2);
    appendNode(headA, 3);
    appendNode(headA, 4);
    appendNode(headA, 5);

    // Adding nodes to the second list
    appendNode(headB, 6);
    appendNode(headB, 7);

    // Creating an intersection point
    headB->next->next = headA->next->next->next; // Intersection at node with data 4

    cout << "List A: ";
    printList(headA);
    cout << "List B: ";
    printList(headB);

    // Finding intersection
    Node* intersection = findIntersection(headA, headB);

    if (intersection != NULL) {
        cout << "Intersection at node with data: " << intersection->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
