// https://leetcode.com/problems/roman-to-integer/

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int result = 0;
        int prevValue = 0;

        for (char c : s)
        {
            int currValue = romanMap[c];
            result += currValue;
            if (currValue > prevValue)
            {
                result -= 2 * prevValue;
            }
            prevValue = currValue;
        }

        return result;
    }
};