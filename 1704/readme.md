# LeetCode 1704 – Determine if String Halves Are Alike

## Problem Statement

You are given a string `s` of even length. Divide the string into two equal halves: the first half and the second half.

A string is considered alike if both halves contain the same number of vowels. The vowels are `a`, `e`, `i`, `o`, and `u`, in both lowercase and uppercase.

Return `true` if the two halves are alike; otherwise, return `false`.

## Approach

1. Divide the string into two equal halves using its length.
2. Initialize two counters to count the vowels in each half.
3. Traverse the first half and count all vowels, including uppercase and lowercase vowels.
4. Traverse the second half and count its vowels using the same conditions.
5. Compare both vowel counts:
   - If both counts are equal, return `true`.
   - Otherwise, return `false`.

## Example

**Input:**
- `s = "book"`

**Output:**
- `true`

**Explanation:**

The first half, `"bo"`, contains one vowel (`o`). The second half, `"ok"`, also contains one vowel (`o`). Since both halves have the same number of vowels, the result is `true`.

## Complexity Analysis

- **Time Complexity:** `O(n)` — The algorithm traverses both halves of the string, examining each character once.
- **Space Complexity:** `O(1)` — Only two counters are used, regardless of the input string's length.

## Topics

- String
- Counting

## Difficulty

Easy

## Platform

[LeetCode – Problem 1704](https://leetcode.com/problems/determine-if-string-halves-are-alike/)

## Key Learning

This problem demonstrates string traversal, character comparison, vowel counting, and the use of two counters to compare parts of a string efficiently.