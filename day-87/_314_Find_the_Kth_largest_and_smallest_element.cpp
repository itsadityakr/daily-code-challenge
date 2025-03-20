// _314_Find_the_Kth_largest_and_smallest_element.cpp

// https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        if (nums.empty())
            return -1; // Base case: If the list is empty, return -1

        // Step 1: Choose a random pivot from the list
        int pivot = nums[rand() % nums.size()];

        // Step 2: Partition the list into three parts
        vector<int> larger_than_pivot, equal_to_pivot, smaller_than_pivot;

        for (int num : nums)
        {
            if (num > pivot)
                larger_than_pivot.push_back(num);
            else if (num == pivot)
                equal_to_pivot.push_back(num);
            else
                smaller_than_pivot.push_back(num);
        }

        // Step 3: Get the counts
        int count_larger = larger_than_pivot.size();
        int count_equal = equal_to_pivot.size();

        // Step 4: Recursive selection logic
        if (k <= count_larger)
        {
            return findKthLargest(larger_than_pivot, k);
        }
        else if (k > count_larger + count_equal)
        {
            return findKthLargest(smaller_than_pivot, k - count_larger - count_equal);
        }
        else
        {
            return pivot;
        }
    }
};

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5