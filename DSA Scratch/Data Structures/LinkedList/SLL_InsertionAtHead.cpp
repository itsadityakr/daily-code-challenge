#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;

    insertAtHead(head, 20);

    cout << "Linked List after insertions at Head: ";
    print(head); // This will print the linked list.
    return 0;
}
