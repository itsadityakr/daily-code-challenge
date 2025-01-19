## Day 32 - Problems

---

### 111. **XOR Queries of a Subarray** [CPP Code](./_111_xor_queries_of_a_subarray.cpp)
   - **File**: _111_xor_queries_of_a_subarray.cpp
   - **Description**: Answer queries about the XOR of elements in subarrays.
   - **Approach**:
     1. **Understand XOR properties**:
        - XOR (exclusive OR) has the property that \(a XOR a = 0\) and \(a XOR 0 = a\).
        - This makes it possible to efficiently calculate XOR for a range using a prefix XOR array.
     2. **Build a prefix XOR array**:
        - Each element in the prefix XOR array stores the XOR of all elements from the start up to that index.
        - Example: For \(arr = [1, 3, 4]\), the prefix XOR array is \([1, 1 XOR 3, 1 XOR 3 XOR 4] = [1, 2, 6]\).
     3. **Process queries**:
        - For a query \([L, R]\):
          - If \(L = 0\), the result is `prefixXOR[R]`.
          - Otherwise, it is `prefixXOR[R] XOR prefixXOR[L-1]` (cancels out elements before \(L\)).
     4. **Return results**:
        - Loop through all queries and compute the result for each using the prefix XOR array.
   - **Time Complexity**: \(O(n + q)\):
        - \(O(n)\) to build the prefix XOR array.
        - \(O(q)\) to process all queries.
   - **Space Complexity**: \(O(n)\) (for the prefix XOR array).

---