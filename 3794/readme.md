# 3794. Reverse String Prefix

**Difficulty:** Easy

## Problem Statement

You are given a string `s` and an integer `k`.

Reverse the first `k` characters of `s` and return the resulting string.

## Examples

### Example 1

**Input:**
```text
s = "abcd", k = 2
```

**Output:**
```text
"bacd"
```

**Explanation:**

The first 2 characters `"ab"` are reversed to `"ba"`. The remaining characters stay unchanged.

### Example 2

**Input:**
```text
s = "xyz", k = 3
```

**Output:**
```text
"zyx"
```

**Explanation:**

All 3 characters `"xyz"` are reversed to `"zyx"`.

### Example 3

**Input:**
```text
s = "hey", k = 1
```

**Output:**
```text
"hey"
```

**Explanation:**

Only the first character is selected, so the string remains unchanged.

## Constraints

- `1 <= s.length <= 100`
- `s` consists of lowercase English letters.
- `1 <= k <= s.length`

## Approach: Two Pointers

1. Initialize the left pointer at index `0`.
2. Initialize the right pointer at index `k - 1`.
3. Swap the characters at both pointer positions.
4. Move the left pointer forward and the right pointer backward.
5. Continue until both pointers meet or cross.

Only the first `k` characters are reversed. The remaining characters stay unchanged.

## Complexity Analysis

- **Time Complexity:** O(k) – Reversing the first k characters requires at most k/2 swaps.
- **Space Complexity:** O(1) – Only two pointers are used, requiring constant extra space.