// https://www.geeksforgeeks.org/problems/find-the-odd-occurence4820/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int getOddOccurrence(int arr[], int n)
    {
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result ^= arr[i];
        }
        return result;
    }
};