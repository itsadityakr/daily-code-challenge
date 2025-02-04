// https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array

class Solution
{
public:
    int kthElement(vector<int> &a, vector<int> &b, int k)
    {
        if (a.size() > b.size())
            return kthElement(b, a, k);

        int n1 = a.size(), n2 = b.size();
        int low = max(0, k - n2), high = min(k, n1);

        while (low <= high)
        {
            int cut1 = (low + high) >> 1;
            int cut2 = k - cut1;

            int l1 = cut1 == 0 ? INT_MIN : a[cut1 - 1];
            int l2 = cut2 == 0 ? INT_MIN : b[cut2 - 1];
            int r1 = cut1 == n1 ? INT_MAX : a[cut1];
            int r2 = cut2 == n2 ? INT_MAX : b[cut2];

            if (l1 <= r2 && l2 <= r1)
            {
                return max(l1, l2);
            }
            else if (l1 > r2)
            {
                high = cut1 - 1;
            }
            else
            {
                low = cut1 + 1;
            }
        }

        return -1;
    }
};