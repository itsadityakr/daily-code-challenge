// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution
{
public:
    Node *segregate(Node *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        Node *zeroDummy = new Node(-1);
        Node *oneDummy = new Node(-1);
        Node *twoDummy = new Node(-1);

        Node *zeroTail = zeroDummy;
        Node *oneTail = oneDummy;
        Node *twoTail = twoDummy;

        Node *current = head;

        while (current != nullptr)
        {
            if (current->data == 0)
            {
                zeroTail->next = current;
                zeroTail = zeroTail->next;
            }
            else if (current->data == 1)
            {
                oneTail->next = current;
                oneTail = oneTail->next;
            }
            else
            {
                twoTail->next = current;
                twoTail = twoTail->next;
            }
            current = current->next;
        }

        if (oneDummy->next != nullptr)
        {
            zeroTail->next = oneDummy->next;
        }
        else
        {
            zeroTail->next = twoDummy->next;
        }

        oneTail->next = twoDummy->next;
        twoTail->next = nullptr;

        head = zeroDummy->next;

        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;

        return head;
    }
};
