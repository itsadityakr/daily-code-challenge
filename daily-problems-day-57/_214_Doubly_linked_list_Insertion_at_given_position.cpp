// https : // www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list

        struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};
*/

    // Function to insert a new node at given position in doubly linked list.
    class Solution
{
public:
    Node *addNode(Node *head, int pos, int data)
    {
        Node *newNode = new Node(data);
        if (!head)
            return newNode;

        Node *temp = head;
        for (int i = 0; i < pos && temp->next != nullptr; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next)
        {
            temp->next->prev = newNode;
        }
        temp->next = newNode;

        return head;
    }
};