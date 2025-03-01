// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int xorResult = start ^ goal, count = 0;
        while (xorResult)
        {
            count += xorResult & 1;
            xorResult >>= 1;
        }
        return count;
    }
};