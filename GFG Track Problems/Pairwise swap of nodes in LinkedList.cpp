// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/pairwise-swap-of-nodes-in-linkelist

struct Node* pairwise_swap(struct Node* head)
{
    // If linked list is empty or has only one node
    if (head == NULL || head->next == NULL)
        return head;

    // Initialize previous and current pointers
    Node* prev = head;
    Node* curr = head->next;

    // Change head before proceeding
    head = curr;

    // Traverse the list and swap nodes pairwise
    while (true) {
        Node* next = curr->next;
        curr->next = prev; // Change next of current as previous node

        // If next is NULL or next is the last node
        if (next == NULL || next->next == NULL) {
            prev->next = next;
            break;
        }

        // Change next of previous to next of next
        prev->next = next->next;

        // Update previous and current pointers
        prev = next;
        curr = prev->next;
    }
    return head;
}
