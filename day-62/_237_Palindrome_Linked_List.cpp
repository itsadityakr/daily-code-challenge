// https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return true;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr;
        ListNode *current = slow;
        ListNode *nextNode = nullptr;

        while (current != nullptr)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        ListNode *left = head;
        ListNode *right = prev;

        while (right != nullptr)
        {
            if (left->val != right->val)
            {
                return false;
            }
            left = left->next;
            right = right->next;
        }

        return true;
    }
};
