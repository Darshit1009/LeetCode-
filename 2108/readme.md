# LeetCode 2108 — Find First Palindromic String in the Array

## Problem Information

- **Problem Number:** 2108
- **Difficulty:** Easy
- **Topics:** Array, Two Pointers, String
- **Platform:** [LeetCode](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/)
- **Contest:** Weekly Contest 272
- **Status:** Solved

## Problem Statement

Given an array of strings `words`, return the first palindromic string in the array. If no palindromic string exists, return an empty string `""`.

A string is called a **palindrome** if it reads the same forward and backward.

## Examples

### Example 1

**Input:** `words = ["abc","car","ada","racecar","cool"]`

**Output:** `"ada"`

**Explanation:** The first palindromic string is `"ada"`. Although `"racecar"` is also a palindrome, it appears later in the array.

### Example 2

**Input:** `words = ["notapalindrome","racecar"]`

**Output:** `"racecar"`

**Explanation:** `"racecar"` is the first string that reads the same forward and backward.

### Example 3

**Input:** `words = ["def","ghi"]`

**Output:** `""`

**Explanation:** None of the strings in the array is a palindrome, so an empty string is returned.

## Approach

1. Traverse the array of strings from left to right.
2. Check each string to determine whether it reads the same forward and backward.
3. Return the first string that satisfies the palindrome condition.
4. If no palindrome is found after checking all strings, return an empty string.

## Complexity Analysis

Let **n** be the number of strings and **m** be the maximum length of a string.

- **Time Complexity:** O(n × m) in the worst case, because each string may need to be checked character by character.
- **Auxiliary Space Complexity:** O(1) when checking characters using two pointers without creating another string.

## Constraints

- `1 <= words.length <= 100`
- `1 <= words[i].length <= 100`
- Each string contains only lowercase English letters.

## Key Learnings

- Iterating through an array of strings.
- Identifying palindromes using character comparisons.
- Applying the two-pointer technique.
- Returning the first matching element while preserving array order.
- Handling cases where no valid string exists.

## Tags

`LeetCode` `C++` `Array` `String` `Two Pointers` `Palindrome` `Easy`

---

**Reference:** [LeetCode 2108 — Find First Palindromic String in the Array](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/)