// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/sort-a-linked-list

class Solution {
public:
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // Base case: if the list is empty or has only one node, return.
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Step 1: Divide the linked list into two halves.
        Node *firstHalf, *secondHalf;
        splitList(head, firstHalf, secondHalf);

        // Step 2: Recursively sort the two halves.
        firstHalf = mergeSort(firstHalf);
        secondHalf = mergeSort(secondHalf);

        // Step 3: Merge the sorted halves.
        return mergeLists(firstHalf, secondHalf);
    }

private:
    // Function to split the linked list into two halves.
    void splitList(Node* head, Node*& firstHalf, Node*& secondHalf) {
        Node *slow, *fast;
        slow = head;
        fast = head->next;

        // Advance 'fast' two nodes, and advance 'slow' one node.
        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        // 'slow' is before the midpoint in the list, so split it in two at that point.
        firstHalf = head;
        secondHalf = slow->next;
        slow->next = NULL;
    }

    // Function to merge two sorted linked lists.
    Node* mergeLists(Node* first, Node* second) {
        if (first == NULL) {
            return second;
        }
        if (second == NULL) {
            return first;
        }

        // Pick either 'first' or 'second', and recur.
        if (first->data <= second->data) {
            first->next = mergeLists(first->next, second);
            return first;
        } else {
            second->next = mergeLists(first, second->next);
            return second;
        }
    }
};
