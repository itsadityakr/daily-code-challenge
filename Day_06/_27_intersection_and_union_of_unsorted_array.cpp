// https://leetcode.com/problems/intersection-of-two-arrays/
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    vector<int> result;
    for (int num : set1)
    {
        if (set2.find(num) != set2.end())
        {
            result.push_back(num);
        }
    }

    return result;
}

vector<int> unionVec(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> unionSet;
    for (int num : nums1)
    {
        unionSet.insert(num);
    }
    for (int num : nums2)
    {
        unionSet.insert(num);
    }

    vector<int> result(unionSet.begin(), unionSet.end());
    return result;
}

int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> nums1(n1);
    for (int i = 0; i < n1; ++i)
    {
        cin >> nums1[i];
    }

    cin >> n2;
    vector<int> nums2(n2);
    for (int i = 0; i < n2; ++i)
    {
        cin >> nums2[i];
    }

    vector<int> intersectionResult = intersection(nums1, nums2);
    for (int num : intersectionResult)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> unionResult = unionVec(nums1, nums2);
    for (int num : unionResult)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}