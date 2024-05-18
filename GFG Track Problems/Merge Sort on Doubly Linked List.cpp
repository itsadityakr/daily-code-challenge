// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/merge-sort-on-doubly-linked-list

class Solution {
public:
    // Function to split the doubly linked list into two halves
    Node* split(Node* head) {
        Node* fast = head;
        Node* slow = head;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        Node* temp = slow->next;
        slow->next = NULL;
        return temp;
    }

    // Function to merge two sorted doubly linked lists
    Node* merge(Node* first, Node* second) {
        if (!first)
            return second;
        if (!second)
            return first;
        if (first->data < second->data) {
            first->next = merge(first->next, second);
            first->next->prev = first;
            first->prev = NULL;
            return first;
        } else {
            second->next = merge(first, second->next);
            second->next->prev = second;
            second->prev = NULL;
            return second;
        }
    }

    // Function to sort the given doubly linked list using Merge Sort
    Node* sortDoubly(Node* head) {
        if (!head || !head->next)
            return head;

        Node* second = split(head);

        head = sortDoubly(head);
        second = sortDoubly(second);

        return merge(head, second);
    }

    // Utility function to print the list in forward direction
    void printListForward(Node* head) {
        while (head) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }

    // Utility function to print the list in backward direction
    void printListBackward(Node* head) {
        Node* tail = head;
        while (tail && tail->next) {
            tail = tail->next;
        }
        while (tail) {
            cout << tail->data << " ";
            tail = tail->prev;
        }
        cout << endl;
    }
};