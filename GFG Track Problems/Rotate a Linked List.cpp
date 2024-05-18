// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/rotate-a-linked-list

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k) 
{ 
    // let us consider the example 
    // 10->20->30->40->50->60 - k=4 
    // initialising 2 nodes temp and last 
    Node* last = head; 
    Node* temp = head; 
  
    // if head is null or k==0 no rotation is required 
    if (head == NULL || k == 0) { 
        return head; 
    } 
  
    // Making last point to the last-node of the given 
    // linked list in this case 60 
    while (last->next != NULL) { 
        last = last->next; 
    } 
  
    // Rotating the linked list k times, one rotation at a 
    // time. 
    while (k) { 
  
        // Make head point to next of head 
        // so in the example given above head becomes 20 
        head = head->next; 
  
        // Making next of temp as NULL 
        // In the above example :10->NULL 
        temp->next = NULL; 
  
        // Making temp as last node 
        // (head)20->30->40->50->60->10(last) 
        last->next = temp; 
        last = temp; 
  
        // Point temp to head again for next rotation 
        temp = head; 
        k--; 
    } 
  
    return head; 
}
};