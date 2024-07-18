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

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
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

    Node *node1 = new Node(20);

    Node *tail = node1;

    insertAtTail(tail, 5);
    insertAtTail(tail, 10);
    insertAtTail(tail, 15);

    cout << "The Tail Element: ";
    print(tail);
    cout << "Linked List after insertions at End: ";
    print(node1);
    return 0;
}
