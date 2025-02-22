## Day 15 - Problems

---

### 60. **Can We Reach the End of the Array?** [🧲](./_60_can_we_reach_end_of_array.cpp)
   - **File**: _60_can_we_reach_end_of_array.cpp
   - **Description**: 
     - Given an array of non-negative integers `nums`, where each element represents your maximum jump length from that position, the goal is to determine if it's possible to reach the last index of the array starting from index 0.
   - **Approach**: 
     - **Greedy approach**: We iterate through the array and track the maximum reachable index (`maxReach`) from the current position.
     - **Steps**:
       1. Initialize `maxReach` to 0, which represents the farthest index we can reach starting from the first index.
       2. Loop through the array:
          - If the current index `i` exceeds `maxReach`, return `false` (we cannot proceed beyond this index).
          - Otherwise, update `maxReach` to the maximum of the current `maxReach` and `i + nums[i]` (i.e., the farthest point we can reach from index `i`).
          - If at any point `maxReach` exceeds or equals the last index (`n-1`), return `true` because we can reach the end of the array.
       3. If the loop finishes without reaching the end, return `false`.
   - **Time Complexity**: O(n), where `n` is the length of the array, as we only traverse the array once.
   - **Space Complexity**: O(1), as we use only a few variables to store intermediate values.

---

### 61. **Minimum Jumps Required to Reach the End of the Array** [🧲](./_61_minimum_jumps_required_to_reach_end_of_array.cpp)
   - **File**: _61_minimum_jumps_required_to_reach_end_of_array.cpp
   - **Description**: 
     - Given an array `nums`, where each element represents the maximum jump length from that position, return the minimum number of jumps required to reach the last index.
   - **Approach**: 
     - **Greedy approach**: The key idea is to track the farthest point that can be reached with a single jump and the farthest point that can be reached by multiple jumps.
     - **Steps**:
       1. Initialize `jumps` to 0, which tracks the number of jumps needed.
       2. Initialize `currentEnd` to 0, which marks the end of the current jump's range.
       3. Initialize `farthest` to 0, which marks the farthest index we can reach with the next jump.
       4. Loop through the array:
          - For each index `i`, update `farthest` to the maximum of `farthest` and `i + nums[i]` (the farthest position reachable from index `i`).
          - If `i` equals `currentEnd` (i.e., we’ve used up all reachable positions in the current jump's range):
            - Increment `jumps`.
            - Update `currentEnd` to `farthest`, which is the farthest position reachable with the next jump.
            - If `currentEnd` reaches or exceeds the last index (`n - 1`), return `jumps` as the result.
       5. If the loop finishes and `currentEnd` does not reach the last index, return `-1` (indicating it's impossible to reach the end).
   - **Time Complexity**: O(n), where `n` is the number of elements in the array, as we iterate through the array once.
   - **Space Complexity**: O(1), since we only use a constant amount of extra space.

---

### 62. **Subarray Sum Equals K** [🧲](./_62_subarray_sum_equals_k.cpp)
   - **File**: _62_subarray_sum_equals_k.cpp
   - **Description**: 
     - Given an array of integers `nums` and an integer `k`, the task is to return the number of subarrays whose sum equals `k`.
   - **Approach**: 
     - **Prefix Sum with Hash Map**: This approach utilizes a hash map (unordered_map) to store the frequency of prefix sums encountered while iterating through the array. It allows for efficient look-up to check if a subarray sum equals `k`.
     - **Steps**:
       1. Initialize an unordered map `prefixSumCount` to store the frequency of prefix sums, starting with `prefixSumCount[0] = 1` to handle subarrays starting from the beginning.
       2. Initialize `currentSum` to 0, which keeps track of the running sum as we iterate through the array.
       3. Initialize `count` to 0, which will store the number of subarrays with a sum equal to `k`.
       4. Loop through the array:
          - Add the current element `num` to `currentSum`.
          - Check if `currentSum - k` exists in the map (`prefixSumCount`). If it does, it means there exists a subarray whose sum equals `k`, so increment `count` by the frequency of `currentSum - k`.
          - Update the map to include the current prefix sum `currentSum`, incrementing its frequency.
       5. After the loop, return the value of `count`, which represents the total number of subarrays whose sum equals `k`.
   - **Time Complexity**: O(n), where `n` is the length of the array. We traverse the array once and perform constant time operations for each element (map lookups and insertions).
   - **Space Complexity**: O(n), where `n` is the number of unique prefix sums that can be stored in the hash map. In the worst case, we store a prefix sum for each index in the array.

---