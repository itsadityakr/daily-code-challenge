#include <vector>
#include <iostream>
using namespace std;

int equilibriumIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        for (int i = 0; i < nums.size(); i++) {
            totalSum -= nums[i];
            if (leftSum == totalSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << equilibriumIndex(nums);
}
