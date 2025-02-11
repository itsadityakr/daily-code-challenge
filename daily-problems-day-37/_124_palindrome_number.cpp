// https://leetcode.com/problems/palindrome-number/description/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int originalNumber = x;
        int reversedNumber = 0;

        while (x != 0)
        {
            int remainder = x % 10;
            if (reversedNumber > INT_MAX / 10 || (reversedNumber == INT_MAX / 10 && remainder > 7))
            {
                return false;
            }
            reversedNumber = reversedNumber * 10 + remainder;
            x = x / 10;
        }
        return reversedNumber == originalNumber;
    }
};
