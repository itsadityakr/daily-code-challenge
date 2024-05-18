// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/clone-a-linked-list-with-next-and-random-pointer

class Solution {
public:
    Node* copyList(Node* head) {
        if (!head)
            return nullptr;

        // Step 1: Create copies in original list
        Node* curr = head;
        while (curr) {
            Node* copy = new Node(curr->data);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Step 2: Adjust random pointers
        curr = head;
        while (curr) {
            if (curr->arb)
                curr->next->arb = curr->arb->next;
            curr = curr->next->next;
        }

        // Step 3: Split the lists
        curr = head;
        Node* copiedHead = head->next;
        Node* copiedCurr = copiedHead;
        while (curr) {
            curr->next = copiedCurr->next;
            if (copiedCurr->next)
                copiedCurr->next = copiedCurr->next->next;
            curr = curr->next;
            copiedCurr = copiedCurr->next;
        }

        return copiedHead;
    }
};