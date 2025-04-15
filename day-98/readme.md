## Day 98 - Problems  

---

### 348. **Summary Ranges**  [Py Code](./_348_LC_228_Summary_Ranges.py)  

- **File**: _348_LC_228_Summary_Ranges_  
- **Description**:  
  - Given a sorted array of unique integers, identify consecutive number ranges.
  - Each range should be expressed as `"a"` if it contains only one number or `"a->b"` if it contains a sequence.
  - The goal is to group all numbers into the smallest number of such ranges.

- **Understanding the Problem**:  
  - Imagine you’re reading a list of numbers like [0, 1, 2, 4, 5, 7]. You want to summarize the parts where numbers are in a row (consecutive).
  - From 0 to 2, numbers go in order: 0, 1, 2 → group as `"0->2"`.
  - Then there's a gap, so 4, 5 → `"4->5"`, and then a single number 7 → `"7"`.
  - Your output will be: `["0->2", "4->5", "7"]`.

- **Pseudocode**:
```
If array is empty:
    return empty list

Start with the first number as the beginning of a range

For each number in the array (from the second one):
    If the number is not consecutive to the previous one:
        Close the current range and store it
        Start a new range from this number

After loop ends:
    Add the final range to result

Return result
```

- **Approach**:  
  1. Start by checking if the input list is empty.
  2. Keep a `start` variable to track where the current range begins.
  3. Loop through the list from the second element.
  4. If current number is not consecutive (not previous + 1), finalize the current range.
  5. If the range is one number, just add it as string. If it has multiple numbers, format as `"start->end"`.
  6. After the loop, don’t forget to process the last range.

- **Key Concepts Explained**:  
  - **Consecutive Numbers**: Numbers that follow one after another without gaps.
  - **Range**: A group of consecutive numbers written in shorthand (e.g., "2->4").

- **Time Complexity**:  
  - O(n), where n is the length of the array — one pass through the list.

- **Space Complexity**:  
  - O(1) extra space (excluding the output list).

**Dry Run**:
- *Input*: [0,1,2,4,5,7]  
- *Output*: ["0->2", "4->5", "7"]  
- *Explanation*: 
  - 0 to 2 are consecutive → "0->2"
  - 4 and 5 are consecutive → "4->5"
  - 7 is alone → "7"

- **Steps**:
  - start = 0  
  - 1 → continue  
  - 2 → continue  
  - 4 → not consecutive → add "0->2", start = 4  
  - 5 → continue  
  - 7 → not consecutive → add "4->5", start = 7  
  - End of list → add "7"  

---

### 349. **Product of Array Except Self**  [Py Code](./_349_LC_238_Product_of_Array_Except_Self.py)  

- **File**: _349_LC_238_Product_of_Array_Except_Self_  
- **Description**:  
  - Given an array of integers, return an output array where each element is the product of all the elements in the input array except the current one.
  - Must not use division and solve in linear time.
  - Must aim for constant extra space (excluding output array).

- **Understanding the Problem**:  
  - Imagine multiplying everything *except* the number at the current index.
  - Example: [1, 2, 3, 4] →  
    - At index 0: 2×3×4 = 24  
    - At index 1: 1×3×4 = 12  
    - Output: [24, 12, 8, 6]

- **Pseudocode**:
```
Create an output array of the same size

Set prefix = 1
Loop from left to right:
    Store prefix in output[i]
    Multiply prefix by nums[i]

Set suffix = 1
Loop from right to left:
    Multiply output[i] by suffix
    Multiply suffix by nums[i]

Return output array
```

- **Approach**:  
  1. First pass: For each index, store the product of all numbers to its **left**.
  2. Second pass (backward): Multiply each index by the product of all numbers to its **right**.
  3. You’re building the answer without using division and reusing space cleverly.

- **Key Concepts Explained**:  
  - **Prefix Product**: Product of all elements before the current index.
  - **Suffix Product**: Product of all elements after the current index.
  - This two-pass approach allows us to keep time complexity O(n) and space O(1) (excluding output).

- **Time Complexity**:  
  - O(n), two passes over the array.

- **Space Complexity**:  
  - O(1) extra space (if we don’t count the output array).

**Dry Run**:
- *Input*: [1, 2, 3, 4]  
- *Output*: [24, 12, 8, 6]  
- *Explanation*:  
  - First pass: [1, 1, 2, 6] → products to the left  
  - Second pass: multiply by right products →  
    - Right to left: 1×24 = 24, 1×12 = 12, 2×4 = 8, 6×1 = 6

- **Steps**:
  - Left products:  
    - output[0] = 1  
    - output[1] = 1  
    - output[2] = 2  
    - output[3] = 6  
  - Right products:  
    - suffix = 1 → output[3] *= 1 = 6  
    - suffix *= 4 = 4  
    - output[2] *= 4 = 8  
    - suffix *= 3 = 12  
    - output[1] *= 12 = 12  
    - suffix *= 2 = 24  
    - output[0] *= 24 = 24  

---  
