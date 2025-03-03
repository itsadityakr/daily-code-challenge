// https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/description/

class Solution
{
public:
    unordered_set<int> getPrimes(int num)
    {
        unordered_set<int> primes;
        for (int i = 2; i * i <= num; i++)
        {
            while (num % i == 0)
            {
                primes.insert(i);
                num /= i;
            }
        }
        if (num > 1)
        {
            primes.insert(num);
        }
        return primes;
    }

    int distinctPrimeFactors(vector<int> &nums)
    {
        unordered_set<int> primeFactors;
        for (int num : nums)
        {
            unordered_set<int> primes = getPrimes(num);
            primeFactors.insert(primes.begin(), primes.end());
        }
        return primeFactors.size();
    }
};
