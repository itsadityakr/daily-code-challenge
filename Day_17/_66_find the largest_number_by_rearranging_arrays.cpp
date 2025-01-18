// https://leetcode.com/problems/largest-number/

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string largestNumber(vector<int> &nums)
{
    vector<string> numStrings;
    for (int num : nums)
        numStrings.push_back(to_string(num));
    sort(numStrings.begin(), numStrings.end(),
         [](const string &a, const string &b)
         { return a + b > b + a; });
    if (numStrings[0] == "0")
        return "0";
    string result;
    for (const string &str : numStrings)
        result += str;
    return result;
}

int main()
{
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << largestNumber(nums) << endl;
}
