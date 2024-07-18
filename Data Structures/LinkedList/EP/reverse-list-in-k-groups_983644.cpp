// TC -> O(1)
// SC -> O(n)

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node *kReverse(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    int size = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        size++;
    }

    if (size < k)
    {
        return head;
    }

    Node *curr = head;
    Node *next = nullptr;
    Node *prev = nullptr;
    int ct = 0;

    while (curr != nullptr && ct < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        ct++;
    }

    if (next != nullptr)
    {
        head->next = kReverse(next, k);
    }

    return prev;
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
    Node *head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(9);
    head->next->next->next->next->next = new Node(2);

    int k = 4;

    // Printing the original linked list
    cout << "Original Linked List: ";
    printList(head);

    // Reversing the linked list in groups of k
    head = kReverse(head, k);

    // Printing the reversed linked list
    cout << "Reversed Linked List in groups of " << k << ": ";
    printList(head);

    return 0;
}
