// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int findUnion(vector<int> &a, vector<int> &b)
    {
        unordered_map<int, int> freq;
        int ele = 0;
        for (int num : a)
        {
            freq[num]++;
        }
        for (int num : b)
        {
            freq[num]++;
        }

        for (auto &pair : freq)
        {
            int num = pair.first;
            int count = pair.second;

            if (count > 0)
            {
                ele++;
            }
        }
        return ele;
    }
};

// class Solution
// {
// public:
//     int findUnion(vector<int> &a, vector<int> &b)
//     {
//         unordered_set<int> uniqueElements;

//         for (int num : a)
//             uniqueElements.insert(num);
//         for (int num : b)
//             uniqueElements.insert(num);

//         return uniqueElements.size();
//     }
// };
