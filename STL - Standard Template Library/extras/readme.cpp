### Extra C++ Features

This code demonstrates various useful features and functions in C++:

#### 1. **Sorting with Custom Comparator**
   - **Comparator Function**:
     ```cpp
     bool comp(pair<int, int> p1, pair<int, int> p2)
     {
         if (p1.second < p2.second)
             return true; // Sort by second element in ascending order
         if (p1.second > p2.second)
             return false; // If p1's second element is greater, p1 should come after p2
         return p1.first > p2.first; // If second elements are equal, sort by first element in descending order
     }
     ```

   - **Sorting Arrays**:
     ```cpp
     // Sort the entire array in ascending order
     sort(arr, arr + size);

     // Sort a subrange of the array (indices 2 to 8)
     sort(arr + 2, arr + 9);

     // Sort the entire array in descending order
     sort(arr, arr + size, greater<int>());
     ```

   - **Sorting Pairs**:
     ```cpp
     // Array of pairs
     pair<int, int> p[] = {{1, 2}, {4, 1}, {2, 1}};
     
     // Sort the pairs based on the custom comparator
     sort(p, p + p_size, comp);
     ```

#### 2. **Counting Set Bits**
   - **Count Set Bits in an Integer**:
     ```cpp
     int num = 7; // Binary: 000...111
     int cnt = __builtin_popcount(num); // Number of 1's in binary representation
     cout << "Number of set bits in " << num << " is: " << cnt << endl;
     ```

   - **Count Set Bits in a Long Long Integer**:
     ```cpp
     long long num2 = 15782390874124;
     int cnt2 = __builtin_popcountll(num2); // Number of 1's in binary representation
     cout << "Number of set bits in " << num2 << " is: " << cnt2 << endl;
     ```

#### 3. **Generating Permutations**
   - **Find Permutations of a String**:
     ```cpp
     string s = "123"; // Initialize the string

     // Print all permutations of the string
     do {
         cout << s << endl;
     } while (next_permutation(s.begin(), s.end())); // Generate the next permutation
     ```

#### 4. **Finding Maximum Element**
   - **Return the Maximum Element in an Array**:
     ```cpp
     int max_ele = *max_element(arr, arr + size); // Find and return the maximum element
     cout << "Max element in above array is : " << max_ele << endl;
     ```

#### Summary
- **Sorting**: Use `sort` with or without a custom comparator to sort arrays or pairs.
- **Set Bits**: Use `__builtin_popcount` and `__builtin_popcountll` to count set bits in integers.
- **Permutations**: Generate all permutations of a string using `next_permutation`.
- **Maximum Element**: Find the maximum element in an array using `max_element`.

These features are part of the standard library and can greatly simplify tasks involving arrays, strings, and basic bit operations.

-by Aditya Kumar