// https://www.geeksforgeeks.org/problems/find-unique-element2632/0

class Solution
{
public:
    int findUnique(int k, vector<int> &arr)
    {
        unordered_map<int, int> freq;

        for (int num : arr)
        {
            freq[num]++;
        }
        // {6: 3, 2: 3, 5: 1}
        for (auto &pair : freq)
        {
            int num = pair.first;
            int count = pair.second;

            if (count % k != 0)
            {
                return num;
            }
        }

        return -1;
    }
};