// _304_Left_rotate_the_array_by_K_places.cpp

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int start = 0;
        int end = nums.size();
        int n = k % end;
        rotate(nums.begin() + start, nums.begin() + n, nums.begin() + end);
    }
};

// Input: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
// Output: [4, 5, 6, 7, 1, 2, 3]