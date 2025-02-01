### **Boyer-Moore Voting Algorithm: In-Depth Notes**

---

#### **1. What is the Boyer-Moore Voting Algorithm?**

The **Boyer-Moore Voting Algorithm** is an efficient algorithm used to find the **majority element** in a sequence of elements. A majority element is defined as an element that appears more than `n/2` times in an array of size `n`. The algorithm can also be extended to find elements that appear more than `n/k` times.

The key idea behind the algorithm is to **cancel out** pairs of distinct elements. The element that remains after this cancellation process is the potential majority element.

---

#### **2. How Does the Algorithm Work?**

The algorithm works in two phases:

1. **First Pass (Voting Phase):**
   - Traverse the array and maintain a candidate for the majority element.
   - If the current element matches the candidate, increment a counter.
   - If it doesn't match, decrement the counter.
   - If the counter reaches zero, update the candidate to the current element and reset the counter.

2. **Second Pass (Verification Phase):**
   - Verify if the candidate is indeed the majority element by counting its occurrences in the array.

---

#### **3. Benefits of the Boyer-Moore Voting Algorithm**

- **Efficiency:** The algorithm runs in **O(n)** time with **O(1)** space complexity, making it highly efficient.
- **Simplicity:** The implementation is straightforward and easy to understand.
- **Scalability:** The algorithm can be extended to find elements that appear more than `n/k` times.

---

#### **4. Applications of the Algorithm**

- Finding the majority element in an array.
- Solving problems where you need to find elements that dominate a sequence.
- Used in voting systems, data analysis, and stream processing.

---

#### **5. Time Complexity**

- **Time Complexity:** O(n) for both the voting and verification phases.
- **Space Complexity:** O(1) as it uses only a few extra variables.

---

### **Code Analysis**

Let’s break down the **Boyer-Moore Voting Algorithm** implementations for the `n/2`, `n/3`, and `n/k` cases and analyze their performance, logic, and efficiency.

---

### **1. Code for Majority Element (n/2)**

#### **Code:**
```cpp
int majorityElement(vector<int>& nums) {
    int candidate = -1, count = 0;

    // Voting phase
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (candidate == num) {
            count++;
        } else {
            count--;
        }
    }

    // Verification phase
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    if (count > nums.size() / 2) return candidate;
    return -1; // No majority element
}
```

#### **Analysis:**

1. **Voting Phase:**
   - The algorithm maintains a `candidate` and a `count`.
   - It iterates through the array once (`O(n)` time).
   - If the `count` drops to zero, the current element becomes the new candidate.
   - This phase ensures that the majority element (if it exists) will survive as the candidate.

2. **Verification Phase:**
   - The algorithm iterates through the array again to count the occurrences of the candidate.
   - This ensures that the candidate is indeed the majority element.

3. **Time Complexity:**
   - Voting Phase: `O(n)`
   - Verification Phase: `O(n)`
   - **Total Time Complexity:** `O(n)`

4. **Space Complexity:**
   - Only two variables (`candidate` and `count`) are used.
   - **Space Complexity:** `O(1)`

5. **Key Insight:**
   - The algorithm works because the majority element will always survive the cancellation process in the voting phase.

---

### **2. Code for Elements Appearing More Than n/3 Times**

#### **Code:**
```cpp
vector<int> majorityElement(vector<int>& nums) {
    int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;

    // Voting phase
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

    // Verification phase
    count1 = 0, count2 = 0;
    for (int num : nums) {
        if (num == candidate1) count1++;
        else if (num == candidate2) count2++;
    }

    vector<int> result;
    if (count1 > nums.size() / 3) result.push_back(candidate1);
    if (count2 > nums.size() / 3) result.push_back(candidate2);

    return result;
}
```

#### **Analysis:**

1. **Voting Phase:**
   - The algorithm maintains two candidates (`candidate1` and `candidate2`) and their respective counts.
   - It iterates through the array once (`O(n)` time).
   - If the count for a candidate drops to zero, the current element becomes the new candidate.
   - This phase ensures that elements appearing more than `n/3` times will survive as candidates.

2. **Verification Phase:**
   - The algorithm iterates through the array again to count the occurrences of the two candidates.
   - This ensures that the candidates are indeed elements appearing more than `n/3` times.

3. **Time Complexity:**
   - Voting Phase: `O(n)`
   - Verification Phase: `O(n)`
   - **Total Time Complexity:** `O(n)`

4. **Space Complexity:**
   - Only four variables (`candidate1`, `candidate2`, `count1`, `count2`) are used.
   - **Space Complexity:** `O(1)`

5. **Key Insight:**
   - There can be at most **two** elements that appear more than `n/3` times in an array.

---

### **3. Code for Elements Appearing More Than n/k Times**

#### **Code:**
```cpp
vector<int> majorityKElement(vector<int>& nums, int k) {
    unordered_map<int, int> candidates;

    // Voting phase
    for (int num : nums) {
        if (candidates.count(num)) {
            candidates[num]++;
        } else if (candidates.size() < k - 1) {
            candidates[num] = 1;
        } else {
            for (auto it = candidates.begin(); it != candidates.end(); ) {
                it->second--;
                if (it->second == 0) {
                    it = candidates.erase(it);
                } else {
                    ++it;
                }
            }
        }
    }

    // Verification phase
    for (auto& pair : candidates) {
        pair.second = 0;
    }
    for (int num : nums) {
        if (candidates.count(num)) {
            candidates[num]++;
        }
    }

    vector<int> result;
    for (auto& pair : candidates) {
        if (pair.second > nums.size() / k) {
            result.push_back(pair.first);
        }
    }

    return result;
}
```

#### **Analysis:**

1. **Voting Phase:**
   - The algorithm maintains up to `k-1` candidates using an `unordered_map`.
   - It iterates through the array once (`O(n)` time).
   - If a new element is encountered and the map size is less than `k-1`, it is added as a candidate.
   - Otherwise, the counts of all existing candidates are decremented, and candidates with zero counts are removed.

2. **Verification Phase:**
   - The algorithm iterates through the array again to count the occurrences of the candidates.
   - This ensures that the candidates are indeed elements appearing more than `n/k` times.

3. **Time Complexity:**
   - Voting Phase: `O(n * k)` (since we may need to decrement counts for up to `k-1` candidates for each element).
   - Verification Phase: `O(n)`
   - **Total Time Complexity:** `O(n * k)`

4. **Space Complexity:**
   - The `unordered_map` stores up to `k-1` candidates.
   - **Space Complexity:** `O(k)`

5. **Key Insight:**
   - There can be at most **k-1** elements that appear more than `n/k` times in an array.

---

### **Comparison of All Cases**

| Case       | Time Complexity | Space Complexity | Key Insight                                                                 |
|------------|------------------|-------------------|-----------------------------------------------------------------------------|
| **n/2**    | O(n)             | O(1)              | Only one majority element can exist.                                        |
| **n/3**    | O(n)             | O(1)              | At most two elements can appear more than `n/3` times.                      |
| **n/k**    | O(n * k)         | O(k)              | At most `k-1` elements can appear more than `n/k` times.                    |

---

### **Conclusion**

- The **Boyer-Moore Voting Algorithm** is highly efficient for finding majority elements and elements appearing more than `n/k` times.
- It works in **linear time** for `n/2` and `n/3` cases and scales to `O(n * k)` for the `n/k` case.
- The algorithm is **space-efficient**, using only constant space for `n/2` and `n/3` cases and `O(k)` space for the `n/k` case.
- It is widely used in problems involving frequency counting and stream processing.