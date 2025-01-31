// https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

class Solution
{
public:
    int firstRepeated(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        int first_repeating_element;
        for (int num : arr)
        {
            freq[num]++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (freq[arr[i]] > 1)
            {
                return i + 1;
            }
        }
        return -1;
    }
};