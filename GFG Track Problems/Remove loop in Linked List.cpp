// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/remove-loop-in-linked-list

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        unordered_map<Node* , bool>visited;
        while(curr != NULL){
            if(visited[curr] == true){
                break;
            }
            visited[curr] = true;
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
    }
};