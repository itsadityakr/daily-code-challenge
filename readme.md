# 🚀 Daily DSA Problem Solving

Welcome to my repository where I will be solving **Data Structures and Algorithms (DSA)** questions daily ordered from beginner to advanced level problems.

## 📋 Table of Contents

1. [Sheet 1](#sheet-1)
2. [Sheet 2](#sheet-2)
3. [Active](#linked-list)

---

<details id="sheet-1">
  <summary><h2>Sheet 1</h2></summary>

## 📋 Table of Contents

1. [Basic Maths](#basic-maths)
2. [Recursion](#recursion)
3. [Two Pointers](#two-pointers)
4. [Sorting](#sorting)
5. [Algorithms and Techniques](#algorithms-and-techniques)
6. [Hashing](#hashing)
7. [Binary Search](#binary-search)
8. [Arrays](#arrays)
9. [Strings](#strings)

## Basic Maths

| **#** | **Problem Name**                      | **Platform**                                                                                                                                            | **Status** | **File**                                                        | **Difficulty** | **Prerequisites**                                                                        |
| ----- | ------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | --------------------------------------------------------------- | -------------- | ---------------------------------------------------------------------------------------- |
| 1     | Number of factors                     | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/number-of-factors1435/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)  | ✅         | [.cpp](./day-36/_119_numbers_of_factors.cpp)                    | 🟢             | Loops, Divisors, Square roots                                                            |
| 2     | Perfect Number                        | [LeetCode](https://leetcode.com/problems/perfect-number/)                                                                                               | ✅         | [.cpp](./day-36/_120_perfect_number.cpp)                        | 🟢             | Divisors, Sum of factors, Loops                                                          |
| 3     | Three Divisors                        | [LeetCode](https://leetcode.com/problems/three-divisors/description/)                                                                                   | ✅         | [.cpp](./day-36/_121_three_divisors.cpp)                        | 🟢             | Prime numbers, Perfect squares, Divisors                                                 |
| 4     | Four Divisors                         | [LeetCode](https://leetcode.com/problems/four-divisors/description/)                                                                                    | ✅         | [.cpp](./day-36/_122_four_divisors.cpp)                         | 🟡             | Divisors, Efficient looping techniques, Sum of numbers                                   |
| 5     | Armstrong Number                      | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1)                                                                         | ✅         | [.cpp](./day-36/_123_armstrong_number.cpp)                      | 🟢             | Number manipulation, Digit extraction, Loops                                             |
| 6     | Palindrome Number                     | [LeetCode](https://leetcode.com/problems/palindrome-number/description/)                                                                                | ✅         | [.cpp](./day-37/_124_palindrome_number.cpp)                     | 🟢             | Loops, Conditionals, Integer Operations (% And /), Overflow Handling                     |
| 7     | Valid Palindrome                      | [LeetCode](https://leetcode.com/problems/valid-palindrome/description/)                                                                                 | ✅         | [.cpp](./day-37/_125_valid_palindrome.cpp)                      | 🟢             | String Manipulation, Two-Pointer Technique, Isalnum, Tolower                             |
| 8     | Prime Number                          | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/prime-number2314/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)       | ✅         | [.cpp](./day-37/_126_prime_number.cpp)                          | 🟢             | Mathematics, Prime Number Logic, Square Root Optimization                                |
| 9     | Count Primes                          | [LeetCode](https://leetcode.com/problems/count-primes/description/)                                                                                     | ✅         | [.cpp](./day-37/_127_count_primes.cpp)                          | 🟡             | Sieve Of Eratosthenes, Boolean Arrays, Loops                                             |
| 10    | Count Digits                          | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/count-digits5716/0)                                                                              | ✅         | [.cpp](./day-37/_128_count_digits.cpp)                          | 🟢             | Modulo, Digit Extraction, Loops                                                          |
| 11    | Count the Digits That Divide a Number | [LeetCode](https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/)                                                            | ✅         | [.cpp](./day-37/_129_count_the_digits_that_divide_a_number.cpp) | 🟢             | Modulo, Digit Extraction, Loops                                                          |
| 12    | GCD of two number                     | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card) | ✅         | [.cpp](./day-38/_131_gcd_of_two_numbers.cpp)                    | 🟢             | Euclidean Algorithm, Basic Math (division and modulus), Iterative Loops                  |
| 13    | LCM and GCD                           | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)        | ✅         | [.cpp](./day-38/_130_lcm_and_gcd.cpp)                           | 🟢             | Euclidean Algorithm, Relation Between LCM and GCD, Basic Math (multiplication, division) |
| 14    | Find Greatest Common Divisor of Array | [LeetCode](https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/)                                                            | ✅         | [.cpp](./day-38/_132_find_greatest_common_divisor_of_array.cpp) | 🟢             | Array Traversal, Euclidean Algorithm, Basic Math (min, max, division, modulus)           |
| 15    | Reverse Integer                       | [LeetCode](https://leetcode.com/problems/reverse-integer/)                                                                                              | ✅         | [.cpp](./day-38/_133_reverse_integer.cpp)                       | 🟡             | Modulus for Digit Extraction, Handling Integer Overflow, Iterative Loops                 |

---

## Recursion

| **#** | **Problem Name**                   | **Platform**                                                                                                                                                                                                                  | **Status** | **File**                                                   | **Difficulty** | **Prerequisites**                                      |
| ----- | ---------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | ---------------------------------------------------------- | -------------- | ------------------------------------------------------ |
| 1     | Print 1 To N Without Loop          | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1)                                                                                                                         | ✅         | [.cpp](./day-39/_134_print_1_to_n.cpp)                     | 🟢             | Recursion                                              |
| 2     | Print N to 1 without loop          | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-n-to-1-without-loop)                                         | ✅         | [.cpp](./day-39/_135_print_n_to_1.cpp)                     | 🟢             | Recursion                                              |
| 3     | Print GFG n times                  | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times)                                                         | ✅         | [.cpp](./day-39/_136_print_gfg_n_times.cpp)                | 🟢             | Recursion                                              |
| 4     | Sum of first n terms               | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1)                                                                                                                                            | ✅         | [.cpp](./day-39/_137_sum_of_first_n_terms.cpp)             | 🟢             | Recursion, Arithmetic operations (like exponentiation) |
| 5     | Factorials Less than or Equal to n | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1) | ✅         | [.cpp](./day-39/_138_factorials_less_than_or_equal_to.cpp) | 🟢             | Recursion, Factorial calculations                      |
| 6     | Reverse an Array                   | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/reverse-an-array/0)                                                                                                                                                    | ✅         | [.cpp](./day-39/_139_reverse_an_array.cpp)                 | 🟢             | Recursion, Arrays                                      |
| 7     | Fibonacci Number                   | [LeetCode](https://leetcode.com/problems/fibonacci-number/description/)                                                                                                                                                       | ✅         | [.cpp](./day-39/_140_fibonacci_number.cpp)                 | 🟢             | Recursion, Understanding of Fibonacci sequence         |

---

## Two Pointers

| **#** | **Problem Name**          | **Platform**                                                                     | **Status** | **File**                                            | **Difficulty** | **Prerequisites**                               |
| ----- | ------------------------- | -------------------------------------------------------------------------------- | ---------- | --------------------------------------------------- | -------------- | ----------------------------------------------- |
| 1     | Reverse String            | [LeetCode](https://leetcode.com/problems/reverse-string/description/)            | ✅         | [.cpp](./day-07/_31_reverse_string.cpp)             | 🟢             | Two Pointers, In-Place Modification             |
| 2     | Move Zeroes               | [LeetCode](https://leetcode.com/problems/move-zeroes/description/)               | ✅         | [.cpp](./day-26/_85_move_all_zeros_to_end.cpp)      | 🟢             | Two Pointers, In-Place Modification             |
| 3     | Valid Palindrome II       | [LeetCode](https://leetcode.com/problems/valid-palindrome-ii/description/)       | ✅         | [.cpp](./day-39/_141_valid_palindrome_ii.cpp)       | 🟢             | Two Pointers, In-Place Modification             |
| 4     | Container With Most Water | [LeetCode](https://leetcode.com/problems/container-with-most-water/description/) | ✅         | [.cpp](./day-40/_142_container_with_most_water.cpp) | 🟡             | Arrays, Two-pointer technique, Greedy algorithm |
| 5     | Sort Colors               | [LeetCode](https://leetcode.com/problems/sort-colors/submissions/)               | ✅         | [.cpp](./day-28/_94_sort_0_1_2.cpp)                 | 🟡             | Two Pointers, In-Place Modification             |
| 6     | Trapping Rain Water       | [LeetCode](https://leetcode.com/problems/trapping-rain-water/description/)       | ✅         | [.cpp](./day-40/_143_trapping_rain_water.cpp)       | 🔴             | Arrays, Two-pointer technique, Greedy algorithm |

---

## Sorting

| **#** | **Problem Name**         | **Platform**                                                             | **Status** | **File**                                           | **Difficulty** | **Prerequisites**                                     |
| ----- | ------------------------ | ------------------------------------------------------------------------ | ---------- | -------------------------------------------------- | -------------- | ----------------------------------------------------- |
| 1     | Bubble Sort              | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/bubble-sort/1)    | ✅         | [.cpp](./day-40/_144_bubble_sort.cpp)              | 🟢             | Arrays, Loops, Sorting basics                         |
| 2     | Insertion Sort           | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/insertion-sort/1) | ✅         | [.cpp](./day-40/_145_insertion_sort.cpp)           | 🟢             | Arrays, Loops, Sorting basics                         |
| 3     | Merge Sort               | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/merge-sort/1)     | ✅         | [.cpp](./day-40/_146_merge_sort.cpp)               | 🟡             | Arrays, Recursion, Divide and Conquer                 |
| 4     | Quick Sort               | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/quick-sort/1)     | ✅         | [.cpp](./day-40/_147_quick_sort.cpp)               | 🔴             | Arrays, Recursion, Divide and Conquer, Sorting basics |
| 5     | Recursive Bubble Sort    | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/bubble-sort/1)    | ✅         | [.cpp](././day-41/_148_recursive_bubble_sort.cpp)  | 🟢             | Arrays, Recursion, Swapping                           |
| 6     | Recursive Insertion Sort | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/insertion-sort/1) | ✅         | [.cpp](./day-41/_149_recursive_insertion_sort.cpp) | 🟢             | Arrays, Recursion, Insertion                          |
| 7     | Selection Sort           | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/selection-sort/1) | ✅         | [.cpp](./day-41/_150_selection_sort.cpp)           | 🟢             | Arrays, Recursion, Swapping                           |

---

## Algorithms and Techniques

| **#** | **Problem Name**                    | **Platform**                                                                                                         | **Status** | **File**                                                          | **Difficulty** | **Prerequisites**                                                     |
| ----- | ----------------------------------- | -------------------------------------------------------------------------------------------------------------------- | ---------- | ----------------------------------------------------------------- | -------------- | --------------------------------------------------------------------- |
| 1     | Prefix Sum                          | [GeeksForGeeks](https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/) | ✅         | [.cpp](./algorithms-and-techniques/prefix_sum_array/)             | 🟢             | Arrays, Loops, Basic Mathematics (Addition, Subtraction)              |
| 2     | Fibonacci Sequence                  | [LeetCode](https://leetcode.com/problems/generate-fibonacci-sequence/description/)                                   | ✅         | [.cpp](./algorithms-and-techniques/fibonacci_sequence/)           | 🟢             | Recursion, Dynamic Programming, Basic Mathematics (Sequences)         |
| 3     | Boyer-Moore Voting Algorithm        | [TopCoder](https://www.topcoder.com/thrive/articles/boyer-moore-majority-vote-algorithm)                             | ✅         | [.cpp](./algorithms-and-techniques/boyer_moore_voting_algorithm/) | 🟢             | Arrays, Loops, Basic Counting Logic                                   |
| 4     | Euclidean Algorithm                 | [GeeksForGeeks](https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/)                              | ✅         | [.cpp](./algorithms-and-techniques/euclidean_algorithm/)          | 🟡             | Basic Mathematics (Division, Remainder), Recursion                    |
| 5     | Sieve of Eratosthenes               | [CP-Algorithms](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html)                                        | ❌         | [.cpp](./Library/03_Algorithms_and_Techniques)                    | 🟡             | Arrays, Loops, Basic Mathematics (Prime Numbers)                      |
| 6     | Binomial Coefficients               | [GeeksForGeeks](https://www.geeksforgeeks.org/binomial-coefficient-dp-9/)                                            | ❌         | [.cpp](./Library/03_Algorithms_and_Techniques)                    | 🟡             | Combinatorics, Dynamic Programming, Recursion                         |
| 7     | In-place Array Modification         | [GeeksForGeeks](https://www.geeksforgeeks.org/in-place-algorithm/)                                                   | ❌         | [.cpp](./Library/03_Algorithms_and_Techniques)                    | 🔴             | Arrays, Loops, Two-pointer Technique                                  |
| 8     | Sliding Window                      | [GeeksForGeeks](https://www.geeksforgeeks.org/window-sliding-technique/)                                             | ❌         | [.cpp](./Library/03_Algorithms_and_Techniques)                    | 🔴             | Arrays, Loops, Two-pointer Technique, Hash Maps (for some variations) |
| 9     | Floyd's Tortoise and Hare Algorithm | [DEV Community](https://dev.to/alisabaj/floyd-s-tortoise-and-hare-algorithm-finding-a-cycle-in-a-linked-list-39af)   | ❌         | [.cpp](./Library/03_Algorithms_and_Techniques)                    | 🔴             | Linked Lists, Two-pointer Technique, Cyclic Detection                 |
| 10    | Longest Common Subsequence (LCS)    | [GeeksForGeeks](https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/)                                      | ❌         | [.cpp](./Library/03_Algorithms_and_Techniques)                    | 🔴             | Dynamic Programming, Strings, Recursion                               |

---

## Hashing

| **#** | **Problem Name**                               | **Platform**                                                                                                                                                        | **Status** | **File**                                                                 | **Difficulty** | **Prerequisites**                                               |
| ----- | ---------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | ------------------------------------------------------------------------ | -------------- | --------------------------------------------------------------- |
| 1     | Find unique element                            | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/find-unique-element2632/0)                                                                                   | ✅         | [.cpp](./day-42/_152_find_unique_element.cpp)                            | 🟢             | Hash maps, Frequency counting, Array traversal, Modulo operator |
| 2     | Sum of Unique Elements                         | [LeetCode](http://leetcode.com/problems/sum-of-unique-elements/description/)                                                                                        | ✅         | [.cpp](./day-42/_153_sum_of_unique_elements.cpp)                         | 🟢             | Hash maps, Frequency counting, Array traversal                  |
| 3     | Find the Frequency                             | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/find-the-frequency/1)                                                                                        | ✅         | [.cpp](./day-42/_154_find_the_frequency.cpp)                             | 🟢             | Hash maps, Frequency counting, Array traversal                  |
| 4     | Frequencies in a Limited Array                 | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1)                                                                    | ✅         | [.cpp](./day-42/_155_frequencies_in_a_limited_array.cpp)                 | 🟢             | Hash maps, Frequency counting, Arrays, Index manipulation       |
| 5     | Check if array contains duplicates             | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/check-if-array-contains-duplicates/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card) | ✅         | [.cpp](./day-42/_156_check_if_array_contains_duplicated.cpp)             | 🟢             | Hash sets, Array traversal, Unordered data structures           |
| 6     | Find the Duplicate Number                      | [LeetCode](https://leetcode.com/problems/find-the-duplicate-number/description/)                                                                                    | ✅         | [.cpp](./day-42/_157_find_the_duplicate_number.cpp)                      | 🟡             | Hash maps, Frequency counting, Array traversal                  |
| 7     | First Unique Character in a String             | [LeetCode](https://leetcode.com/problems/first-unique-character-in-a-string/description/)                                                                           | ✅         | [.cpp](./day-42/_158_first_unique_character_in_a_string.cpp)             | 🟢             | Hash maps, String traversal, Frequency counting                 |
| 8     | Union of Arrays with Duplicates                | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)            | ✅         | [.cpp](./day-42/_159_union_of_arrays_with_duplicates.cpp)                | 🟢             | Hash maps, Hash sets, Array traversal, Set operations           |
| 9     | Intersection of Two Arrays                     | [LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/description/)                                                                                   | ✅         | [.cpp](./day-42/_160_intersection_of_two_arrays.cpp)                     | 🟢             | Hash sets, Array traversal, Set operations                      |
| 10    | Two Sum - Pair with Given Sum                  | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_cardk)                      | ✅         | [.cpp](./day-43/_161_two_sum.cpp)                                        | 🟢             | Hash Maps, Arrays, Loops, Complement                            |
| 11    | Majority Element                               | [LeetCode](https://leetcode.com/problems/majority-element/description/)                                                                                             | ✅         | [.cpp](./day-43/_162_majority_element_n_by_2.cpp)                        | 🟢             | Hash Maps, Arrays, Loops, Boyer-Moore Voting Algorithm          |
| 12    | K-diff Pairs in an Array                       | [LeetCode](https://leetcode.com/problems/k-diff-pairs-in-an-array/description/)                                                                                     | ✅         | [.cpp](./day-43/_163_k_diff_pairs_in_array.cpp)                          | 🟡             | Hash Maps, Arrays, Loops                                        |
| 13    | Missing Number                                 | [LeetCode](https://leetcode.com/problems/missing-number/description/)                                                                                               | ✅         | [.cpp](./day-43/_164_missing_number.cpp)                                 | 🟢             | Hash Maps, Arrays, Loops                                        |
| 14    | First Repeating Element                        | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/first-repeating-element4018/1)                                                                               | ✅         | [.cpp](./day-43/_165_first_repeating_element.cpp)                        | 🟢             | Hash Maps, Arrays, Loops                                        |
| 15    | Valid Anagram                                  | [LeetCode](https://leetcode.com/problems/valid-anagram/description/)                                                                                                | ✅         | [.cpp](./day-43/_166_valid_anagram.cpp)                                  | 🟢             | Hash Maps, Strings, Loops                                       |
| 16    | Group Anagrams                                 | [LeetCode](https://leetcode.com/problems/group-anagrams/description/)                                                                                               | ✅         | [.cpp](./day-43/_167_group_anagrams.cpp)                                 | 🟡             | Hash Maps, Strings, Sorting, Loops                              |
| 17    | Longest Substring Without Repeating Characters | [LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)                                                               | ✅         | [.cpp](./day-43/_168_longest_substring_without_repeating_characters.cpp) | 🟡             | Hash Maps, Strings, Sliding Window Technique, Loops             |

---

## Binary Search

| **#** | **Problem Name**                                        | **Platform**                                                                                                                                                                                                                           | **Status** | **File**                                                                          | **Difficulty** | **Prerequisites**                                        |
| ----- | ------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | --------------------------------------------------------------------------------- | -------------- | -------------------------------------------------------- |
| 1     | Binary Search                                           | [LeetCode](https://leetcode.com/problems/binary-search/description/k)                                                                                                                                                                  | ✅         | [.cpp](./day-41/_151_binary_search.cpp)                                           | 🟢             | Recursion, Comparisons, Finding mid                      |
| 2     | Floor in a Sorted Array                                 | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array) | ✅         | [.cpp](./day-44/_169_floor_in_a_sorted_array.cpp)                                 | 🟢             | Binary Search, Array Traversal                           |
| 3     | Ceil The Floor                                          | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor)                                                                    | ✅         | [.cpp](./day-44/_170_ceil_the_floor.cpp)                                          | 🟢             | Binary Search, Array Traversal                           |
| 4     | Search Insert Position                                  | [LeetCode](https://leetcode.com/problems/search-insert-position/description/)                                                                                                                                                          | ✅         | [.cpp](./day-44/_171_search_insert_position.cpp)                                  | 🟢             | Binary Search, Array Traversal                           |
| 5     | Find First and Last Position of Element in Sorted Array | [LeetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/)                                                                                                                         | ✅         | [.cpp](./day-44/_172_find_first_and_last_position_of_element_in_sorted_array.cpp) | 🟡             | Binary Search, Array Traversal                           |
| 6     | Number of occurrence                                    | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence)                                                        | ✅         | [.cpp](./day-44/_173_number_of_occurence.cpp)                                     | 🟢             | Binary Search, Array Traversal                           |
| 7     | Search in Rotated Sorted Array                          | [LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)                                                                                                                                                  | ✅         | [.cpp](./day-45/_174_search_in_rotated_sorted_array.cpp)                          | 🟡             | Binary Search, Rotated Sorted Array                      |
| 8     | Search in Rotated Sorted Array II                       | [LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/)                                                                                                                                               | ✅         | [.cpp](./day-45/_175_search_in_rotated_sorted_array_ii.cpp)                       | 🟡             | Binary Search, Rotated Sorted Array, Handling Duplicates |
| 9     | Find Minimum in Rotated Sorted Array                    | [LeetCode](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)                                                                                                                                            | ✅         | [.cpp](./day-45/_176_find_min_in_rotated_sorted_array.cpp)                        | 🟡             | Binary Search, Rotated Sorted Array                      |
| 10    | Find Kth Rotation                                       | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation)                                                                                | ✅         | [.cpp](./day-45/_177_find_kth_rotation.cpp)                                       | 🟢             | Binary Search, Rotated Sorted Array                      |
| 11    | Single Element in a Sorted Array                        | [LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/description/)                                                                                                                                                | ✅         | [.cpp](./day-46/_178_single_element_in_a_sorted_array.cpp)                        | 🟡             | Binary Search, Rotated Sorted Array                      |
| 12    | Find Peak Element                                       | [LeetCode](https://leetcode.com/problems/find-peak-element/description/)                                                                                                                                                               | ✅         | [.cpp](./day-46/_179_find_peak_element.cpp)                                       | 🟡             | Binary Search, Rotated Sorted Array                      |
| 13    | Square Root                                             | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root)                                                                              | ✅         | [.cpp](./day-46/_180_square_root.cpp)                                             | 🟢             | Binary Search, Integer Arithmetic                        |
| 14    | Find nth root of m                                      | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m)                                                            | ✅         | [.cpp](./day-46/_181_find_nth_root_of_m.cpp)                                      | 🟢             | Binary Search, Exponentiation, Integer Arithmetic        |
| 15    | Koko Eating Bananas                                     | [LeetCode](https://leetcode.com/problems/koko-eating-bananas/description/)                                                                                                                                                             | ✅         | [.cpp](./day-47/_182_koko_eating_bananas.cpp)                                     | 🟡             | Binary Search, Feasibility Check                         |
| 16    | Minimum Number of Days to Make m Bouquets               | [LeetCode](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/)                                                                                                                                       | ✅         | [.cpp](./day-47/_183_minimum_number_of_days_to_make_m_bouquets.cpp)               | 🟡             | Binary Search, Feasibility Check, Array Traversal        |
| 17    | Find the Smallest Divisor Given a Threshold             | [LeetCode](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/)                                                                                                                                     | ✅         | [.cpp](./day-47/_184_find_the_smallest_divisor_given_a_thershold.cpp)             | 🟡             | Binary Search, Feasibility Check, Division & Summation   |
| 18    | Capacity To Ship Packages Within D Days                 | [LeetCode](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/)                                                                                                                                         | ✅         | [.cpp](./day-48/_186_Capacity_To_Ship_Packages_Within_D_Days.cpp)                 | 🟡             | Binary Search, Greedy Algorithms                         |
| 19    | Kth Missing Positive Number                             | [LeetCode](https://leetcode.com/problems/kth-missing-positive-number/description/)                                                                                                                                                     | ✅         | [.cpp](./day-48/_187_Kth_Missing_Positive_Number.cpp)                             | 🟢             | Binary Search                                            |
| 20    | Split Array Largest Sum                                 | [LeetCode](https://leetcode.com/problems/split-array-largest-sum/description/)                                                                                                                                                         | ✅         | [.cpp](./day-48/_188_Split_Array_Largest_Sum.cpp)                                 | 🔴             | Binary Search, Greedy Algorithms                         |
| 21    | Median of Two Sorted Arrays                             | [LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/description/)                                                                                                                                                     | ✅         | [.cpp](./day-48/_189_Median_of_Two_Sorted_Arrays.cpp)                             | 🔴             | Binary Search, Partitioning, Median Calculation          |
| 22    | K-th element of two Arrays                              | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array)                                | ✅         | [.cpp](./day-47/_185_kth_element_of_two_arrays.cpp)                               | 🟡             | Binary Search, Partitioning, Array Merging Concepts      |
| 23    | Row with max 1s                                         | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s)                                                                  | ✅         | [.cpp](./day-48/_190_Row_with_max_1s.cpp)                                         | 🟡             | Binary Search, 2D Arrays                                 |
| 24    | Search a 2D Matrix                                      | [LeetCode](https://leetcode.com/problems/search-a-2d-matrix/description/)                                                                                                                                                              | ✅         | [.cpp](./day-49/_191_Search_a_2D_Matrix.cpp)                                      | 🟡             | Binary Search, Matrix Traversal, Index Mapping           |
| 25    | Search a 2D Matrix II                                   | [LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/description/)                                                                                                                                                           | ✅         | [.cpp](./day-49/_192_Search_a_2D_Matrix_II.cpp)                                   | 🟡             | Binary Search, Matrix Traversal, 2D Search Strategy      |
| 26    | Find a Peak Element II                                  | [LeetCode](https://leetcode.com/problems/find-a-peak-element-ii/description/)                                                                                                                                                          | ✅         | [.cpp](./day-49/_193_Find_a_Peak_Element_II.cpp)                                  | 🟡             | Binary Search, Peak Finding Algorithm, Matrix Traversal  |
| 27    | Median in a row-wise sorted Matrix                      | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=median-in-a-row-wise-sorted-matrix)                            | ✅         | [.cpp](./day-49/_194_Median_in_a_row-wise_sorted_Matrix.cpp)                      | 🔴             | Binary Search, Median Concept, Matrix Traversal          |

---

## Arrays

| **#** | **Problem Name**                                     | **Platform**                                                                                           | **Status** | **File**                                                                       | **Difficulty** | **Prerequisites**                                                                      |
| ----- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------------------ | ---------- | ------------------------------------------------------------------------------ | -------------- | -------------------------------------------------------------------------------------- |
| 1     | Third Maximum Number                                 | [LeetCode](https://leetcode.com/problems/third-maximum-number/)                                        | ✅         | [.cpp](./day-25/_79_third_maximum_number.cpp)                                  | 🟢             | Sorting                                                                                |
| 2     | Right Rotate an Array by K Steps                     | [LeetCode](https://leetcode.com/problems/rotate-array/)                                                | ✅         | [.cpp](./day-25/_82_right_rotate_array_by_k_steps.cpp)                         | 🟡             | Rotations                                                                              |
| 3     | Check if the Array is Sorted and Rotated             | [LeetCode](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)                        | ✅         | [.cpp](./day-25/_80_check_if_array_is_sorted_and_rotated.cpp)                  | 🟢             | Pointers, In-place Modification                                                        |
| 4     | Remove Duplicates from Sorted Array                  | [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)                         | ✅         | [.cpp](./day-25/_81_remove_duplicates_from_sorted_array.cpp)                   | 🟢             | Array Reversal, Modulo Operation                                                       |
| 5     | Kth Largest Element in Array                         | [LeetCode](https://leetcode.com/problems/kth-largest-element-in-an-array/description/)                 | ✅         | [.cpp](./day-25/_83_kth_largest_element_in_array.cpp)                          | 🟡             | QuickSelect Algorithm, Partitioning Recursion                                          |
| 6     | Search in Rotated Sorted Array Places                | [LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)                  | ✅         | [.cpp](./day-26/_84_search_in_rotated_sorted_array_places.cpp)                 | 🟡             | Binary Search                                                                          |
| 7     | Move All Zeros to the End                            | [LeetCode](https://leetcode.com/problems/move-zeroes/)                                                 | ✅         | [.cpp](./day-26/_85_move_all_zeros_to_end.cpp)                                 | 🟢             | Two Pointers, Swapping Elements                                                        |
| 8     | Find Minimum in Rotated Sorted Array                 | [LeetCode](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)            | ✅         | [.cpp](./day-26/_86_find_minimum_in_roated_sorted_array.cpp)                   | 🟡             | Binary Search                                                                          |
| 9     | Intersection of Two Arrays                           | [LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/description/)                      | ✅         | [.cpp](./day-26/_87_intersection_of_two_arrays.cpp)                            | 🟢             | Hashing, Sets                                                                          |
| 10    | Find Missing Number in an Array                      | [LeetCode](https://leetcode.com/problems/missing-number/)                                              | ✅         | [.cpp](./day-26/_88_find_missing_number_in_an_array.cpp)                       | 🟢             | Bit Manipulation, XOR Operations                                                       |
| 11    | Max Consecutive 1's                                  | [LeetCode](https://leetcode.com/problems/max-consecutive-ones/)                                        | ✅         | [.cpp](./day-27/_89_max_consecutive_ones.cpp)                                  | 🟢             | Loops (for, while)                                                                     |
| 12    | Find the Single Element Among Pairs                  | [LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/)                            | ✅         | [.cpp](./day-27/_90_find_single_element_along_pairs.cpp)                       | 🟡             | Binary Search                                                                          |
| 13    | Number of Subarrays with Sum Equal to K              | [LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/description/)                           | ✅         | [.cpp](./day-27/_91_number_of_subarrays_with_sum_k.cpp)                        | 🟡             | Prefix Sum, Hash Maps (unordered_map)                                                  |
| 14    | Maximum Sum of Distinct Subarrays With Length K      | [LeetCode](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/) | ✅         | [.cpp](./day-27/_92_maximum_sum_of_distinct_subarrays_with_length_k.cpp)       | 🟡             | Sliding Window Technique, Hash Maps (unordered_map)                                    |
| 15    | 2-Sum Problem                                        | [LeetCode](https://leetcode.com/problems/two-sum/)                                                     | ✅         | [.cpp](./day-27/_93_two_sum.cpp)                                               | 🟢             | Hash Maps (unordered_map), Basic Arithmetic (complement)                               |
| 16    | Sort 0, 1, 2                                         | [LeetCode](https://leetcode.com/problems/sort-colors/)                                                 | ✅         | [.cpp](./day-28/_94_sort_0_1_2.cpp)                                            | 🟡             | Counting, Basic Iteration                                                              |
| 17    | Majority Element II (n by 2 times)                   | [LeetCode](https://leetcode.com/problems/majority-element/)                                            | ✅         | [.cpp](./day-28/_95_majority_element.cpp)                                      | 🟢             | Hash Maps, Boyer-Moore Voting Algorithm                                                |
| 18    | Maximum Subarray (Kadane's Algorithm)                | [LeetCode](https://leetcode.com/problems/maximum-subarray/)                                            | ✅         | [.cpp](./day-28/_96_maximum_subarray_kadanes_algorithm.cpp)                    | 🟡             | Kadane's Algorithm                                                                     |
| 19    | Subarray with Sum K                                  | [LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)                                       | ✅         | [.cpp](./day-28/_97_subarrays_with_sum_equals_k.cpp)                           | 🟡             | Prefix Sum, Hash Maps, Sliding Window Technique                                        |
| 20    | Stock Buy and Sell                                   | [LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)                             | ✅         | [.cpp](./day-28/_98_stock_buy_and_sell.cpp)                                    | 🟢             | Min/Max Element Tracking                                                               |
| 21    | Rearrange Elements by Sign                           | [LeetCode](https://leetcode.com/problems/rearrange-array-elements-by-sign/)                            | ✅         | [.cpp](./day-29/_99_rearrange_elements_by_sign.cpp)                            | 🟡             | Iteration, Conditional Statements                                                      |
| 22    | Next Permutation                                     | [LeetCode](https://leetcode.com/problems/next-permutation/)                                            | ✅         | [.cpp](./day-29/_100_next_permutation.cpp)                                     | 🟡             | Sorting, Swapping Elements, Reverse, Linear Search                                     |
| 23    | Replace Elements with Greatest Element on Right Side | [LeetCode](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/)        | ✅         | [.cpp](./day-29/_101_replace_elements_with_greatest_element_on_right_side.cpp) | 🟢             | Max Function, Reverse Traversal                                                        |
| 24    | Longest Consecutive Subsequence                      | [LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)                                | ✅         | [.cpp](./day-29/_102_longest_consecutive_subsequence.cpp)                      | 🟡             | Sorting, Linear Search, Sequence Detection                                             |
| 25    | Set Matrix 0's                                       | [LeetCode](https://leetcode.com/problems/set-matrix-zeroes/)                                           | ✅         | [.cpp](./day-29/_103_set_matrix_0s.cpp)                                        | 🟡             | 2D Arrays, Matrix Manipulation, Flags, Traversal                                       |
| 26    | Rotate Matrix                                        | [LeetCode](https://leetcode.com/problems/rotate-image/)                                                | ✅         | [.cpp](./day-30/_104_rotate_matrix.cpp)                                        | 🟡             | 2D Arrays, Transpose of Matrix, Swapping, Array Reversal                               |
| 27    | Spiral Traversal                                     | [LeetCode](https://leetcode.com/problems/spiral-matrix/)                                               | ✅         | [.cpp](./day-30/_105_spiral_traversal.cpp)                                     | 🟡             | Loop Control, Directional Changes                                                      |
| 28    | Pascal's Triangle                                    | [LeetCode](https://leetcode.com/problems/pascals-triangle/)                                            | ✅         | [.cpp](./day-30/_106_pascals_triangle.cpp)                                     | 🟢             | Nested Loops, Binomial coefficients                                                    |
| 29    | Majority Element II (n by 3 times)                   | [LeetCode](https://leetcode.com/problems/majority-element-ii/)                                         | ✅         | [.cpp](./day-30/_107_majority_element_II_n_by_3.cpp)                           | 🟡             | Traversal, Counting, Boyer-Moore Voting Algorithm                                      |
| 30    | 3-Sum Problem                                        | [LeetCode](https://leetcode.com/problems/3sum/)                                                        | ✅         | [.cpp](./day-31/_108_three_sum.cpp)                                            | 🟡             | Sorting, Two-pointer technique, Handling duplicates                                    |
| 31    | 4-Sum Problem                                        | [LeetCode](https://leetcode.com/problems/4sum/)                                                        | ✅         | [.cpp](./day-31/_109_four_sum.cpp)                                             | 🟡             | Sorting, Nested loops, Two-pointer technique, Handling duplicates, Overflow prevention |
| 32    | Length of Subarray with an equal number of 0 and 1   | [LeetCode](https://leetcode.com/problems/contiguous-array/description/)                                | ✅         | [.cpp](./day-31/_110_length_of_subarray_with_equal_number_of_0_and_1.cpp)      | 🟡             | Prefix sum, Hash maps, Subarray with a target sum                                      |
| 33    | XOR Queries of a Subarray                            | [LeetCode](https://leetcode.com/problems/xor-queries-of-a-subarray/description/)                       | ✅         | [.cpp](./day-32/_111_xor_queries_of_a_subarray.cpp)                            | 🟡             | XOR operation properties, Prefix XOR array, Range queries                              |
| 34    | Merge Overlapping Subintervals                       | [LeetCode](https://leetcode.com/problems/merge-intervals/description/)                                 | ✅         | [.cpp](./day-32/_112_merge_overlapping_intervals.cpp)                          | 🟡             | Sorting, Intervals                                                                     |
| 35    | Merge Sorted Array Without Extra Space               | [LeetCode](https://leetcode.com/problems/merge-sorted-array/description/)                              | ✅         | [.cpp](./day-33/_113_merge_sorted_array_without_extra_space.cpp)               | 🟢             | Pointers, In-Place Operations, Two Pointers                                            |
| 36    | Repeating Numbers                                    | [LeetCode](https://leetcode.com/problems/find-the-duplicate-number/)                                   | ✅         | [.cpp](./day-33/_114_repeating_numbers.cpp)                                    | 🟡             | In-Place Operations, Cycle Detection, Absolute Value                                   |
| 37    | Count Inversions                                     | [LeetCode](https://leetcode.com/problems/count-the-number-of-inversions/description/)                  | ✅         | [.cpp](./day-34/_115_count_inversions.cpp)                                     | 🔴             | Dynamic Programming, Modular Arithmetic                                                |
| 38    | Reverse Pairs                                        | [LeetCode](https://leetcode.com/problems/reverse-pairs/)                                               | ✅         | [.cpp](./day-34/_116_reverse_pairs.cpp)                                        | 🔴             | Merge Sort, Efficient Counting Techniques                                              |
| 39    | Maximum Product Subarray                             | [LeetCode](https://leetcode.com/problems/maximum-product-subarray/)                                    | ✅         | [.cpp](./day-35/_117_maximum_product_subarray.cpp)                             | 🟡             | Array, Prefix and Suffix Products                                                      |
| 40    | Count of Smaller Numbers After Self                  | [LeetCode](https://leetcode.com/problems/count-of-smaller-numbers-after-self/description/)             | ✅         | [.cpp](./day-35/_118_count_of_smaller_numbers_after_self.cpp)                  | 🔴             | Merge Sort, Divide and Conquer Algorithm, Array and Index Tracking                     |

---

## Strings

| **#** | **Problem Name**                         | **Platform**                                                                                                                                                                                | **Status** | **File**                                                           | **Difficulty** | **Prerequisites**                                                                     |
| ----- | ---------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | ------------------------------------------------------------------ | -------------- | ------------------------------------------------------------------------------------- |
| 1     | Remove Outermost Parentheses             | [LeetCode](https://leetcode.com/problems/remove-outermost-parentheses/)                                                                                                                     | ✅         | [.cpp](./day-50/_195_Remove_Outermost_Parentheses.cpp)             | 🟢             | Strings, Loops, Conditionals                                                          |
| 2     | Largest Odd Number in String             | [LeetCode](https://leetcode.com/problems/largest-odd-number-in-string/description/)                                                                                                         | ✅         | [.cpp](./day-50/_197_Largest_Odd_Number_in_String.cpp)             | 🟢             | Strings, Basic Number Properties                                                      |
| 3     | Longest Common Prefix                    | [LeetCode](https://leetcode.com/problems/longest-common-prefix/description/)                                                                                                                | ✅         | [.cpp](./day-51/_198_Longest_Common_Prefix.cpp)                    | 🟢             | Binary Search, Strings, Prefix, Array Iteration                                       |
| 4     | Isomorphic Strings                       | [LeetCode](https://leetcode.com/problems/isomorphic-strings/description/)                                                                                                                   | ✅         | [.cpp](./day-51/_199_Isomorphic_Strings.cpp)                       | 🟢             | Hash Map, Strings, Character Mapping, Iteration                                       |
| 5     | Rotate String                            | [LeetCode](https://leetcode.com/problems/rotate-string/description/)                                                                                                                        | ✅         | [.cpp](./day-52/_200_Rotate_String.cpp)                            | 🟢             | String manipulation, String comparison, Loops, Array indexing, Functions              |
| 6     | Valid Anagram                            | [LeetCode](https://leetcode.com/problems/valid-anagram/description/)                                                                                                                        | ✅         | [.cpp](./day-52/_201_Valid_Anagram.cpp)                            | 🟢             | String manipulation, Hash maps (unordered_map), String comparison, Character counting |
| 7     | Sort Characters By Frequency             | [LeetCode](https://leetcode.com/problems/sort-characters-by-frequency/description/)                                                                                                         | ✅         | [.cpp](./day-52/_202_Sort_Characters_By_Frequency.cpp)             | 🟡             | Hashmaps, Priority Queue                                                              |
| 8     | Maximum Nesting Depth of the Parentheses | [LeetCode](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/)                                                                                             | ✅         | [.cpp](./day-52/_203_Maximum_Nesting_Depth_of_the_Parentheses.cpp) | 🟢             | Parentheses matching, Stack-like behavior (counting depth), Iteration through strings |
| 9     | Roman to Integer                         | [LeetCode](https://leetcode.com/problems/roman-to-integer/description/)                                                                                                                     | ✅         | [.cpp](./day-53/_204_Roman_to_Integer.cpp)                         | 🟢             | Hash maps, Iteration, Conditional logic                                               |
| 10    | String to Integer (atoi)                 | [LeetCode](https://leetcode.com/problems/string-to-integer-atoi/description/)                                                                                                               | ✅         | [.cpp](./day-53/_205_String_to_Integer_a_to_i.cpp)                 | 🟡             | ASCII operations, Overflow handling, Loops                                            |
| 11    | Substrings with K Distinct               | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-number-of-substrings) | ✅         | [.cpp](./day-53/_206_Substrings_with_K_Distinct.cpp)               | 🟡             | Sliding window, Hash maps, Two-pointer technique                                      |
| 12    | Longest Palindromic Substring            | [LeetCode](https://leetcode.com/problems/longest-palindromic-substring/description/)                                                                                                        | ✅         | [.cpp](./day-54/_207_Longest_Palindromic_Substring.cpp)            | 🟡             | Two Pointers, String Manipulation                                                     |
| 13    | Sum of Beauty of All Substrings          | [LeetCode](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/)                                                                                                      | ✅         | [.cpp](./day-54/_208_Sum_of_Beauty_of_All_Substrings.cpp)          | 🟡             | Brute Force, Frequency Counting                                                       |
| 14    | Reverse Words in a String                | [LeetCode](https://leetcode.com/problems/reverse-words-in-a-string/description/)                                                                                                            | ✅         | [.cpp](./day-54/_209_Reverse_Words_in_a_String.cpp)                | 🟡             | String Parsing, List Manipulation                                                     |

---

</details>

---

## Linked List

| **#** | **Problem Name**                               | **Platform**                                                                                                                                                      | **Status** | **File**                                                                 | **Difficulty** | **Prerequisites**                     |
| ----- | ---------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | ------------------------------------------------------------------------ | -------------- | ------------------------------------- |
| 1     | Creating a Node Structure of Linked List       | [GeeksForGeeks](https://www.geeksforgeeks.org/program-to-implement-singly-linked-list-in-c-using-class/)                                                          | ✅         | [.cpp](./day-55/_219_Creating_a_Node_Structure_of_Linked_List.cpp)       | 🟡             | Pointers, OOPs                        |
| 2     | Insert at Head in Linked List                  | [HackerRank](https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem)                                                            | ✅         | [.cpp](./day-55/_220_Insert_at_Head_in_Linked_List.cpp)                  | 🟢             | Pointers, OOPs                        |
| 3     | Insert at Tail in Linked List                  | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card) | ✅         | [.cpp](./day-56/_221_Insert_at_Tail_in_Linked_List.cpp)                  | 🟡             | Traversal, Pointers, OOPs             |
| 4     | Insert at Position in Linked List              | [GeeksForGeeks](https://www.geeksforgeeks.org/insert-a-node-at-a-specific-position-in-a-linked-list/)                                                             | ✅         | [.cpp](./day-56/_222_Insert_at_Position_in_Linked_List.cpp)              | 🔴             | Counting, Traversal, Pointers, OOPs   |
| 5     | Delete at Head in Linked List                  | [GeeksForGeeks](https://www.geeksforgeeks.org/remove-first-node-of-the-linked-list/)                                                                              | ✅         | [.cpp](./day-56/_223_Delete_at_Head_in_Linked_List.cpp)                  | 🟡             | Pointers, OOPs                        |
| 6     | Delete at Tail in Linked List                  | [GeeksForGeeks](https://www.geeksforgeeks.org/remove-last-node-of-the-linked-list/)                                                                               | ✅         | [.cpp](./day-57/_224_Delete_at_Tail_in_Linked_List.cpp)                  | 🟡             | Traversal, Pointers, OOPs             |
| 7     | Delete at Given Position in Linked List        | [GeeksForGeeks](https://www.geeksforgeeks.org/delete-a-linked-list-node-at-a-given-position/)                                                                     | ✅         | [.cpp](./day-57/_225_Delete_at_Given_Position_in_Linked_List.cpp)        | 🔴             | Counting, Traversal, Pointers, OOPs   |
| 8     | Search for a Value                             | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/0)                                                                        | ✅         | [.cpp](./day-58/_226_Search_for_a_Value.cpp)                             | 🟢             | Comparsion, Traversal, Pointers, OOPs |
| 9     | Reverse Linked List                            | [LeetCode](https://leetcode.com/problems/reverse-linked-list/description/)                                                                                        | ✅         | [.cpp](./day-58/_227_Reverse_Linked_List.cpp)                            | 🟢             | Traversal, Pointers, OOPs             |
| 10    | Identical Linked List                          | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/identical-linked-lists/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)           | ✅         | [.cpp](./day-59/_228_Identical_Linked_List.cpp)                          | 🟡             | Comparsion, Traversal, Pointers, OOPs |
| 11    | Remove Duplicates from Sorted Linked List      | [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/)                                                                         | ✅         | [.cpp](./day-59/_229_Remove_Duplicates_from_Sorted_Linked_List.cpp)      | 🟢             | Comparsion, Traversal, Pointers, OOPs |
| 12    | Remove Duplicates from Sorted List II          | [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/)                                                                      | ✅         | [.cpp](./day-60/_230_Remove_Duplicates_from_Sorted_List_II.cpp)          | 🟡             | Comparsion, Traversal, Pointers, OOPs |
| 13    | Remove Duplicates From an Unsorted Linked List | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1)                                                          | ✅         | [.cpp](./day-60/_231_Remove_Duplicates_From_an_Unsorted_Linked_List.cpp) | 🟢             | Comparsion, Traversal, Pointers, OOPs |
| 14    | Merge Two Sorted Linked Lists                  | [LeetCode](https://leetcode.com/problems/merge-two-sorted-lists/description/)                                                                                     | ✅         | [.cpp](./day-60/_232_Merge_Two_Sorted_Linked_Lists.cpp)                  | 🟢             | Comparsion, Traversal, Pointers, OOPs |
| 15    | Middle of the Linked List                      | [LeetCode](https://leetcode.com/problems/middle-of-the-linked-list/description/)                                                                                  | ✅     | [.cpp](./day-61/_233_Middle_of_the_Linked_List.cpp)                                                     | 🟢             | -                                     |
| 16    | Linked List Cycle                              | [LeetCode](https://leetcode.com/problems/linked-list-cycle/description/)                                                                                          | ✅     | [.cpp](./day-61/_234_Linked_List_Cycle.cpp)                                                     | 🟢             | -                                     |
| 17    | Linked List Cycle II                           | [LeetCode](https://leetcode.com/problems/linked-list-cycle-ii/description/)                                                                                       | ✅     | [.cpp](./day-61/_235_Linked_List_Cycle_II.cpp)                                                     | 🟡             | -                                     |
| 18    | Find length of Loop                            | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/find-length-of-loop/1)                                                                                     | ❌✅🔄     | [.cpp](./day-18.cpp)                                                     | 🟡             | -                                     |
| 19    | Palindrome Linked List                         | [LeetCode](https://leetcode.com/problems/palindrome-linked-list/description/)                                                                                     | ❌✅🔄     | [.cpp](./day-19.cpp)                                                     | 🔴             | -                                     |
| 20    | Odd Even Linked List                           | [LeetCode](https://leetcode.com/problems/odd-even-linked-list/description/)                                                                                       | ❌✅🔄     | [.cpp](./day-20.cpp)                                                     | 🟡             | -                                     |
| 21    | Remove Nth Node From End of List               | [LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)                                                                           | ❌✅🔄     | [.cpp](./day-21.cpp)                                                     | 🟡             | -                                     |
| 22    | Delete the Middle Node of a Linked List        | [LeetCode](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/)                                                                    | ❌✅🔄     | [.cpp](./day-22.cpp)                                                     | 🟢             | -                                     |
| 23    | Sort List                                      | [LeetCode](https://leetcode.com/problems/sort-list/description/)                                                                                                  | ❌✅🔄     | [.cpp](./day-23.cpp)                                                     | 🔴             | -                                     |
| 24    | Sort a linked list of 0s, 1s and 2s            | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1)                                                             | ❌✅🔄     | [.cpp](./day-24.cpp)                                                     | 🟢             | -                                     |
| 25    | Intersection of Two Linked Lists               | [LeetCode](https://leetcode.com/problems/intersection-of-two-linked-lists/description/)                                                                           | ❌✅🔄     | [.cpp](./day-25.cpp)                                                     | 🟡             | -                                     |
| 26    | Add 1 to a Linked List Number                  | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1)                                                            | ❌✅🔄     | [.cpp](./day-26.cpp)                                                     | 🟡             | -                                     |
| 27    | Add Two Numbers                                | [LeetCode](https://leetcode.com/problems/add-two-numbers/description/)                                                                                            | ❌✅🔄     | [.cpp](./day-27.cpp)                                                     | 🟡             | -                                     |
| 28    | Reverse Nodes in k-Group                       | [LeetCode](https://leetcode.com/problems/reverse-nodes-in-k-group/description/)                                                                                   | ❌✅🔄     | [.cpp](./day-28.cpp)                                                     | 🔴             | -                                     |
| 29    | Rotate List                                    | [LeetCode](https://leetcode.com/problems/rotate-list/description/)                                                                                                | ❌✅🔄     | [.cpp](./day-29.cpp)                                                     | 🟡             | -                                     |
| 30    | Flattening a Linked List                       | [GeeksForGeeks](https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1)                                                                                | ❌✅🔄     | [.cpp](./day-30.cpp)                                                     | 🔴             | -                                     |
| 31    | Copy List with Random Pointer                  | [LeetCode](https://leetcode.com/problems/copy-list-with-random-pointer/description/)                                                                              | ❌✅🔄     | [.cpp](./day-31.cpp)                                                     | 🔴             | -                                     |

---

## Topic

| **#** | **Problem Name** | **Platform**                       | **Status** | **File**       | **Difficulty** | **Prerequisites** |
| ----- | ---------------- | ---------------------------------- | ---------- | -------------- | -------------- | ----------------- |
| 1     | Problem          | [LeetCode/GeeksForGeeks](web_link) | ❌✅🔄     | [.cpp](./day-) | 🟢🟡🔴         | -                 |

---

### 📌 Legend:

-   ✅ Completed
-   🔄 To be completed next day
-   ❌ Not Started
-   🟢 Easy Problem
-   🟡 Medium Problem
-   🔴 Hard Problem

---

<details id="sheet-2">
  <summary><h2>Sheet 2</h2></summary>

## Previous Sheet From Day 01 to Day 24

### 📋 Table of Contents

1. [Numbers and Arithmetic](#numbers-and-arithmetic)
2. [Loops and Patterns](#loops-and-patterns)
3. [Beginner-Level Questions](#beginner-level-questions)
4. [Intermediate-Level Questions](#intermediate-level-questions)

---

## Numbers and Arithmetic

| **#** | **Problem Name**                                                 | **Status** | **File**                                                     |
| ----- | ---------------------------------------------------------------- | ---------- | ------------------------------------------------------------ |
| 1     | Check if a number is odd or even                                 | ✅         | [Link](./day-01/_01_odd_even.cpp)                            |
| 2     | Determine if a number is prime                                   | ✅         | [Link](./day-01/_02_prime_number.cpp)                        |
| 3     | Find the factorial of a number                                   | ✅         | [Link](./day-01/_03_factorial.cpp)                           |
| 4     | Print the Fibonacci sequence up to N terms                       | ✅         | [Link](./day-01/_04_fibonacci_sequence.cpp)                  |
| 5     | Find the sum of digits of a number                               | ✅         | [Link](./day-01/_05_sum_of_digits.cpp)                       |
| 6     | Reverse the digits of a number                                   | ✅         | [Link](./day-01/_06_reverse_digits.cpp)                      |
| 7     | Check if a number is a palindrome                                | ✅         | [Link](./day-01/_07_palindrome_number.cpp)                   |
| 8     | Determine if a number is an Armstrong number                     | ✅         | [Link](./day-01/_08_armstrong_number.cpp)                    |
| 9     | Find the GCD and LCM of two numbers                              | ✅         | [Link](./day-01/_09_find_HCF_and_LCM.cpp)                    |
| 10    | Swap two numbers without using a temporary variable              | ✅         | [Link](./day-01/_10_swap_numbers.cpp)                        |
| 11    | Check if a number is positive, negative, or zero                 | ✅         | [Link](./day-01/_11_check_pos_neg_zero.cpp)                  |
| 12    | Find the largest of three numbers                                | ✅         | [Link](./day-01/_12_largest_of_three.cpp)                    |
| 13    | Print the multiplication table of a number                       | ✅         | [Link](./day-01/_13_multiplication_table.cpp)                |
| 14    | Calculate the power of a number without using built-in functions | ✅         | [Link](./day-01/_14_power_of_number.cpp)                     |
| 15    | Check if a number is a perfect square                            | ✅         | [Link](./day-02/_15_check_if_no_is_perfect_square.cpp)       |
| 16    | Find the square root of a number without built-in functions      | ✅         | [Link](./day-02/_16_find_sqrt.cpp)                           |
| 17    | Count the number of digits in a number                           | ✅         | [Link](./day-02/_17_digits_in_a_number.cpp)                  |
| 18    | Check if a number is a perfect number                            | ✅         | [Link](./day-02/_18_check_perfect_number.cpp)                |
| 19    | Convert a decimal number to binary, octal, and hexadecimal       | ✅         | [Link](./day-02/_19_decimal_to_binary_octal_hexadecimal.cpp) |
| 20    | Convert a binary number to decimal                               | ✅         | [Link](./day-02/_20_binary_to_decimal.cpp)                   |

---

## Loops and Patterns

| **#** | **Problem Name**                                | **Status** | **File**                                                     |
| ----- | ----------------------------------------------- | ---------- | ------------------------------------------------------------ |
| 21    | Print the sum of the first N natural numbers    | ✅         | [Link](./day-02/_21_sum_of_first_n_natural_numbers.cpp)      |
| 22    | Print the sum of the first N even numbers       | ✅         | [Link](./day-02/_22_sum_of_first_n_even_natural_numbers.cpp) |
| 23    | Print the sum of the first N odd numbers        | ✅         | [Link](./day-02/_23_sum_of_first_n_odd_natural_numbers.cpp)  |
| 24    | Generate Pascal’s triangle                      | ✅         | [Link](./day-02/_24_pascals_triangle.cpp)                    |
| 25    | Print the first N prime numbers                 | ✅         | [Link](./day-02/_25_first_n_prime_numbers.cpp)               |
| 26    | Print the sum of a geometric progression series | ✅         | [Link](./day-02/_26_sum_of_geometric_progression_series.cpp) |
| 27    | Print the sum of a harmonic series              | ✅         | [Link](./day-02/_27_sum_of_harmonic_series.cpp)              |
| 28    | Find the Nth term of an arithmetic progression  | ✅         | [Link](./day-02/_28_sum_of_arithmetic_progression.cpp)       |

---

## Beginner-Level Questions

### Arrays

| **#** | **Problem Name**                                                   | **Status** | **File**                                                                              |
| ----- | ------------------------------------------------------------------ | ---------- | ------------------------------------------------------------------------------------- |
| 1     | Find the Largest Element in an Array                               | ✅         | [Link](./day-03/_01_find_the_largest_element_in_an_array.cpp)                         |
| 2     | Find the Smallest Element in an Array                              | ✅         | [Link](./day-03/_02_find_the_smallest_element_in_an_array.cpp)                        |
| 3     | Find the Missing Number in an Array (0 to n)                       | ✅         | [Link](./day-03/_03_find_the_missing_number_in_an_array_of_0_to_n.cpp)                |
| 4     | Find the Missing Number in an Array (1 to n)                       | ✅         | [Link](./day-03/_04_find_the_missing_number_in_an_array_of_1_to_n.cpp)                |
| 5     | Rotate an Array by K Positions Left                                | ✅         | [Link](./day-03/_05_rotate_an_array_by_k_positions_left.cpp)                          |
| 6     | Rotate an Array by K Positions Right                               | ✅         | [Link](./day-03/_06_rotate_an_array_by_k_positions_right.cpp)                         |
| 7     | Move All Zeroes to the End of an Array                             | ✅         | [Link](./day-03/_07_move_all_zeroes_to_the_end_of_an_array.cpp)                       |
| 8     | Rearrange Positive and Negative Numbers in an Array                | ✅         | [Link](./day-03/_08_rearrange_positive_and_negative_numbers_in_an_array.cpp)          |
| 9     | Find the First Repeating Element in an Array                       | ✅         | [Link](./day-03/_09_find_the_first_repeating_element_in_an_array.cpp)                 |
| 10    | Find Duplicates in Array using Floyd's Tortoise and Hare Algorithm | ✅         | [Link](./day-03/_10_find_duplicates_in_array_using_floyds_tortoise_and_hare_algo.cpp) |
| 11    | Find the First Non-Repeating Element in an Array                   | ✅         | [Link](./day-03/_11_find_the_first_non_repeating_element_in_an_array.cpp)             |
| 12    | Single Number                                                      | ✅         | [Link](./day-03/_12_single_number.cpp)                                                |
| 13    | Count Frequency in Range                                           | ✅         | [Link](./day-04/_13_count_freq_in_range.cpp)                                          |
| 14    | Count the Frequencies of Array Elements in O(1) Extra Space        | ✅         | [Link](./day-04/_14_count_the_frequencies_of_array_elements_in_O1_extra_space.cpp)    |
| 15    | Count Element with Maximum Frequency                               | ✅         | [Link](./day-04/_15_count_element_with_max_frequency.cpp)                             |
| 16    | Rearrange Array Elements Alternately (Max-Min)                     | ✅         | [Link](./day-04/_16_rearrange_array_elements_alternately_max_min.cpp)                 |
| 17    | Second Largest Element in Array                                    | ✅         | [Link](./day-04/_17_second_largest_element_in_array.cpp)                              |
| 18    | Find Kth Largest Element                                           | ✅         | [Link](./day-04/_18_find_kth_largest_element.cpp)                                     |
| 19    | Find Kth Smallest and Largest Element                              | ✅         | [Link](./day-04/_19_find_kth_smallest_and_largest_element.cpp)                        |
| 20    | Two Sum to Return Indices                                          | ✅         | [Link](./day-05/_20_two_sum_to_return_indices.cpp)                                    |
| 21    | Two Sum to Return Values                                           | ✅         | [Link](./day-05/_21_two_sum_to_return_values.cpp)                                     |
| 22    | Second Largest Element in Array                                    | ✅         | [Link](./day-05/_22_second_largest_element_in_array.cpp)                              |
| 23    | Maximum Differences Between Increasing Elements                    | ✅         | [Link](./day-05/_23_maximun_differences_between_increasing_elements.cpp)              |
| 24    | Sorted and Rotated                                                 | ✅         | [Link](./day-05/_24_sorted_and_rotated.cpp)                                           |
| 25    | Equilibrium Index of Array                                         | ✅         | [Link](./day-05/_25_equilibrium_index_of_array.cpp)                                   |
| 26    | Reverse Array                                                      | ✅         | [Link](./day-06/_26_reverse_array.cpp)                                                |
| 27    | Intersection and Union of Unsorted Arrays                          | ✅         | [Link](./day-06/_27_intersection_and_union_of_unsorted_array.cpp)                     |
| 28    | Intersection and Union of Sorted Arrays                            | ✅         | [Link](./day-06/_28_intersection_and_union_of_sorted_array.cpp)                       |

### Strings

| **#** | **Problem Name**                               | **Status** | **File**                                                                |
| ----- | ---------------------------------------------- | ---------- | ----------------------------------------------------------------------- |
| 29    | Valid Anagrams                                 | ✅         | [Link](./day-07/_29_valid_anagrams.cpp)                                 |
| 30    | Check Palindrome                               | ✅         | [Link](./day-07/_30_check_palindrome.cpp)                               |
| 31    | Reverse String                                 | ✅         | [Link](./day-07/_31_reverse_string.cpp)                                 |
| 32    | Check if String Contains Only Digits           | ✅         | [Link](./day-07/_32_check_if_string_contains_only_digits.cpp)           |
| 33    | Convert String to Integer (Implementing Atoi)  | ✅         | [Link](./day-07/_33_convert_string_to_integer_implementing_a_to_i.cpp)  |
| 34    | Longest Substring Without Repeating Characters | ✅         | [Link](./day-07/_34_longest_substring_without_repeating_characters.cpp) |
| 35    | Find All Permutations of a String              | ✅         | [Link](./day-07/_35_find_all_permutations_of_a_string.cpp)              |
| 36    | Count Frequency of Characters in String        | ✅         | [Link](./day-07/_36_count_frequency_of_characters_in_string.cpp)        |
| 37    | Largest Common Prefix in Array of Strings      | ✅         | [Link](./day-07/_37_largest_common_prefix_in_array_of_strings.cpp)      |
| 38    | Find ASCII Values of String                    | ✅         | [Link](./day-07/_38_find_ascii_values_of_string.cpp)                    |

### Linked Lists

| **#** | **Problem Name**                                  | **Status** | **File**                                                        |
| ----- | ------------------------------------------------- | ---------- | --------------------------------------------------------------- |
| 39    | Reverse a Linked List                             | ✅         | [Link](./day-08/_39_reverse_a_linked_list.cpp)                  |
| 40    | Detect Cycle in Linked List                       | ✅         | [Link](./day-08/_40_detect_cycle_in_linked_list.cpp)            |
| 41    | Merge Two Sorted Linked Lists                     | ✅         | [Link](./day-09/_41_merge_two_sorted_linked_list.cpp)           |
| 42    | Remove Duplicates in Linked List                  | ✅         | [Link](./day-09/_42_remove_duplicates_in_linked_list.cpp)       |
| 43    | Find the length of a linked list                  | ✅         | [Link](./day-10/_43_find_the_length_of_linked_list.cpp)         |
| 44    | Remove the nth node from the end of a linked list | ✅         | [Link](./day-10/_44_remove_nth_node_from_linked_list.cpp)       |
| 45    | Find the middle element of a linked list          | ✅         | [Link](./day-10/_45_find_the_middle_element_of_linked_list.cpp) |

### Stacks and Queues

| **#** | **Problem Name**                                   | **Status** | **File**                                                  |
| ----- | -------------------------------------------------- | ---------- | --------------------------------------------------------- |
| 46    | Implement a stack using arrays                     | ✅         | [Link](./day-11/_46_stack_using_arrays.cpp)               |
| 47    | Implement a stack using linked lists               | ✅         | [Link](./day-11/_47_stack_using_linked_list.cpp)          |
| 48    | Implement a queue using arrays                     | ✅         | [Link](./day-11/_48_queue_using_arrays.cpp)               |
| 49    | Implement a queue using linked lists               | ✅         | [Link](./day-11/_49_queue_using_linked_list.cpp)          |
| 50    | Implement a stack that supports `getMin()` in O(1) | ✅         | [Link](./day-11/_50_stack_that_supports_getMin_in_O1.cpp) |
| 51    | Evaluate a postfix expression                      | ✅         | [Link](./day-12/_51_evaluate_postfix_expression.cpp)      |
| 52    | Check for balanced parentheses in an expression    | ✅         | [Link](./day-12/_52_valid_parentheses.cpp)                |

---

## Intermediate-Level Questions

### Arrays

| **#** | **Problem Name**                                               | **Status** | **File**                                                                   |
| ----- | -------------------------------------------------------------- | ---------- | -------------------------------------------------------------------------- |
| 53    | Kadane's Algorithm (Maximum subarray sum).                     | ✅         | [Link](./day-13/_53_kadanes_algorithm_maximum_sub_array_sum.cpp)           |
| 54    | Trapping Rain Water                                            | ✅         | [Link](./day-13/_54_trapping_rain_water.cpp)                               |
| 55    | Find the longest consecutive subsequence.                      | ✅         | [Link](./day-13/_55_longest_consecutive_subsequence.cpp)                   |
| 56    | Best time to buy and sell stock.                               | ✅         | [Link](./day-13/_56_best_time_to_buy_and_sell_stock.cpp)                   |
| 57    | Merge two sorted arrays without extra space.                   | ✅         | [Link](./day-14/_57_merge_two_sorted_arrays.cpp)                           |
| 58    | Three sum problem.                                             | ✅         | [Link](./day-14/_58_three_sum.cpp)                                         |
| 59    | Find the maximum product subarray.                             | ✅         | [Link](./day-14/_59_maximum_product_of_subarray.cpp)                       |
| 60    | Check if you can reach the end of the array.                   | ✅         | [Link](./day-15/_60_can_we_reach_end_of_array.cpp)                         |
| 61    | Find the minimum number of jumps to reach the end of an array. | ✅         | [Link](./day-15/_61_minimum_jumps_required_to_reach_end_of_array.cpp)      |
| 62    | Find subarray with a given sum.                                | ✅         | [Link](./day-15/_62_subarray_sum_equals_k.cpp)                             |
| 63    | Smallest subarray with a sum greater than a given value.       | ✅         | [Link](./day-16/_63_minimum_size_subarray_sum.cpp)                         |
| 64    | Find the first missing positive integer.                       | ✅         | [Link](./day-16/_64_first_missing_positive.cpp)                            |
| 65    | Find common elements in three sorted arrays.                   | ✅         | [Link](./day-17/_65_find_common_elements_between_two_arrays.cpp)           |
| 66    | Rearrange array to form the largest number.                    | ✅         | [Link](./day-17/_66_find%20the%20largest_number_by_rearranging_arrays.cpp) |
| 67    | Find the maximum circular subarray sum.                        | ✅         | [Link](./day-17/_67_maximum_sum_in_a_circular_subarray.cpp)                |
| 68    | Merge overlapping intervals.                                   | ✅         | [Link](./day-17/_68_merge_overlapping_intervals.cpp)                       |

### Strings

| **#** | **Problem Name**                                         | **Status** | **File**                                                                            |
| ----- | -------------------------------------------------------- | ---------- | ----------------------------------------------------------------------------------- |
| 69    | Rabin-Karp algorithm.                                    | ✅         | [Link](./day-18/_69_repeated_string_match_rabin_karp_or_rolling_hash_algorithm.cpp) |
| 70    | Longest Happy Prefix-KMP algorithm for pattern matching. | ✅         | [Link](./day-18/_70_longest_happy_prefix_kmp_algorithm.cpp)                         |
| 71    | Longest palindromic substring.                           | ✅         | [Link](./day-19/_71_longest_palindromic_substring.cpp)                              |
| 72    | Find the minimum window substring.                       | ✅         | [Link](./day-20/_72_minimum_window_substring.cpp)                                   |

---

</details>

---

### 📌 Legend:

-   ✅ Completed
-   🔄 In Progress
-   ❌ Not Started

---

## 💡 About This Repository

This repository is dedicated to practicing **Data Structures and Algorithms** to improve problem-solving skills. The problems are grouped and ordered from beginner to advanced levels to make it easier for anyone to follow a structured learning path.

---

## 📝 Contribution

Feel free to contribute by submitting pull requests, reporting issues, or suggesting improvements. If you'd like to solve problems together or share insights, join me on this journey by forking this repository and making contributions!

---

## 🔖 License

This repository is open-source and available under the [MIT License](LICENSE).

---
