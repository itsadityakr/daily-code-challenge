### 1. **Find Maximum Difference Between Odd and Even Frequency** [C++ Code](./code.cpp)
   - **File**: code.cpp
   - **Description**:  
     This problem involves finding the difference between the maximum frequency of any odd number and the minimum frequency of any even number in a string. The string consists of lowercase letters, and for each character in the string, we need to calculate the frequency of its occurrence. We then need to determine the highest frequency of characters that appear an odd number of times and the lowest frequency of characters that appear an even number of times. Finally, we return the difference between the maximum odd frequency and the minimum even frequency. If there are no odd or no even frequencies, the result will be negative infinity or undefined.

   - **Approach**:  
     To solve this problem, let's break it down into simple steps. Here’s an easy-to-follow explanation of the approach:

     1. **Create a frequency array**:  
        Since the input string consists only of lowercase English letters, we can easily create an array of size 26 to store the frequency of each character in the string. This is because the lowercase letters 'a' to 'z' correspond to the indices 0 to 25.

     2. **Count character frequencies**:  
        Loop through each character of the string. For each character, calculate its corresponding index (i.e., subtract the ASCII value of 'a' from the ASCII value of the current character). Use this index to increment the frequency of that character in the frequency array.

     3. **Find the minimum even frequency**:  
        Initialize a variable to keep track of the minimum even frequency (`min_even`). Set it to the maximum possible integer value (`INT_MAX`) at the beginning. Loop through the frequency array, and for each non-zero frequency:
        - If the frequency is even, compare it with `min_even` and update `min_even` to be the smaller of the two.

     4. **Find the maximum odd frequency**:  
        Similarly, initialize a variable to keep track of the maximum odd frequency (`max_odd`) and set it to the minimum possible integer value (`INT_MIN`). Loop through the frequency array again, and for each non-zero frequency:
        - If the frequency is odd, compare it with `max_odd` and update `max_odd` to be the larger of the two.

     5. **Return the difference**:  
        After you’ve calculated both the `max_odd` and `min_even`, return the difference `max_odd - min_even`. This will give the required result.

     The approach is designed to first compute the frequency of each character and then categorize those frequencies into odd or even. By keeping track of the minimum even and maximum odd frequencies, we can calculate the desired difference at the end.

     **Example**:  
     For the string `"abbccc"`, the frequencies of characters are:
     - a: 1 (odd)
     - b: 2 (even)
     - c: 3 (odd)

     The maximum odd frequency is 3 (for 'c'), and the minimum even frequency is 2 (for 'b'). Thus, the result will be `3 - 2 = 1`.

   - **Time Complexity**:  
     The time complexity is **O(n)**, where n is the length of the string. This is because we loop through the string once to count the frequencies, and then we loop through the frequency array of size 26 (which is constant) to find the maximum odd and minimum even frequencies. So the overall complexity is linear in terms of the length of the string.

   - **Space Complexity**:  
     The space complexity is **O(1)** because the size of the frequency array is fixed at 26, regardless of the input size. Hence, the space used does not depend on the length of the input string and remains constant.

---
