'''
_347_LC_14_Longest_Common_Prefix.py

https://leetcode.com/problems/longest-common-prefix/description/

14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.

'''

class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""

        min_len = len(strs[0])
        for s in strs:
            if len(s) < min_len:
                min_len = len(s)

        result = ""

        for i in range(min_len):
            current_char = strs[0][i]
            for s in strs:
                if s[i] != current_char:
                    return result
            result += current_char

        return result
