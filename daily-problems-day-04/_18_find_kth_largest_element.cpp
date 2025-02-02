// https://leetcode.com/problems/kth-largest-element-in-an-array/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& nums, int start, int end) {
    int pivotValue = nums[start];
    int left = start + 1;
    int right = end;

    while (left <= right) {
        while (left <= right && nums[left] < pivotValue) {
            left++;
        }
        while (left <= right && nums[right] > pivotValue) {
            right--;
        }
        if (left <= right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
    swap(nums[start], nums[right]);
    return right;
}

int findKthLargest(vector<int>& nums, int k) {
    int start = 0, end = nums.size() - 1, kthLargestElement;

    while (true) {
        int pivotIndex = partition(nums, start, end);
        
        if (pivotIndex == nums.size() - k) {
            kthLargestElement = nums[pivotIndex];
            break;
        }
        
        if (pivotIndex < nums.size() - k) {
            start = pivotIndex + 1;
        } else {
            end = pivotIndex - 1;
        }
    }
    
    return kthLargestElement;
}

int main() {
    int n, k;
    
    cin >> n;
    
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cin >> k;

    if (k <= 0 || k > n) {
        return 1;
    }
    
    int result = findKthLargest(nums, k);

    cout << result << endl;

    return 0;
}
