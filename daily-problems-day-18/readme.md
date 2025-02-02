## Day 18 - Problems

---

### **Rabin-Karp Algorithm for String Matching**
   - **Description**: The Rabin-Karp algorithm is a string-searching algorithm that checks for a pattern in a given text using hashing. It uses a rolling hash function to efficiently compare the pattern against the substrings in the text. The algorithm allows fast searching, especially when multiple patterns need to be searched. This code implements the Rabin-Karp algorithm for finding all occurrences of a given pattern in a text.

   - **Approach**:
      The approach used in the Rabin-Karp algorithm involves the following key steps:

1. **Understanding the Problem**:
   - We are given a **text** string and a **pattern** string, and we need to find all the occurrences of the pattern in the text.
   - The brute-force way would be to check every substring of the text with the pattern, but this can be slow for long texts. Instead, the **Rabin-Karp algorithm** uses a **hashing technique** to make this process more efficient.

2. **The Hashing Technique**:
   - The idea behind hashing is to transform the pattern and each substring of the text into a number (a hash value), so we can compare them quickly.
   - If the hash values of the pattern and a substring match, it’s likely that the substring is equal to the pattern (though it’s not guaranteed because different strings can have the same hash, known as a **hash collision**).
   - To handle the possibility of hash collisions, after comparing the hash values, we check the actual substring for a match.

3. **Rolling Hash**:
   - To efficiently calculate the hash of each substring, we use a **rolling hash** technique.
   - The rolling hash allows us to compute the hash of a new substring by modifying the hash of the previous substring rather than recalculating the hash from scratch for every new substring.
   - The formula for the rolling hash is:

      ```hash(new_substring) = (d * (old_hash - leftmost_character * h) + new_character) % q```

      Where:
      - `d` is the number of characters in the alphabet (here, `d = 256` for ASCII characters).
      - `h` is a precomputed value, `d^(m-1) % q`, used to account for the leftmost character in the old hash.
      - `q` is a prime number used for modulus operation to reduce hash collisions (typically a small prime number).

4. **Step-by-Step Process**:

- **Step 1: Precompute the value of `h`**:
  - We calculate `h` as `d^(m-1) % q`, where `m` is the length of the pattern. This value helps in adjusting the hash values for each new substring during the sliding process. We do this only once before sliding through the text.

- **Step 2: Compute Initial Hash Values**:
  - We calculate the hash of the **pattern** (`patternHash`) and the hash of the first **substring** of the text of the same length (`textHash`). This is done using the rolling hash formula, where we process each character in the pattern and the text one by one and compute the hash values.

- **Step 3: Compare Hash Values**:
  - We start sliding the window over the text, starting from index 0. For each window of size `m` (same as the pattern length):
    - If the hash of the current window matches the hash of the pattern (`patternHash == textHash`), we check the actual characters of the substring to see if they match the pattern. This step ensures we handle hash collisions correctly.
    - If the hashes and characters match, we have found a match of the pattern in the text, and we record the index where the match starts.

- **Step 4: Slide the Window**:
  - As we slide the window over the text, we need to compute the hash for the new window efficiently.
  - The hash for the new window can be calculated from the hash of the previous window using the rolling hash formula mentioned earlier.
  - We subtract the contribution of the leftmost character (that is no longer in the window) and add the new character (that has entered the window).

- **Step 5: Repeat**:
  - We repeat the process of comparing hashes and updating the hash for the next window until we’ve checked all possible substrings of the text.

5. **Handling Negative Hashes**:
- In the process of computing the rolling hash, the result may become negative. Since hash values should be non-negative, we handle negative hashes by adjusting them back to a positive value using the formula:

	```if hash < 0 then hash = (hash + q) % q```


### **Example Walkthrough**:

Let’s walk through a small example to understand how this works in practice.

#### Input:
- **Text** = "ABABA"
- **Pattern** = "ABA"

#### Step 1: Precompute `h`:
- Suppose `d = 256` (number of characters in the alphabet) and `q = 101` (prime number). 
- `m = 3` (pattern length), so we compute `h = d^(m-1) % q = 256^2 % 101 = 88`.


