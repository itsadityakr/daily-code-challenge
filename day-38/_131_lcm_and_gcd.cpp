// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b, int gcd_val)
    {
        return (a * b) / gcd_val;
    }

    vector<int> lcmAndGcd(int a, int b)
    {
        int gcd_val = gcd(a, b);
        int lcm_val = lcm(a, b, gcd_val);
        return {lcm_val, gcd_val};
    }
};
