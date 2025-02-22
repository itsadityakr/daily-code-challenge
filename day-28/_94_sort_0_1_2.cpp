// https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, twos = 0;
        for(int num : nums){
            if(num==0) zeros++;
            else if (num==1) ones++;
            else twos++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i < zeros) nums[i] = 0;
            else if (i < zeros + ones) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};