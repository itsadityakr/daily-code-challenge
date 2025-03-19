// _303_Left_rotate_the_array_by_one_place.cpp

// ----- LEFT ROTATE SOLUTION -----
class Solution
{
public:
    void rotate(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size();
        int idx = 1;
        reverse(arr.begin() + idx, arr.begin() + end);
        reverse(arr.begin() + start, arr.begin() + end);
    }
};

// Input: 1 2 3 4 5
// Your Output: 2 3 4 5 1

// ----- RIGHT ROTATE SOLUTION -----

// https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// class Solution
// {
// public:
//     void rotate(vector<int> &arr)
//     {
//         int start = 0;
//         int end = arr.size();
//         int idx = 1;
//         reverse(arr.begin() + start, arr.begin() + end);
//         reverse(arr.begin() + idx, arr.begin() + end);
//     }
// };