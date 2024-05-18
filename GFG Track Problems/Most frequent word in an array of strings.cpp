// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Trie/problem/most-frequent-word-in-an-array-of-strings3528

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        unordered_map<string,int> mp;
        set<string> st;
        
        int mx = 0, indx;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            
            if(mp[arr[i]] > mx)
                mx = mp[arr[i]];
        }
        
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]] == mx && st.find(arr[i]) == st.end())
            {
                indx = i;
                st.insert(arr[i]);
            }
        }
        
        return arr[indx];
    }
};