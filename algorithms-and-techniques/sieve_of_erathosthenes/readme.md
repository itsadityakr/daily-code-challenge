## Prefix Sum

Prefix sum, also known as a cumulative sum or scan, is a technique used to compute the running total of a sequence of numbers. It is widely used in various algorithms and problems, such as range sum queries, dynamic programming, and more. Below are detailed notes on prefix sum in C++:

---

### **1. Basic Concept**
- The prefix sum array is an array where each element at index `i` represents the sum of all elements from the start of the original array up to index `i`.
- Given an array `arr[]`, the prefix sum array `prefix[]` is computed as:
  ```
  prefix[0] = arr[0]
  prefix[1] = arr[0] + arr[1]
  prefix[2] = arr[0] + arr[1] + arr[2]
  ...
  prefix[i] = arr[0] + arr[1] + ... + arr[i]
  ```

---

### **2. Implementation in C++**
Here’s how you can compute the prefix sum array in C++:

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> computePrefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0]; // Base case

    // Compute prefix sum
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> prefix = computePrefixSum(arr);

    // Print prefix sum array
    for (int i = 0; i < prefix.size(); i++) {
        cout << prefix[i] << " ";
    }
    return 0;
}
```

**Output:**
```
1 3 6 10 15
```

---

### **3. Applications of Prefix Sum**
#### **a. Range Sum Queries**
- Prefix sum allows you to answer range sum queries in **O(1)** time.
- Given a range `[L, R]`, the sum can be computed as:
  ```
  sum = prefix[R] - prefix[L - 1]
  ```
  (If `L == 0`, then `sum = prefix[R]`.)

**Example:**
```cpp
int rangeSum(const vector<int>& prefix, int L, int R) {
    if (L == 0) return prefix[R];
    return prefix[R] - prefix[L - 1];
}
```

#### **b. Subarray Sum Problems**
- Prefix sum is useful for solving problems involving subarray sums, such as finding subarrays with a given sum.

#### **c. Dynamic Programming**
- Prefix sum is often used in dynamic programming to optimize computations involving cumulative sums.

---

### **4. In-Place Prefix Sum**
- You can compute the prefix sum in-place (without using extra space) by modifying the original array:
```cpp
void computePrefixSumInPlace(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        arr[i] += arr[i - 1];
    }
}
```

---

### **5. 2D Prefix Sum**
- Prefix sum can be extended to 2D arrays (matrices) for solving problems involving submatrix sums.
- The prefix sum for a 2D array `mat[][]` is computed as:
  ```
  prefix[i][j] = mat[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1]
  ```

**Example:**
```cpp
vector<vector<int>> compute2DPrefixSum(const vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    vector<vector<int>> prefix(rows, vector<int>(cols));

    // Compute prefix sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            prefix[i][j] = mat[i][j];
            if (i > 0) prefix[i][j] += prefix[i - 1][j];
            if (j > 0) prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    return prefix;
}
```

---

### **6. Time and Space Complexity**
- **Time Complexity:** O(N) for 1D arrays, O(N*M) for 2D arrays.
- **Space Complexity:** O(N) for 1D arrays, O(N*M) for 2D arrays (if using extra space).

---

### **7. Common Mistakes**
1. Forgetting to handle the base case (`prefix[0] = arr[0]`).
2. Incorrectly computing range sums (e.g., not handling the case when `L == 0`).
3. Off-by-one errors in loops.

---

### **8. Practice Problems**
1. [Range Sum Query - Immutable (LeetCode 303)](https://leetcode.com/problems/range-sum-query-immutable/)
2. [Maximum Subarray (LeetCode 53)](https://leetcode.com/problems/maximum-subarray/)
3. [Subarray Sum Equals K (LeetCode 560)](https://leetcode.com/problems/subarray-sum-equals-k/)
4. [Range Sum Query 2D - Immutable (LeetCode 304)](https://leetcode.com/problems/range-sum-query-2d-immutable/)

---

### **9. Advanced Topics**
- **Difference Array:** A technique related to prefix sum that is used for range update operations.
- **Prefix Sum with Hashing:** Used in problems like finding subarrays with a given sum.

---

By mastering prefix sums, you can efficiently solve a wide range of problems in competitive programming and real-world applications.