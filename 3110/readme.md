# 3110. Score of a String

**Difficulty:** Easy  
**Language:** C++  
**Topic:** String, ASCII

## Problem

Given a string `s`, the score of the string is defined as the sum of the absolute differences between the ASCII values of every pair of adjacent characters.

Return the score of the given string.

## Approach

- Traverse the string from the second character to the last character.
- For every character, compare it with the previous character.
- Calculate the absolute difference between their ASCII values.
- Add each difference to `sum`.
- Return the final sum.

### Example

For:

` s = "hello" `

The ASCII differences are:

- `|h - e| = 3`
- `|e - l| = 7`
- `|l - l| = 0`
- `|l - o| = 3`

Therefore:

`3 + 7 + 0 + 3 = 13`

### Another Example

For:

` s = "zaz" `

- `|z - a| = 25`
- `|a - z| = 25`

Therefore:

`25 + 25 = 50`

## Complexity Analysis

- **Time Complexity:** `O(n)` — the string is traversed once.
- **Space Complexity:** `O(1)` — only a few variables are used.

## Key Concept

Characters in C++ have corresponding **ASCII values**. Subtracting two characters gives the difference between their ASCII values, and `abs()` is used to obtain the absolute difference.

## LeetCode

[3110. Score of a String](https://leetcode.com/problems/score-of-a-string/)