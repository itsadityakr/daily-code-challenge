// _305_Right_rotate_the_array_by_K_places.cpp

// https://leetcode.com/problems/rotate-array/description/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int start = 0;
        int end = nums.size();
        int n = k % end;
        reverse(nums.begin() + start, nums.begin() + end);
        reverse(nums.begin() + start, nums.begin() + n);
        reverse(nums.begin() + n, nums.begin() + end);
    }
};

// nums = [1,2,3,4,5,6,7], k =3
// Output = [5,6,7,1,2,3,4]