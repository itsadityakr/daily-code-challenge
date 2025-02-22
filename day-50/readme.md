## Day 50 - Problems  

---

### 195. **Remove Outermost Parentheses** [C++ Code](./_195_Remove_Outermost_Parentheses.cpp)  

- **File**: _195_Remove_Outermost_Parentheses.cpp_  
- **Description**:  
  Given a valid parentheses string, we need to remove the outermost parentheses from every primitive valid parentheses substring. A primitive valid parentheses substring is one that is non-empty and cannot be split further into smaller valid substrings.  

- **Understanding the Problem**:  
  - We have a string `s` that consists only of `(` and `)`.  
  - The string is already valid, meaning it is correctly nested.  
  - Our task is to remove the outermost layer of each valid parentheses group.  
  - Example:  
    ```
    Input: "(()())(())"
    Output: "()()()"
    ```
    Here, the two groups are `"(()())"` and `"(())"`. If we remove the outermost parentheses, we get `"()()" + "()" = "()()()"`.  

- **How to Approach the Problem**:  
  - We need to track the balance of parentheses while iterating through the string.  
  - Maintain a `count` variable to track open parentheses.  
  - Use a result string to store valid inner parentheses while ignoring outermost ones.  
  - Iterate through the string, updating `count` appropriately.  

- **Approach**:  
  1. Initialize an empty result string and a `count` variable set to `0`.  
  2. Traverse the input string character by character:  
     - If we encounter `(`, check if `count > 0`, meaning it's not an outermost parenthesis, and add it to `result`.  
     - Increase `count` when adding an opening `(`.  
     - If we encounter `)`, decrease `count` first. If `count > 0`, add `)` to `result`.  
  3. Return the `result` string.  

- **Key Concepts Explained**:  
  - **Balancing Parentheses**: Using a counter to track the number of open brackets helps in recognizing outermost parentheses.  
  - **Primitive Valid Parentheses**: A group that is balanced and cannot be split further.  

- **Time Complexity**: \(O(n)\), where \(n\) is the length of the string (we iterate once).  
- **Space Complexity**: \(O(n)\), storing the modified string.  

---

### 196. **Reverse Words in a String** [C++ Code](./_196_Reverse_Words_in_a_String.cpp)  

- **File**: _196_Reverse_Words_in_a_String.cpp_  
- **Description**:  
  Given a string `s`, we need to reverse the order of words while removing extra spaces.  

- **Understanding the Problem**:  
  - Words in the string are separated by spaces.  
  - We need to reverse the order while maintaining single spaces between words.  
  - Example:  
    ```
    Input: "  hello   world  "
    Output: "world hello"
    ```  
  - Here, extra spaces are removed, and words are reversed.  

- **How to Approach the Problem**:  
  - First, split the words from the string while ignoring extra spaces.  
  - Store the words in an array.  
  - Reverse the array and join the words with a single space.  

- **Approach**:  
  1. Use a stringstream to extract words from the input string.  
  2. Store the extracted words in a vector.  
  3. Reverse the vector.  
  4. Use a helper function to join words with a single space.  
  5. Return the modified string.  

- **Key Concepts Explained**:  
  - **Stringstream**: A useful tool for splitting words from a string while ignoring spaces.  
  - **Vector Reversal**: Helps in reversing word order efficiently.  
  - **Join Function**: A helper function that reconstructs the final string.  

- **Time Complexity**: \(O(n)\), as we process the string once.  
- **Space Complexity**: \(O(n)\), as we store words separately.  

---

### 197. **Largest Odd Number in String** [C++ Code](./_197_Largest_Odd_Number_in_String.cpp)  

- **File**: _197_Largest_Odd_Number_in_String.cpp_  
- **Description**:  
  Given a string representing a large number, we need to find the largest odd number that can be formed as a prefix.  

- **Understanding the Problem**:  
  - The input is a string of digits.  
  - The largest odd number must be a substring from the beginning up to an odd digit.  
  - Example:  
    ```
    Input: "35427"
    Output: "35427"
    ```
    The last digit (`7`) is odd, so the entire number is the largest odd number.  
    ```
    Input: "4206"
    Output: ""
    ```
    No odd numbers, so the result is an empty string.  

- **How to Approach the Problem**:  
  - Start checking from the last character towards the first.  
  - The moment we find an odd digit, we take the substring from the start up to that point.  
  - If no odd digit is found, return an empty string.  

- **Approach**:  
  1. Iterate from the last character of the string toward the first.  
  2. Check if the current digit is odd (`digit % 2 == 1`).  
  3. If an odd digit is found at position `i`, return the substring `num.substr(0, i+1)`.  
  4. If no odd digit is found, return an empty string.  

- **Key Concepts Explained**:  
  - **Odd Number Identification**: A number is odd if `num % 2 == 1`.  
  - **Substring Extraction**: Using `substr()` to extract a portion of the string.  

- **Time Complexity**: \(O(n)\), where \(n\) is the length of the string.  
- **Space Complexity**: \(O(1)\), as we only store a few variables.  

---
