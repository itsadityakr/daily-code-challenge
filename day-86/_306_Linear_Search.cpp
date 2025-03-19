// _306_Linear_Search.cpp

// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

class Solution {
public:
    // Function to search for an element in the array
    int search(vector<int>& arr, int x) {
        // APPROACH 1: Using a loop
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                return i;
            }
        }

        // APPROACH 2: Using std::find (alternative approach)
        // auto it = find(arr.begin(), arr.end(), x);
        // if (it != arr.end()) {
        //     return distance(arr.begin(), it);
        // }

        return -1;  // Element not found
    }
};

Input: 
1 2 3 4
3

Output:
2