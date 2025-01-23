// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution
{
protected:
    void mergeHelper(vector<int> &idx, int start, int end, vector<int> &res, vector<int> &nums)
    {
        int len = end - start;
        if (len > 1)
        {
            int mid = start + len / 2;
            mergeHelper(idx, start, mid, res, nums);
            mergeHelper(idx, mid, end, res, nums);
            vector<int> temp;
            temp.reserve(len);
            int left = start, right = mid, smallerCount = 0;
            while (left < mid || right < end)
            {
                if (right == end || (left < mid && nums[idx[left]] <= nums[idx[right]]))
                {
                    temp.push_back(idx[left]);
                    res[idx[left]] += smallerCount;
                    ++left;
                }
                else
                {
                    temp.push_back(idx[right]);
                    ++smallerCount;
                    ++right;
                }
            }
            move(temp.begin(), temp.end(), idx.begin() + start);
        }
    }

public:
    vector<int> countSmaller(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n, 0), idx(n, 0);
        iota(idx.begin(), idx.end(), 0);
        mergeHelper(idx, 0, n, res, nums);
        return res;
    }
};
