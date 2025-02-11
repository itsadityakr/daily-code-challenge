// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto & pair:freq){
            int num = pair.first;
            int count = pair.second;
            if(count>1){
                return num;
            }
        }
        return 0;
    }
};