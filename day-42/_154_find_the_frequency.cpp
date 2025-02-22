// https://www.geeksforgeeks.org/problems/find-the-frequency/1

class Solution
{
public:
    int findFrequency(vector<int> nums, int x)
    {
        unordered_map<int, int> freq;
        for(int num:nums){
            freq[num]++;
        }
        
        for(auto & pair : freq){
            int num = pair.first;
            int count = pair.second;
            if(num == x){
                return count;
            }
        }
        return 0;
    }
};