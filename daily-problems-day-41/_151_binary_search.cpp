// https://leetcode.com/problems/binary-search/description/k

// class Solution {
// public:
//     int searchHelper(vector<int>& nums, int low, int high, int target) {
//         if (low > high) return -1;
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target) return mid;
//         if (nums[mid] < target) return searchHelper(nums, mid + 1, high, target);
//         return searchHelper(nums, low, mid - 1, target);
//     }

//     int search(vector<int>& nums, int target) {
//         return searchHelper(nums, 0, nums.size() - 1, target);
//     }
// };

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};
