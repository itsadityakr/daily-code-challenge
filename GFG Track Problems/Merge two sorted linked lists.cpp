// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/merge-two-sorted-linked-lists

Node* sortedMerge(Node* head1, Node* head2)
{
    // If one of the lists is empty, return the other list
    if (!head1) return head2;
    if (!head2) return head1;
    
    // Initialize a dummy node to serve as the head of the merged list
    Node* dummy = new Node(-1);
    Node* tail = dummy; // Tail pointer to keep track of the end of the merged list
    
    // Traverse both lists simultaneously
    while (head1 && head2) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    
    // If any list has remaining elements, append them to the merged list
    if (head1) tail->next = head1;
    if (head2) tail->next = head2;
    
    // Return the head of the merged list (excluding the dummy node)
    return dummy->next;
}