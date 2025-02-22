// https://leetcode.com/problems/maximum-product-subarray/description/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = INT_MIN;
        int prefix = 1;
        int suffix = 1;
        for (int i = 0; i < n; i++) {
            if (prefix == 0)
                prefix = 1;
            if (suffix == 0)
                suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n - i - 1];
            maxProduct = max(maxProduct, max(prefix, suffix));
        }
        return maxProduct;
    }
};