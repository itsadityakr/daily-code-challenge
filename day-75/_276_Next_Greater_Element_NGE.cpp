// https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    vector<int> nextLargerElement(vector<int> &arr)
    {
        stack<int> st;
        vector<int> res(arr.size(), -1);

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            while (st.size() && st.top() <= arr[i])
                st.pop();
            if (st.size())
                res[i] = st.top();
            st.push(arr[i]);
        }
        return res;
    }
};