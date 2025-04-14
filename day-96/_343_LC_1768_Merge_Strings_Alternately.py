'''
_343_LC_1768_Merge_Strings_Alternately.py

https://leetcode.com/problems/merge-strings-alternately/description/

1768. Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.
'''

class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        p1, p2 = 0, 0
        newStr = ""

        while p1 < len(word1) and p2 < len(word2):
            newStr += word1[p1]
            newStr += word2[p2]
            p1 += 1
            p2 += 1

        while p1 < len(word1):
            newStr += word1[p1]
            p1 += 1

        while p2 < len(word2):
            newStr += word2[p2]
            p2 += 1

        return newStr
