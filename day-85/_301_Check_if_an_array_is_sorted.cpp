// _301_Check_if_an_array_is_sorted.cpp

bool isSorted(vector<int> &nums)
{
    int i = 0, j = 1;
    while (j < nums.size())
    {
        if (nums[i] > nums[j])
        {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    cout << isSorted(arr1) << endl; // 1 i.e. True

    vector<int> arr2 = {1, 2, 1, 4, 5, 6};
    cout << isSorted(arr2) << endl; // 0 i.e. False
}