#### Step 2: Compute Hash Values:
- Calculate the hash of the pattern ("ABA"):
- `patternHash = (256 * 0 + ord('A')) % 101 = 65`
- `patternHash = (256 * 65 + ord('B')) % 101 = 65`
- `patternHash = (256 * 65 + ord('A')) % 101 = 73`
- The hash value for the pattern "ABA" is 73.

- Now, calculate the hash of the first substring of the text ("ABA"):
- Using a similar process, we get `textHash = 73`.

#### Step 3: Compare Hashes:
- The hash values match (`patternHash == textHash`), so we check if the actual substring "ABA" matches the pattern "ABA". It does, so we record the index `0` as a match.

#### Step 4: Slide the Window:
- Now we slide the window over the text to the next substring ("BAB"):
- The new hash is computed using the rolling hash formula.
- `newHash = (256 * (73 - ord('A') * 88) + ord('B')) % 101 = 73`.
- The hash still matches, but the actual substring "BAB" doesn’t match the pattern "ABA".

- Continue sliding and checking until the end of the text.

### **Time Complexity**:
- **Best Case**: O(n), where `n` is the length of the text. This occurs when the hash values match quickly, and we don’t need to check the actual characters often.
- **Worst Case**: O(n * m), where `n` is the length of the text and `m` is the length of the pattern. This occurs when there are many hash collisions, and we have to check each substring character by character.
- **Average Case**: O(n + m), where `n` is the length of the text and `m` is the length of the pattern. This is often the expected time complexity due to the efficiency of the rolling hash.

### **Space Complexity**:
- **O(1)**: Since we only use a few integer variables to store hashes and indices, the space complexity is constant, regardless of the size of the input strings.

---

### 69. **Repeated String Match** [🧲](./_69_repeated_string_match_rabin_karp_or_rolling_hash_algorithm.cpp)
   - **File**: _69_repeated_string_match_rabin_karp_or_rolling_hash_algorithm.cpp
   - **Description**: 
     The problem requires us to determine the minimum number of times a string `a` must be repeated so that string `b` becomes a substring of the repeated version of `a`. If it is not possible to make `b` a substring, return `-1`.
     
   - **Approach**: 
     To solve this problem efficiently, we used the **Rabin-Karp algorithm** combined with a **rolling hash** technique. Here's the step-by-step breakdown of the approach:

     1. **Estimate the Minimum Number of Repeats**:
        - First, we calculate the minimum number of times string `a` must repeat in order to cover string `b`. The formula `(lenB + lenA - 1) / lenA` is used to calculate the minimum repeats required.
        - `lenA` is the length of string `a`, and `lenB` is the length of string `b`. This formula ensures that we have enough characters in `a` to potentially match all of `b`.

     2. **Build the Repeated String**:
        - Once we know the minimum number of repeats, we create the repeated version of string `a` and check if `b` is a substring of this repeated string.
        - We also check for the case where repeating string `a` one extra time might help match string `b`. Hence, we try both the repeated string and the repeated string plus one more copy of `a`.

     3. **Rabin-Karp Algorithm**:
        - This is an efficient algorithm for substring searching. It uses a rolling hash to compute hash values of substrings.
        - First, we compute the hash of the pattern `b` and the initial substring of `a` (or the repeated version of `a`).
        - Then, we slide over the repeated string to check if any substring matches the pattern `b` using these hash values.
        - The Rabin-Karp algorithm helps us to efficiently check for the presence of `b` as a substring in the repeated string of `a`.

     4. **Result**:
        - If the substring is found within the repeated string, we return the number of times `a` was repeated.
        - If not, we return `-1`, indicating that it's impossible to make `b` a substring of any repeated version of `a`.

   - **Time Complexity**: 
     - **O(n + m)**, where `n` is the length of the repeated string `a` (which is approximately the length of `b`) and `m` is the length of string `b`. The Rabin-Karp algorithm checks all possible substrings of the repeated string, and since we are checking two possible repeated versions (one with minimum repeats and one with one extra repeat), the overall time complexity remains linear with respect to the size of the strings involved.
   
   - **Space Complexity**: 
     - **O(n + m)**, where `n` is the length of the repeated string `a` and `m` is the length of string `b`. We store the repeated version of string `a` and the necessary hash values for the substring checks.
     
### Key Points:
- **Rolling Hash**: We use a hash value to represent a substring, which helps in quickly comparing different substrings.
- **Efficiency**: The Rabin-Karp algorithm improves the efficiency of substring search by reducing the need for direct comparisons.
- **Edge Cases**: The solution checks both the minimum repeats and the case where one extra repeat might help match the substring.

