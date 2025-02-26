// https://leetcode.com/problems/rotate-list/

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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == nullptr || head->next == nullptr || k == 0)
        {
            return head;
        }

        int length = 1;
        ListNode *last = head;

        while (last->next != nullptr)
        {
            last = last->next;
            length++;
        }

        k = k % length;
        if (k == 0)
            return head;

        ListNode *beforeNewHead = head;
        for (int i = 0; i < length - k - 1; i++)
        {
            beforeNewHead = beforeNewHead->next;
        }

        ListNode *newHead = beforeNewHead->next;
        beforeNewHead->next = nullptr;
        last->next = head;

        return newHead;
    }
};
