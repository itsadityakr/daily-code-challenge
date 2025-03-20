// _313_Counting_Sort.cpp

// https://www.geeksforgeeks.org/problems/counting-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    string countSort(string arr)
    {
        int count[256] = {0};

        for (char c : arr)
            count[c]++;

        string result = "";
        for (int i = 0; i < 256; i++)
        {
            while (count[i] > 0)
            {
                result += char(i);
                count[i]--;
            }
        }

        return result;
    }
};

// Input: N = 13, S = "geeksforgeeks"
// Output: eeeefggkkorss