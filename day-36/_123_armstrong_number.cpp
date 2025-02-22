// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int sum = 0, original = n;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }
        return sum == original;
    }
};