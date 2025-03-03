// http://geeksforgeeks.org/problems/all-divisors-of-a-number/1

class Solution
{
public:
    void print_divisors(int n)
    {
        vector<int> divisors;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
                if (i != n / i)
                {
                    divisors.push_back(n / i);
                }
            }
        }
        sort(divisors.begin(), divisors.end());
        for (int d : divisors)
        {
            cout << d << " ";
        }
    }
};
