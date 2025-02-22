// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

class Solution
{
public:
    vector<int> frequencyCount(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for(int num:nums){
            freq[num]++;
        }
        // {2:2, 3:2, 5:1}

        int n = nums.size();

        vector<int> series (n,0);

        // [0, 0, 0, 0, 0] 
        
        for(auto & pair : freq){
            int num = pair.first;
            int count = pair.second;

            if(count>0){
                series[num-1] = count;
            }
        }
        return series;
    }
};