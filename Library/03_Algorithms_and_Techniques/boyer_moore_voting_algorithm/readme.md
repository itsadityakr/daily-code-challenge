## Boyer-Moore Voting Algorithm

The **Boyer-Moore Voting Algorithm** is an efficient algorithm used to find the **majority element** in a sequence of elements. A majority element is defined as an element that appears more than `n/2` times in an array of size `n`. The algorithm works in **O(n) time** and **O(1) space**, making it highly efficient.

---

### **1. Key Idea**
- The algorithm works by maintaining a **candidate** for the majority element and a **count** of its occurrences.
- It iterates through the array, updating the candidate and count based on whether the current element matches the candidate.
- At the end, the candidate is verified to ensure it is indeed the majority element.

---

### **2. Algorithm Steps**
1. Initialize two variables:
   - `candidate`: Stores the current candidate for the majority element.
   - `count`: Stores the count of the current candidate.
2. Iterate through the array:
   - If `count == 0`, set the current element as the new `candidate` and set `count = 1`.
   - If the current element is the same as the `candidate`, increment `count`.
   - Otherwise, decrement `count`.
3. After the iteration, verify that the `candidate` is indeed the majority element by counting its occurrences in the array.

---

### **3. Implementation in C++**
Here’s the implementation of the Boyer-Moore Voting Algorithm in C++:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMajorityElement(vector<int>& nums) {
    int candidate = -1, count = 0;

    // Step 1: Find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    // If candidate is the majority element, return it
    if (count > nums.size() / 2) {
        return candidate;
    } else {
        return -1; // No majority element
    }
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int majorityElement = findMajorityElement(nums);

    if (majorityElement != -1) {
        cout << "Majority Element: " << majorityElement << endl;
    } else {
        cout << "No Majority Element" << endl;
    }

    return 0;
}
```

**Output:**
```
Majority Element: 2
```

---

### **4. Explanation of the Algorithm**
- The algorithm works because the majority element will always "outnumber" all other elements combined.
- When the `count` drops to `0`, it means the current candidate is no longer a potential majority element, so a new candidate is chosen.
- At the end, the candidate is verified to ensure it appears more than `n/2` times.

---

### **5. Time and Space Complexity**
- **Time Complexity:** O(n)
  - The algorithm makes two passes through the array: one to find the candidate and one to verify it.
- **Space Complexity:** O(1)
  - Only two variables (`candidate` and `count`) are used, regardless of the input size.

---

### **6. Applications**
- Finding the majority element in an array.
- Solving problems where one element dominates the sequence (e.g., leader election in distributed systems).

---

### **7. Limitations**
- The algorithm assumes that a majority element exists. If no majority element is present, it will still return a candidate, which must be verified.
- It only works for finding elements that appear more than `n/2` times. For elements that appear exactly `n/2` times, it may not work correctly.

---

### **8. Practice Problems**
1. [Majority Element (LeetCode 169)](https://leetcode.com/problems/majority-element/)
2. [Majority Element II (LeetCode 229)](https://leetcode.com/problems/majority-element-ii/)
3. [Check if a Number is Majority Element in a Sorted Array (LeetCode 1150)](https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/)

---

### **9. Extended Version: Finding Elements with Frequency > n/3**
The Boyer-Moore Voting Algorithm can be extended to find all elements that appear more than `n/3` times in an array. This requires maintaining two candidates and their counts.

**Example Implementation:**
```cpp
vector<int> findMajorityElements(vector<int>& nums) {
    int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;

    // Step 1: Find candidates
    for (int num : nums) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify candidates
    count1 = 0, count2 = 0;
    for (int num : nums) {
        if (num == candidate1) count1++;
        if (num == candidate2) count2++;
    }

    vector<int> result;
    if (count1 > nums.size() / 3) result.push_back(candidate1);
    if (count2 > nums.size() / 3) result.push_back(candidate2);

    return result;
}
```

---