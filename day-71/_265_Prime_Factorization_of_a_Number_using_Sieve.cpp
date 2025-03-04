// https://www.geeksforgeeks.org/problems/prime-factors5052/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_cardk

class Solution
{
public:
    vector<int> AllPrimeFactors(int N)
    {
        vector<int> prime_factors;

        if (N % 2 == 0)
        {
            prime_factors.push_back(2);
            while (N % 2 == 0)
            {
                N /= 2;
            }
        }

        for (int i = 3; i * i <= N; i += 2)
        {
            if (N % i == 0)
            {
                prime_factors.push_back(i);
                while (N % i == 0)
                {
                    N /= i;
                }
            }
        }

        if (N > 1)
        {
            prime_factors.push_back(N);
        }

        return prime_factors;
    }
};