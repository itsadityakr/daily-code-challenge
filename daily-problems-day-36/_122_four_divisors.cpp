// https://leetcode.com/problems/four-divisors/description/

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            int sum = 0, divisorCount = 0;
            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    sum += i;
                    divisorCount++;
                    if (i != num / i) {
                        sum += num / i;
                        divisorCount++;
                    }
                }
                if (divisorCount > 4)
                    break;
            }
            if (divisorCount == 4) {
                totalSum += sum;
            }
        }
        return totalSum;
    }
};