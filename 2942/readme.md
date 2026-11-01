# 2942. Find Words Containing Character

**Difficulty:** Easy  
**Topics:** Array, String  
**Platform:** [LeetCode](https://leetcode.com/problems/find-words-containing-character/)

## Problem Statement

You are given a 0-indexed array of strings `words` and a character `x`.

Return an array of indices representing the words that contain the character `x`.

**Note:** The returned array may be in any order.

## Examples

**Example 1:**
```text
Input: words = ["leet","code"], x = "e"
Output: [0,1]
Explanation: The character 'e' occurs in both words.
```

**Example 2:**
```text
Input: words = ["abc","bcd","aaaa","cbc"], x = "a"
Output: [0,2]
Explanation: The character 'a' occurs in words at indices 0 and 2.
```

**Example 3:**
```text
Input: words = ["abc","bcd","aaaa","cbc"], x = "z"
Output: []
Explanation: No word contains the character 'z'.
```

## Approach

1. Create an empty vector `index` to store the indices of matching words.
2. Iterate through each word in the `words` array.
3. Check every character of the current word.
4. If a character matches `x`, add the current word's index to the result vector.
5. Use `break` to avoid checking the remaining characters of that word.
6. Return the result vector.

## Complexity Analysis

- **Time Complexity:** O(N × M), where N is the number of words and M is the maximum length of a word.
- **Space Complexity:** O(K), where K is the number of matching words, excluding the input.

## Language Used

C++