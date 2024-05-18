// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/merge-k-sorted-linked-lists

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
{
    // Priority queue to store the head of each linked list
    priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> minHeap;

    // Insert the head of each linked list into the min heap
    for (int i = 0; i < K; ++i) {
        if (arr[i] != NULL) {
            minHeap.push({arr[i]->data, arr[i]});
        }
    }

    // Create a dummy node to hold the result
    Node* dummy = new Node(0);
    Node* tail = dummy;

    // Merge lists until the min heap is empty
    while (!minHeap.empty()) {
        // Get the node with the smallest value
        auto minNode = minHeap.top();
        minHeap.pop();

        // Append the node to the result list
        tail->next = minNode.second;
        tail = tail->next;

        // Move to the next node in the list
        if (minNode.second->next != NULL) {
            minHeap.push({minNode.second->next->data, minNode.second->next});
        }
    }

    // Return the merged list
    return dummy->next;
}

};