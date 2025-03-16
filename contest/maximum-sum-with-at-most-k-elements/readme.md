### **Max Sum From Grid** [C++ Code](./code.cpp)  

- **File**: _2_maxSum.cpp_  
- **Description**:  
  - Given a 2D grid, a list of row limits, and an integer `k`, find the maximum sum using the `k` largest elements selected based on row-wise limits.  

- **Understanding the Problem**:  
  - Each row has a limit on how many numbers you can choose.  
  - Extract the largest numbers from each row according to the limit.  
  - Use a max heap to select the overall largest `k` numbers.  
  - **Example**:  
    - Grid: `[[5, 3, 8], [7, 6, 2]]`  
    - Limits: `[2, 2]` (can pick top 2 from each row)  
    - Extracted: `[8, 5, 7, 6]`  
    - Pick top `k=3`: Sum = `8 + 7 + 6 = 21`  

- **How to Solve the Problem**:  
  - Use sorting to extract the top elements from each row.  
  - Use a max heap (priority queue) to efficiently pick the `k` largest elements.  

- **Approach**:  
  1. Iterate over each row and sort it in descending order.  
  2. Pick the largest `limits[i]` elements from each row and insert them into a max heap.  
  3. Extract the top `k` elements from the heap and sum them.  

- **Key Concepts Explained**:  
  - **Sorting**: To quickly extract the top elements in each row.  
  - **Heap/Priority Queue**: Efficiently keeps track of the largest `k` elements.  

- **Time Complexity**: `O(n log m + k log n)`, where `m` is row size and `n` is the number of rows.  
- **Space Complexity**: `O(n)`, storing elements in the heap.  
---

### **Detailed Dry Run for "Max Sum From Grid"**  

#### **Input:**  
```cpp
grid = [[5, 3, 8],  
        [7, 6, 2]]  
limits = [2, 2]  
k = 3  
```

#### **Step 1: Sorting Each Row in Descending Order**  
We sort each row in decreasing order:  
```cpp
grid = [[8, 5, 3],  
        [7, 6, 2]]
```

---

### **Step 2: Extract the Top `limits[i]` Elements from Each Row**  

**First row (`limits[0] = 2`):**  
- Take the **top 2 elements**: `[8, 5]`  

**Second row (`limits[1] = 2`):**  
- Take the **top 2 elements**: `[7, 6]`  

**All extracted elements:**  
```cpp
[8, 5, 7, 6]
```
- Push these elements into a **max heap**.

---

### **Step 3: Insert into Max Heap**  

#### **Heap State:**  
| Step | Heap Content |
|------|-------------|
| Insert `8` | `[8]` |
| Insert `5` | `[8, 5]` |
| Insert `7` | `[8, 5, 7]` |
| Insert `6` | `[8, 6, 7, 5]` |

(Heap maintains the highest number at the top)

---

### **Step 4: Extract the `k = 3` Largest Elements**  

#### **Iteration 1:**  
- Pop max element: `8`
- Heap after pop: `[7, 6, 5]`
- Running sum: `8`

#### **Iteration 2:**  
- Pop max element: `7`
- Heap after pop: `[6, 5]`
- Running sum: `8 + 7 = 15`

#### **Iteration 3:**  
- Pop max element: `6`
- Heap after pop: `[5]`
- Running sum: `15 + 6 = 21`

---

### **Final Output:**  
```cpp
21
```

---

### **Summary of Dry Runs:**  
1. **Has Same Digits**:
   - Reduce string step by step by summing adjacent digits modulo `10`.
   - Check if the last two digits are equal.
   - Output: `false`  

2. **Max Sum From Grid**:
   - Sort rows and extract the top elements based on limits.
   - Use a max heap to select the `k` largest elements efficiently.
   - Output: `21`

--- 
