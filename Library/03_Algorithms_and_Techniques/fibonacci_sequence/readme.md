## Fibonacci Sequence

The **Fibonacci sequence** is a series of numbers where each number is the sum of the two preceding ones, starting from 0 and 1. It is a fundamental concept in mathematics and computer science, with applications in algorithms, dynamic programming, and more. Below is a comprehensive guide to the Fibonacci sequence, ranging from basic to advanced topics.

---

### **1. Basic Definition**
The Fibonacci sequence is defined as:
```
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2) for n >= 2
```
The sequence starts as:  
`0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...`

---

### **2. Recursive Implementation**
The simplest way to compute Fibonacci numbers is using recursion:
```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
```
**Time Complexity:** O(2^n) (exponential)  
**Space Complexity:** O(n) (due to the call stack)

---

### **3. Dynamic Programming (Memoization)**
To optimize the recursive solution, we can use **memoization** to store intermediate results and avoid redundant calculations.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int fibonacciMemo(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n]; // Return cached result
    memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo); // Store result
    return memo[n];
}

int fibonacci(int n) {
    vector<int> memo(n + 1, -1); // Initialize memoization table
    return fibonacciMemo(n, memo);
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
```
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### **4. Dynamic Programming (Tabulation)**
We can also use **tabulation** (bottom-up approach) to compute Fibonacci numbers iteratively.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
```
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### **5. Space-Optimized Iterative Solution**
We can reduce the space complexity to O(1) by using only two variables to store the last two Fibonacci numbers.

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    int prev2 = 0, prev1 = 1;
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
```
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### **6. Matrix Exponentiation (Advanced)**
Fibonacci numbers can be computed in **O(log n)** time using matrix exponentiation. The Fibonacci sequence can be represented as:
```
| F(n)   |   =   | 1  1 |^(n-1)   | F(1) |
| F(n-1) |       | 1  0 |         | F(0) |
```

**Implementation:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<vector<int>>& a, vector<vector<int>>& b) {
    int x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    int y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    int z = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    int w = a[1][0] * b[0][1] + a[1][1] * b[1][1];

    a[0][0] = x;
    a[0][1] = y;
    a[1][0] = z;
    a[1][1] = w;
}

void power(vector<vector<int>>& a, int n) {
    if (n <= 1) return;
    vector<vector<int>> temp = {{1, 1}, {1, 0}};
    power(a, n / 2);
    multiply(a, a);
    if (n % 2 != 0) {
        multiply(a, temp);
    }
}

int fibonacci(int n) {
    if (n <= 1) return n;
    vector<vector<int>> a = {{1, 1}, {1, 0}};
    power(a, n - 1);
    return a[0][0];
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
```
**Time Complexity:** O(log n)  
**Space Complexity:** O(log n) (due to recursion stack)

---

### **7. Closed-Form Formula (Binet's Formula)**
Fibonacci numbers can also be computed using the closed-form formula:
```
F(n) = (φ^n - ψ^n) / √5
```
where:
- φ = (1 + √5) / 2 (Golden Ratio)
- ψ = (1 - √5) / 2

**Implementation:**
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
```
**Time Complexity:** O(1) (assuming `pow` is O(1))  
**Space Complexity:** O(1)

---

### **8. Applications of Fibonacci Sequence**
1. **Dynamic Programming:** Fibonacci is a classic example of overlapping subproblems and optimal substructure.
2. **Number Theory:** Fibonacci numbers have many interesting properties in number theory.
3. **Algorithms:** Used in algorithms like the Fibonacci search and Fibonacci heap.
4. **Nature and Art:** Fibonacci numbers appear in natural phenomena like the arrangement of leaves and flowers.

---

### **9. Practice Problems**
1. [Fibonacci Number (LeetCode 509)](https://leetcode.com/problems/fibonacci-number/)
2. [Climbing Stairs (LeetCode 70)](https://leetcode.com/problems/climbing-stairs/)
3. [N-th Tribonacci Number (LeetCode 1137)](https://leetcode.com/problems/n-th-tribonacci-number/)
4. [Split Array into Fibonacci Sequence (LeetCode 842)](https://leetcode.com/problems/split-array-into-fibonacci-sequence/)

---

### **10. Advanced Topics**
1. **Fibonacci in Logarithmic Time:** Using matrix exponentiation or fast doubling.
2. **Fibonacci Modulo:** Computing Fibonacci numbers modulo a number (useful in competitive programming).
3. **Fibonacci and Golden Ratio:** Exploring the relationship between Fibonacci numbers and the golden ratio.

---

By mastering the Fibonacci sequence, you can solve a wide range of problems in computer science and mathematics.