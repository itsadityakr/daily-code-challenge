// https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<bool> is_prime(N + 1, true);
        vector<int> primes;

        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i * i <= N; i++)
        {
            if (is_prime[i])
            {

                for (int j = i * i; j <= N; j += i)
                {
                    is_prime[j] = false;
                }
            }
        }

        for (int i = 2; i <= N; i++)
        {
            if (is_prime[i])
            {
                primes.push_back(i);
            }
        }

        return primes;
    }
};