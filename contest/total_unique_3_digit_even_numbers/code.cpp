class Solution
{
public:
    int totalNumbers(vector<int> &digits)
    {
        unordered_set<int> uniqueNumbers; // To store unique 3-digit even numbers

        int n = digits.size();

        // Generate all possible 3-digit numbers
        for (int i = 0; i < n; i++)
        { // Hundreds place
            if (digits[i] == 0)
                continue; // Skip leading zeros

            for (int j = 0; j < n; j++)
            { // Tens place
                if (j == i)
                    continue; // Avoid reusing the same digit

                for (int k = 0; k < n; k++)
                { // Ones place
                    if (k == i || k == j)
                        continue; // Avoid reusing the same digit

                    if (digits[k] % 2 == 0)
                    { // Last digit must be even
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        uniqueNumbers.insert(num);
                    }
                }
            }
        }

        return uniqueNumbers.size();
    }
};
