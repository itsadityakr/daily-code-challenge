// https://leetcode.com/problems/find-common-elements-between-two-arrays/

#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> setNums1(nums1.begin(), nums1.end()), setNums2(nums2.begin(), nums2.end());
    int counts1 = 0, counts2 = 0;
    for (int num : nums1)
        if (setNums2.count(num))
            counts1++;
    for (int num : nums2)
        if (setNums1.count(num))
            counts2++;
    return {counts1, counts2};
}

int main()
{
    vector<int> nums1 = {4, 3, 2, 3, 1}, nums2 = {2, 2, 5, 2, 3, 6};
    cout << findIntersectionValues(nums1, nums2)[0] << " " << findIntersectionValues(nums1, nums2)[1] << endl;
}
