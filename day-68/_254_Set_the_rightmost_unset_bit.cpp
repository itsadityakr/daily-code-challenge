// https://www.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int setBit(int n)
    {
        return n | (n + 1);
    }
};