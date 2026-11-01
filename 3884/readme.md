# 3884. First Matching Character From Both Ends

**Difficulty:** Easy  
**Topics:** String  
**Platform:** [LeetCode](https://leetcode.com/problems/first-matching-character-from-both-ends/)

## Problem Statement

You are given a string `s`.

Find the smallest index `i` such that the character at index `i` is equal to the character at index `s.length() - 1 - i`.

Return the index `i`. If no such index exists, return `-1`.

## Examples

**Example 1:**
```text
Input: s = "abcacbd"
Output: 0
Explanation: s[0] = 'a' and s[6] = 'd'.
```

## Approach

1. Iterate through the string from the beginning up to its middle.
2. Compare the character at index `i` with the character at index `s.size() - i - 1`.
3. If both characters are equal, return the current index `i`.
4. If no matching characters are found, return `-1`.

## Complexity Analysis

- **Time Complexity:** O(N), where N is the length of the string. In the worst case, we check half of the string.
- **Space Complexity:** O(1), as no extra data structures are used.

## Language Used

C++