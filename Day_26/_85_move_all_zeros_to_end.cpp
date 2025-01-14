// https://leetcode.com/problems/move-zeroes/

class Solution
{
public:
    void swap(int &a, int &b)
    {
        if (&a != &b)
        {
            a = a ^ b;
            b = b ^ a;
            a = a ^ b;
        }
    }
    void moveZeroes(vector<int> &arr)
    {
        int n = arr.size();
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[i - zeroCount]);
            }
            else
            {
                zeroCount++;
            }
        }
    }
};