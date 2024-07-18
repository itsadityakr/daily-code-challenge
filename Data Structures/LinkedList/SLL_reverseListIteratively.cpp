#include <iostream>
using namespace std;

// Node class for creating nodes of linked list
class Node
{
public:
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize the node with data
    Node(int data)
    {
        this->data = data;
        this->next = nullptr; // Initialize next pointer to null
    }
};

// Function to reverse a linked list
// Takes a reference to the head pointer as input
void reverseLL(Node *&head)
{
    Node *current = head;     // Pointer to traverse the list
    Node *previous = nullptr; // Pointer to keep track of the previous node

    // Traverse through the list
    while (current != nullptr)
    {
        Node *temp = current->next; // Store next node
        current->next = previous;   // Reverse the current node's pointer
        previous = current;         // Move previous to current node
        current = temp;             // Move current to next node
    }
    head = previous; // Update head to point to the new head of reversed list
}

// Function to insert a new node at the head of the linked list
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data); // Create a new node with given data
    temp->next = head;           // Set new node's next to current head
    head = temp;                 // Update head to point to the new node
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head; // Pointer to traverse the list
    while (temp != nullptr)
    {                                 // Traverse until end of list (nullptr)
        cout << temp->data << " -> "; // Print current node's data
        temp = temp->next;            // Move to next node
    }
    cout << "NULL" << endl; // Print end of list indicator
}

// Main function to demonstrate linked list operations
int main()
{
    Node *head = new Node(20); // Create the first node with data 20

    insertAtHead(head, 10); // Insert a node with data 10 at the head

    cout << "Original List: ";
    printList(head); // Print the original list

    reverseLL(head); // Reverse the linked list

    cout << "Reversed List: ";
    printList(head); // Print the reversed list

    return 0; // Exit the program
}
