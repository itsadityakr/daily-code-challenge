// https://www.geeksforgeeks.org/problems/check-if-array-contains-duplicates/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// class Solution
// {
// public:
//     bool checkDuplicates(vector<int> &nums)
//     {
//         unordered_map<int, int> freq;

//         bool isUniq = false;

//         for (int num : nums)
//         {
//             freq[num]++;
//         }

//         for (auto &pair : freq)
//         {
//             int num = pair.first;
//             int count = pair.second;

//             if (count>1){
//                 isUniq = true;
//             }
//         }
//         return isUniq;
//     }
// };

class Solution
{
public:
    bool checkDuplicates(vector<int>& arr)
    {
        unordered_set<int> seen;
        for (int num : arr)
        {
            if (seen.count(num) > 0)
                return true;
                
            seen.insert(num);
        }
        return false;
    }
};