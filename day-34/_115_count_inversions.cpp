// https://leetcode.com/problems/count-the-number-of-inversions/description/

class Solution
{
public:
    int numberOfPermutations(int n, vector<vector<int>> &requirements)
    {
        vector<int> r(n + 1, -1);
        for (auto &re : requirements)
            r[re[0] + 1] = re[1];
        int m = r[n], mod = 1e9 + 7;
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (r[i] != -1 && j != r[i])
                    continue;
                for (int k = 0; k <= min(j, i - 1); k++)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % mod;
            }
        }
        return dp[n][r[n]];
    }
};