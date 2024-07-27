#include <iostream>
using namespace std;

int getMaxSumRecursive(int arr[], int n, int i)
{ // Recursively find the largest sum of elements such that no two elements are adj.
    if (i >= n)
        return 0;
    if (i == n)
        return arr[0];

    int include = arr[i] + getMaxSumRecursive(arr, n, i + 2); // 4,7 = 11
    int exclude = getMaxSumRecursive(arr, n, i + 1);          // 3
    return max(include, exclude);
}

int getMaxSum(int arr[], int n)
{ // Iteratively find the largest sum of elements such that no two elements are adjacent.
    if (n == 0)
        return 0; // agar ek element hi na ho toh
    if (n == 1)
        return arr[0];

    int num1 = arr[0]; // suppose we are taking first element -> 4
    int num2 = 0;      // 4

    for (int i = 1; i < n; ++i)
    {
        int num = max(num1, num2); // (4,0)->4,(9,4)->9

        num1 = num2 + arr[i]; // i=1-> 9+0 -> 9, i=2-> 4+8 = 12;
        num2 = num;           // 4, 9
    }

    return max(num1, num2);
}

void printArray(int arr[], int size)
{ // Function to print the elements in array.
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap(int *a, int *b)
{ // Function to swap two elements.
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printPermutations(int arr[], int i, int n)
{ // Write an recursive function to print all permutations of array, starting from index i.
    if (i >= n - 1)
    {
        printArray(arr, n);
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(&arr[i], &arr[j]);
        printPermutations(arr, i + 1, n);
        swap(&arr[i], &arr[j]);
    }
}

int main()
{
    int nums[] = {1, 2, 3};

    int n = sizeof(nums) / sizeof(nums[0]);

    cout << getMaxSum(nums, n) << endl;

    cout << getMaxSumRecursive(nums, n, 0) << endl;

    printPermutations(nums, 1, n);
}