---
### **Knuth-Morris-Pratt (KMP) String Matching Algorithm**
   - **Description**: The KMP algorithm is a string searching algorithm used to find a pattern in a text. It improves upon the brute force approach by avoiding unnecessary comparisons when a mismatch occurs after some characters have already been matched. The KMP algorithm works by preprocessing the pattern to create a "Longest Prefix Suffix" (LPS) array, which is then used to skip unnecessary character comparisons in the text. This code implements the KMP algorithm to search for a pattern in a given text.

   - **Approach**:
      The approach used in the KMP algorithm involves the following steps:

      1. **Understanding the Problem**:
         - We are given a **text** string and a **pattern** string. We need to find if the pattern exists in the text.
         - The brute-force approach would check every substring of the text against the pattern, leading to unnecessary rechecks of already matched characters. The KMP algorithm improves this by using the LPS array to avoid redundant checks.

      2. **The LPS Array**:
         - The LPS array (Longest Prefix Suffix) is a key component of the KMP algorithm. It contains information about the longest proper prefix of the pattern that is also a suffix. 
         - The value at each index `i` of the LPS array represents the length of the longest proper prefix of the pattern ending at `i` which is also a suffix.
         - The LPS array helps in determining how much we can skip in case of a mismatch during the search phase.

      3. **Preprocessing the Pattern (LPS Array)**:
         - We first preprocess the pattern to build the LPS array. The idea is to calculate for each position `i` in the pattern, the length of the longest proper prefix that also ends at position `i`.
         - If there is a mismatch between the pattern and text, we use the LPS array to skip certain characters based on the previously matched portion of the pattern.
   
      4. **Search Process**:
         - The actual search process involves comparing characters of the pattern with the characters of the text.
         - If a character matches, we move both pointers (one for the text and one for the pattern).
         - If the entire pattern is found (when the pattern pointer reaches the end), the search is complete.
         - If there is a mismatch, we use the LPS array to decide how much to shift the pattern without needing to recheck already matched characters.

      5. **Algorithm Steps**:
         - **Step 1: Compute the LPS array**: This step involves iterating over the pattern and filling in the LPS array. The value at each index of the LPS array tells us how many characters we can skip if a mismatch occurs.
         - **Step 2: Use the LPS array for efficient searching**: Once the LPS array is built, we use it during the search to skip over parts of the text that have already been matched.

      6. **Code Explanation**:
         - The `computeLPSArray()` function computes the LPS array for the given pattern.
         - The `KMPSearch()` function performs the actual pattern matching using the LPS array to efficiently search through the text.

   - **Time Complexity**:
      - The **time complexity** of this algorithm is **O(n + m)**, where `n` is the length of the text and `m` is the length of the pattern.
      - The preprocessing step takes **O(m)** time to build the LPS array, and the search phase takes **O(n)** time because each character in the text and pattern is compared at most once.

   - **Space Complexity**:
      - The **space complexity** is **O(m)**, where `m` is the length of the pattern. This is because we store the LPS array, which is of size `m`.

### **Explanation**:

1. **computeLPSArray**:
   - This function builds the LPS array for the given pattern. It iterates over the pattern and computes the length of the longest proper prefix that is also a suffix for each position in the pattern.

2. **KMPSearch**:
   - This function uses the LPS array to perform efficient pattern matching. It slides over the text, comparing characters with the pattern, and uses the LPS array to skip unnecessary checks when mismatches occur.

3. **main**:
   - In the main function, we define the text and pattern, call the `KMPSearch` function, and print the result.


### **Example Walkthrough**:

#### Input:
- **Text** = "ABABDABACDABABCABAB"
- **Pattern** = "ABABCABAB"

#### Step-by-Step Process:

1. **Compute the LPS Array**:
   - Pattern: "ABABCABAB"
   - The LPS array will be computed as follows:
     ```
     LPS = [0, 0, 1, 2, 0, 1, 2, 3, 4]
     ```
     This array tells us, for each position in the pattern, how many characters can be skipped if a mismatch occurs.

