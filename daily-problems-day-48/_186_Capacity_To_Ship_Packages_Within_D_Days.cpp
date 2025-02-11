// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    bool canShip(vector<int>& weights, int capacity, int days) {
        int currentWeight = 0, requiredDays = 1;
        for (int w : weights) {
            if (currentWeight + w > capacity) {
                requiredDays++;
                currentWeight = 0;
            }
            currentWeight += w;
        }
        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canShip(weights, mid, days)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};
