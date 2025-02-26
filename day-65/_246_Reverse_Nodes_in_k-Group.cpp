// https://leetcode.com/problems/reverse-nodes-in-k-group/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == nullptr || k == 1)
        {
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode *prevGroupEnd = &dummy;

        while (true)
        {
            ListNode *groupStart = prevGroupEnd->next;
            ListNode *groupEnd = prevGroupEnd;

            for (int i = 0; i < k; i++)
            {
                groupEnd = groupEnd->next;
                if (groupEnd == nullptr)
                {
                    return dummy.next;
                }
            }

            ListNode *nextGroupStart = groupEnd->next;
            ListNode *previous = nextGroupStart;
            ListNode *current = groupStart;

            for (int i = 0; i < k; i++)
            {
                ListNode *next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }

            prevGroupEnd->next = groupEnd;
            prevGroupEnd = groupStart;
        }
    }
};
