// _293_Maximum_Points_You_Can_Obtain_from_Cards.cpp

// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int totalSum = 0;

        for (int x : cardPoints)
        {
            totalSum += x;
        }

        if (k == n)
            return totalSum;

        int windowSize = n - k;
        int minSubArraySum = 0;

        for (int i = 0; i < windowSize; i++)
        {
            minSubArraySum += cardPoints[i];
        }

        int currentWindowSum = minSubArraySum;

        for (int i = windowSize; i < n; i++)
        {
            currentWindowSum = currentWindowSum - cardPoints[i - windowSize] + cardPoints[i];
            minSubArraySum = min(minSubArraySum, currentWindowSum);
        }

        return totalSum - minSubArraySum;
    }
};