// https://leetcode.com/problems/next-greater-element-i/

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> nextGreater;
        stack<int> s;

        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            int num = nums2[i];

            while (s.empty() == false && s.top() <= num)
            {
                s.pop();
            }

            if (s.empty() == true)
            {
                nextGreater[num] = -1;
            }
            else
            {
                nextGreater[num] = s.top();
            }

            s.push(num);
        }

        vector<int> result;
        for (int i = 0; i < nums1.size(); i++)
        {
            int num = nums1[i];
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};