2. **Search Process**:
   - Initially, both `i` (for the text) and `j` (for the pattern) are at 0.
   - Compare the characters at `text[i]` and `pattern[j]`. If they match, move both pointers forward.
   - If a mismatch occurs, use the LPS array to adjust `j` to the value that represents the next possible match position.
   - If `j` reaches the length of the pattern, the pattern has been found in the text.

#### Output:
```
Pattern found
```
---


### 70. **Longest Happy Prefix [🧲](./__70_longest_happy_prefix_kmp_algorithm.cpp)**

- **File**: _70_longest_happy_prefix_kmp_algorithm.cpp
- **Description**:  
  The task is to find the "longest happy prefix" of a given string. A happy prefix of a string is a prefix that is also a suffix, but not equal to the entire string. For example, for the string "ababab", the longest happy prefix is "abab", as it appears both at the start and the end of the string. To solve this problem, we use the KMP (Knuth-Morris-Pratt) algorithm to compute the longest proper prefix which is also a suffix.

- **Approach**:  
  The solution leverages the KMP algorithm, which is efficient for string pattern matching. This problem is similar to finding the longest proper prefix which is also a suffix of a string, a concept that is central to the KMP algorithm.

  The key idea behind this approach is to use the **LPS (Longest Prefix Suffix)** array, which helps us determine the length of the longest prefix of a string that is also a suffix. 

  **Step-by-Step Breakdown**:

  1. **What is the LPS array?**
     - The LPS array is an array where each element at index `i` represents the length of the longest proper prefix of the substring `s[0..i]` that is also a suffix.
     - A "proper" prefix is one that isn't equal to the entire string itself.
     - For example, for the string `"ababab"`, the LPS array would be: `[0, 0, 1, 2, 3, 4]`. This means:
       - At index 0, no prefix matches the suffix.
       - At index 1, no prefix matches the suffix.
       - At index 2, the longest prefix "a" matches a suffix.
       - At index 3, the longest prefix "ab" matches a suffix.
       - At index 4, the longest prefix "aba" matches a suffix.
       - At index 5, the longest prefix "abab" matches a suffix.

  2. **How to compute the LPS array?**
     - The LPS array is constructed by iterating through the string character by character.
     - We maintain a variable `len` that tracks the length of the current longest prefix that is also a suffix.
     - If the current character matches the character at position `len`, we increase `len` and set `lps[i] = len` for the current index `i`.
     - If there's a mismatch and `len > 0`, we use the LPS values already computed to try smaller prefixes. If `len == 0`, we simply move to the next character without updating `len`.

  3. **Extracting the Longest Happy Prefix:**
     - Once the LPS array is computed, the last value of the array gives us the length of the longest prefix that is also a suffix.
     - This value tells us the length of the longest "happy prefix" in the string.
     - We then return the substring of the original string from the start to this length.

  4. **Special Cases:**
     - If the string has no such prefix that is also a suffix, the LPS array will have a value of 0 at the last index, and the longest happy prefix will be an empty string.

#### Detailed Explanation of Code:

1. **`computeLPSArray` Function**:  
   - The `computeLPSArray` function calculates the LPS array for the given string. 
   - It loops through the string, comparing each character with the current longest prefix. If a match is found, the prefix length is increased, and the corresponding LPS value is updated. If no match is found, the function uses previously computed values in the LPS array to find a smaller matching prefix.

2. **`longestPrefix` Function**:  
   - After computing the LPS array, this function extracts the longest happy prefix. It takes the value from the last index of the LPS array, which represents the length of the longest prefix that matches a suffix, and returns the corresponding substring.

3. **`main` Function**:  
   - The `main` function demonstrates how to use the `longestPrefix` function. It prints the longest happy prefix for the strings `"level"` and `"ababab"`.

#### Example Outputs:

- For the string `"level"`, the longest happy prefix is `"l"`.
- For the string `"ababab"`, the longest happy prefix is `"abab"`.

- **Time Complexity**:  
  - **O(n)**: The time complexity is linear because we only iterate through the string once to compute the LPS array, where `n` is the length of the string. Each step involves simple comparisons and assignments, which take constant time. After computing the LPS array, extracting the prefix is also linear in time complexity.

- **Space Complexity**:  
  - **O(n)**: We use an array of size `n` to store the LPS values, where `n` is the length of the string. Therefore, the space complexity is proportional to the size of the input string.

---
