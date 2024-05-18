// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/check-if-linked-list-is-pallindrome

#include<vector>
class Solution
{
  public:
    bool checkPalindrome(vector<int> arr)
    {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        
        while(s<e)
        {
            if(arr[s] != arr[e])
            return 0;
            
            s++;
            e--;
        }
        
        return 1;
    }
    
    bool isPalindrome(Node *head)
    {
        vector<int> v;
        
        Node* temp = head;
        while(temp != NULL)
        {
            v.push_back(temp->data);
            temp = temp->next;
        }
        
        return checkPalindrome(v);
    }
};