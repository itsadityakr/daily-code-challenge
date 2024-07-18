#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// int getLength(Node *head)
// {
//     int len = 0;
//     while (head != nullptr)
//     {
//         len++;
//         head = head->next;
//     }
//     return len;
// }

// Node *findMiddle(Node *head)
// {
//     int len = getLength(head);
//     int ans = len / 2;

//     Node *temp = head;
//     int count = 0;
//     while (count < ans)
//     {
//         temp = temp->next;
//         count++;
//     }
//     return temp;
// } 

//TC->O(n)

Node *getMiddle(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    if (head->next->next == nullptr)
    {
        return head->next;
    }
    Node *slow = head;
    Node *fast = head->next;
    while (fast != nullptr)
    {
        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node *findMiddle(Node *head)
{
    return getMiddle(head);
}

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Creating linked list
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Printing the linked list
    cout << "Linked List: ";
    printList(head);

    // Finding the middle of the linked list
    Node *middle = findMiddle(head);
    if (middle != nullptr)
    {
        cout << "The middle node is: " << middle->data << endl;
    }
    else
    {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}
