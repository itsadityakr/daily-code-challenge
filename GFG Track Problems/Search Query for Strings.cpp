// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Trie/problem/search-query-for-strings5049

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *current = root;
    
    // Traverse through each character of the key
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a'; // Convert character to index (assuming lowercase characters)
        
        // If the current character is not present in the Trie, create a new node
        if (!current->children[index])
            current->children[index] = getNode();
        
        // Move to the next node
        current = current->children[index];
    }
    
    // Mark the end of the key
    current->isEndOfWord = true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    struct TrieNode *current = root;
    
    // Traverse through each character of the key
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a'; // Convert character to index (assuming lowercase characters)
        
        // If the current character is not present in the Trie, the key is not present
        if (!current->children[index])
            return false;
        
        // Move to the next node
        current = current->children[index];
    }
    
    // Check if the last node is marked as the end of a word
    return (current != NULL && current->isEndOfWord);
}