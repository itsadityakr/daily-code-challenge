// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/swap-kth-node-from-beginning-and-kth-node-from-end-in-a-singly-linked-list

Node *swapkthnode(Node* head, int num, int K)
{
if (K > num) return head; // K is invalid

        if (K == num - K + 1) return head; // Kth node from start and end are the same

        Node* prevKthFromStart = nullptr;
        Node* kthFromStart = head;
        for (int i = 1; i < K; i++) {
            prevKthFromStart = kthFromStart;
            kthFromStart = kthFromStart->next;
        }

        Node* prevKthFromEnd = nullptr;
        Node* kthFromEnd = head;
        for (int i = 1; i < num - K + 1; i++) {
            prevKthFromEnd = kthFromEnd;
            kthFromEnd = kthFromEnd->next;
        }

        if (prevKthFromStart) {
            prevKthFromStart->next = kthFromEnd;
        } else {
            head = kthFromEnd;
        }

        if (prevKthFromEnd) {
            prevKthFromEnd->next = kthFromStart;
        } else {
            head = kthFromStart;
        }

        Node* temp = kthFromStart->next;
        kthFromStart->next = kthFromEnd->next;
        kthFromEnd->next = temp;

        return head;
    }