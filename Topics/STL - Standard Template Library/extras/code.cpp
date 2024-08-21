#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

// Comparator function to sort pairs
// This function sorts pairs primarily by the second element in ascending order,
// and by the first element in descending order if the second elements are equal.
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true; // p1's second element is less than p2's second element
    if (p1.second > p2.second)
        return false; // p1's second element is greater than p2's second element

    return p1.first > p2.first; // If second elements are equal, sort by first element in descending order
}

void explainExtras()
{
    // Array of integers
    int arr[] = {4, 1, 2, 3, 5, 7, 1, 2, 3, 4, 5, 2, 11, 4, 21, 1}; //size of array i.e. 16
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    cout << "Size of Arr : " << size << endl; // Print the size of the array

    // Sort the entire array in ascending order
    // Syntax -> sort[start,end); -> end - 1
    sort(arr, arr + size);

    // Sort a subrange of the array (indices 2 to 8)
    sort(arr + 2, arr + 9);

    // Sort the entire array in descending order
    sort(arr, arr + size, greater<int>());

    // Print the sorted array
    for (int i : arr)
    {
        cout << i << " "; // Print each element followed by a space
    }
    cout << endl; // Print a newline after the array

    // Array of pairs
    pair<int, int> p[] = {{1, 2}, {4, 1}, {2, 1}};
    int p_size = sizeof(p) / sizeof(p[0]); // Calculate the number of pairs in the array

    // Sort the pairs based on the comparator function
    sort(p, p + p_size, comp);

    // Print the sorted pairs
    for (auto it : p)
    {
        cout << it.first << " " << it.second << " "; // Print each pair
    }
    cout << endl; // Print a newline after the pairs

    // Count the number of set bits in an integer
    int num = 7; // Binary: 000...111
    int cnt = __builtin_popcount(num); // Count the number of 1's (set bits) in num
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    // Count the number of set bits in a long long integer
    long long num2 = 15782390874124; // Convert the number to binary and count the number of 1's
    int cnt2 = __builtin_popcountll(num2); // Count the number of 1's (set bits) in num2
    cout << "Number of set bits in " << num2 << " is: " << cnt2 << endl;

    // Find permutations of a string
    string s = "123"; // String to print all permutations. It should be sorted initially.
    // For "123", it will print -> 123 132 213 231 312 321
    // For "231", it will print -> 231 312 321 (unsorted)
    cout << "Permutations of string : " << s << endl;
    do {
        cout << s << endl; // Print each permutation of the string
    } while (next_permutation(s.begin(), s.end())); // Generate and print the next permutation

    // Return the max element of an array
    int max_ele = *max_element(arr, arr + size); // Find and return the maximum element within the range of the array
    cout << "Max element in above array is : " << max_ele << endl;
}

int main()
{
    explainExtras(); // Call the function to demonstrate its functionality
    return 0;
}
