// https://leetcode.com/problems/single-number-iii/description/

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int xorAll = 0;
        for (int num : nums)
        {
            xorAll ^= num;
        }

        unsigned int diffBit = xorAll & (-(unsigned int)xorAll);

        int num1 = 0, num2 = 0;
        for (int num : nums)
        {
            if (num & diffBit)
            {
                num1 ^= num;
            }
            else
            {
                num2 ^= num;
            }
        }

        return {num1, num2};
    }
};
