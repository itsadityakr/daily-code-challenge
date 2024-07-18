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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void deleteNode(int position, Node *&head)
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
    if (position < 0 || position >= count)
    {
        cout << "Invalid position! Node cannot be deleted." << endl;
        return;
    }

    // Delete node
    if (position == 0)
    {
        head = head->next;
        return;
    }
    Node *current = head;
    for (int i = 0; i < position - 1; i++)
    {
        current = current->next;
    }
    current->next = current->next->next;
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
    Node *node1 = new Node(3);
    Node *head = node1;

    insertAtHead(head, 6);
    insertAtHead(head, 12);
    insertAtHead(head, 4);

    deleteNode(2, head);
    print(head);
    return 0;
}