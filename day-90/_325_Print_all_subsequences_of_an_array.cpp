// _325_Print_all_subsequences_of_an_array.cpp

// Given an array arr[]. The task is to find all the possible subsequences of the given array using recursion.

// Examples: 

// Input: arr[] = [1, 2, 3]
// Output : [3], [2], [2, 3], [1], [1, 3], [1, 2], [1, 2, 3], []

// Input: arr[] = [1, 2]
// Output : [2], [1], [1, 2], []

void generateSubsequences(vector<int>& arr, int index, vector<int>& current, vector<vector<int>>& result) {
    if (index == arr.size()) {
        result.push_back(current);
        return;
    }
    current.push_back(arr[index]);
    generateSubsequences(arr, index + 1, current, result);
    current.pop_back();
    generateSubsequences(arr, index + 1, current, result);
}

vector<vector<int>> startSubsequenceGeneration(vector<int>& arr) {
    vector<vector<int>> result;
    vector<int> current;
    generateSubsequences(arr, 0, current, result);
    return result;
}