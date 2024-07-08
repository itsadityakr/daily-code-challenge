#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int newData)
{
    Node *newNode = new Node(newData);
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(int position, Node *&head, int newData)
{
    // Count nodes in the list
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    // Check if position is valid
    if (position < 0 || position > count)
    {
        cout << "Invalid position! Node cannot be inserted." << endl;
        return;
    }

    // Create new node
    Node *newNode = new Node(newData);

    // Insert at position
    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *current = head;
    for (int i = 0; i < position - 1; i++)
    {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *firstNode = new Node(5);
    Node *head = firstNode;

    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtPosition(1, head, 11);
    insertAtPosition(2, head, 10);
    insertAtPosition(3, head, 15);
    insertAtPosition(1, head, 20);

    printList(head);
    return 0;
}