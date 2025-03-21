// _316_Find_the_duplicate_element_in_an_array.cpp

// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int slow = nums[0];
            int fast = nums[0];
            
            do {
                slow = nums[slow];
                fast = nums[nums[fast]];
            } while (slow != fast);
            
            slow = nums[0];
            while (slow != fast) {
                slow = nums[slow];
                fast = nums[fast];
            }
            
            return slow;
        }
    };

    // Input: nums = [1,3,4,2,2]
// Output: 2