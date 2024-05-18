// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/detect-loop-in-linked-list

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
{
    // Create a temporary node
    Node* temp = new Node(0);
    while (head != NULL) {
        // This condition is for the case when there is no
        // loop
        if (head->next == NULL)
            return false;
        // Check if next is already pointing to temp
        if (head->next == temp)
            return true;
        // Store the pointer to the next node
        // in order to get to it in the next step
        Node* next = head->next;
        // Make next point to temp
        head->next = temp;
        // Get to the next node in the list
        head = next;
    }
    return false;
}
};