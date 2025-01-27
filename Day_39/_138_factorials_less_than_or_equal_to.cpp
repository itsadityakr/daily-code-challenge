// https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1

// class Solution
// {
// public:
//     vector<long long> factorialNumbers(long long n)
//     {
//         vector<long long> result;
//         long long product = 1;
//         for (long long i = 2; product <= n; i++)
//         {
//             result.push_back(product);
//             product *= i;
//         }
//         return result;
//     }
// };

class Solution
{
public:
    void findFactorials(long long n, long long product, long long i, vector<long long> &result)
    {
        if (product > n)
            return;
        result.push_back(product);
        findFactorials(n, product * i, i + 1, result);
    }

    vector<long long> factorialNumbers(long long n)
    {
        vector<long long> result;
        findFactorials(n, 1, 2, result);
        return result;
    }
};
