// _336_Find_the_union_of_two_sorted_arrays.cpp

// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

// Union of 2 Sorted with Duplicates

// Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

// Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

// Examples:

// Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
// Output: 1 2 3 4 5 6 7
// Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.

// Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
// Output: 1 2 3 4 5
// Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.

// Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
// Output: 1 2
// Explanation: Distinct elements including both the arrays are: 1 2.

// Constraints:
// 1  <=  a.size(), b.size()  <=  10^5
// -10^9  <=  a[i] , b[i]  <=  10^9

class Solution
{
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        vector<int> res;
        int pa = 0, pb = 0;
        int aN = a.size(), bN = b.size();

        while (pa < aN && pb < bN)
        {
            if (!res.empty() && res.back() == a[pa])
            {
                pa++;
                continue;
            }
            if (!res.empty() && res.back() == b[pb])
            {
                pb++;
                continue;
            }

            if (a[pa] < b[pb])
            {
                res.push_back(a[pa++]);
            }
            else if (a[pa] > b[pb])
            {
                res.push_back(b[pb++]);
            }
            else
            {
                res.push_back(a[pa]);
                pa++;
                pb++;
            }
        }

        while (pa < aN)
        {
            if (res.empty() || res.back() != a[pa])
            {
                res.push_back(a[pa]);
            }
            pa++;
        }

        while (pb < bN)
        {
            if (res.empty() || res.back() != b[pb])
            {
                res.push_back(b[pb]);
            }
            pb++;
        }

        return res;
    }
};
