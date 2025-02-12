// https : // www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/0

class Solution
{
public:
    bool searchKey(int n, Node *head, int key)
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            if (curr->data == key)
                return true;
            curr = curr->next;
        }
        return false;
    }
};