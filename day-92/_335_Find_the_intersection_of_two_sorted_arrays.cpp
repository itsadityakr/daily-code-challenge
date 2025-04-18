// _335_Find_the_intersection_of_two_sorted_arrays.py

// https://leetcode.com/problems/intersection-of-two-arrays/description/

// 349. Intersection of Two Arrays

// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.
 

// Constraints:
// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000

class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_set<int> set1(nums1.begin(), nums1.end());
            unordered_set<int> set2(nums2.begin(), nums2.end());
            vector<int> result;
            for (int num : set1) {
                if (set2.find(num) != set2.end()) {
                    result.push_back(num);
                }
            }
    
            return result;
        }
    };