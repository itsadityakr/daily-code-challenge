// https://www.geeksforgeeks.org/problems/odd-or-even3618/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    bool isEven(int n)
    {
        // code here
        return n & 1 ? false : true;
    }
};