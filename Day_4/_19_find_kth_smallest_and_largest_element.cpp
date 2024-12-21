// https://www.naukri.com/code360/problems/kth-smallest-and-largest-element-of-array_1115488?leftPanelTabValue=SUBMISSION

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int partition(vector<int> &arr, int left, int right, int pivotIndex) 
{
    int pivotValue = arr[pivotIndex];
    swap(arr[pivotIndex], arr[right]);
    int current = left;
    for(int i = left; i < right; i++) 
    {
        if(arr[i] < pivotValue) 
        {
            swap(arr[current], arr[i]);
            current++;
        }
    }
    swap(arr[right], arr[current]);
    return current;
}

int quickSelect(vector<int> &arr, int left, int right, int k) 
{
    if(left == right)
    {
        return arr[left];
    }
    
    int pivotIndex = left + rand() % (right-left+1);
    int partitionIndex = partition(arr, left, right, pivotIndex);

    if(partitionIndex >= k)
    {
        return quickSelect(arr, left, partitionIndex-1, k);
    }
    
    if(partitionIndex < k-1)
    {
        return quickSelect(arr, partitionIndex+1, right, k);
    }

    return arr[partitionIndex];
}

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    vector<int> result(2);
    result[0] = quickSelect(arr, 0, n-1, k);
    result[1] = quickSelect(arr, 0, n-1, n-k+1);
    return result;
}

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<int> result = kthSmallLarge(arr, n, k);
    cout << result[0] << " " << result[1] << endl;
    
    return 0;
}