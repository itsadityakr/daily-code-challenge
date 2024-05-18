// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Trie/problem/trie-insert-and-search0651

class Solution
{
    public:
        //Function to insert string into TRIE.
        void insert(struct TrieNode *root, string key)
        {
            // code here
            int n=key.length();
            TrieNode* temp=root;
            for(int i=0;i<n;i++){
                int ind= CHAR_TO_INDEX(key[i]);
                if(temp->children[ind]==NULL){
                    temp->children[ind]=getNode();
                }
                temp=temp->children[ind];
            }
            
            temp->isLeaf=true;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            // code here
            int n=key.length();
            TrieNode* temp=root;
            for(int i=0;i<n;i++){
                int ind= CHAR_TO_INDEX(key[i]);
                if(temp->children[ind]==NULL){
                    return false;
                }
                temp=temp->children[ind];
            }
            
            if(temp!=NULL && temp->isLeaf==true){
                return true;
            }
            return false;
        
            
        }
};
