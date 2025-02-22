// https://leetcode.com/problems/sum-of-unique-elements/description/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        int sum = 0;
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        // {1:1, 2:2, 3:1}

        for (auto& pair : freq) {
            int num = pair.first;
            int count = pair.second;

            if (count == 1) {
                sum += num;
            }
        }
        return sum;
    }
};