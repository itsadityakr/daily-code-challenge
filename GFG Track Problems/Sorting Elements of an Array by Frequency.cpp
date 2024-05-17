// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-mutating-stl-algorithms/problem/sorting-elements-of-an-array-by-frequency-1587115621

class Solution {
public:
    static bool comp(pair<int, int> a, pair<int, int> b) {
        // If frequencies are equal, sort by value
        if (a.second == b.second)
            return a.first < b.first;
        // Sort by frequency in descending order
        return a.second > b.second;
    }
    
    vector<int> sortByFreq(int arr[], int n) {
        // Map to store frequencies of elements
        unordered_map<int, int> freqMap;
        
        // Populate frequency map
        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }
        
        // Convert map to vector of pairs
        vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());
        
        // Sort the vector by frequency (descending order), breaking ties by value (ascending order)
        sort(freqVec.begin(), freqVec.end(), comp);
        
        // Create the result vector
        vector<int> result;
        
        // Iterate over sorted vector and append elements to result vector according to their frequency
        for (auto& p : freqVec) {
            int value = p.first;
            int frequency = p.second;
            for (int i = 0; i < frequency; i++) {
                result.push_back(value);
            }
        }
        
        return result;
    }
};