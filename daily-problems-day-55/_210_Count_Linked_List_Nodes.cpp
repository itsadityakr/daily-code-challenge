// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int getCount(struct Node *head)
    {
        int count = 0;
        Node *curr = head;
        while (curr != nullptr)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }
};