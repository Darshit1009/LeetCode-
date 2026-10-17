# LeetCode 2150 — Find All Lonely Numbers in the Array

## Problem Details

- **Problem Number:** 2150
- **Difficulty:** Medium
- **Topics:** Array, Hash Table, Counting
- **Platform:** [LeetCode](https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/)
- **Contest:** Weekly Contest 277
- **Status:** Solved
- **Language:** C++

## Problem Statement

Given an integer array `nums`, find all lonely numbers in the array.

A number is considered **lonely** if:
- It appears exactly once in the array.
- Neither its adjacent number `x - 1` nor `x + 1` exists in the array.

Return all lonely numbers in any order.

## Examples

### Example 1

**Input:** `nums = [10, 6, 5, 8]`

**Output:** `[10, 8]`

**Explanation:**
- `10` appears once, and neither `9` nor `11` exists.
- `8` appears once, and neither `7` nor `9` exists.
- `5` and `6` are not lonely because they are adjacent to each other.

### Example 2

**Input:** `nums = [1, 3, 5, 3]`

**Output:** `[1, 5]`

**Explanation:**
- `1` appears once, and neither `0` nor `2` exists.
- `5` appears once, and neither `4` nor `6` exists.
- `3` is not lonely because it appears twice.

## Approach

**Frequency Counting using a Hash Table**

1. Create a hash table to store the frequency of each number.
2. Traverse the array and count how many times each number appears.
3. Traverse the array again and check each number.
4. A number is lonely if its frequency is exactly one and neither of its adjacent numbers exists in the hash table.
5. Add all lonely numbers to the result and return it.

## Complexity Analysis

- **Time Complexity:** `O(n)` average, where `n` is the number of elements in the array.
- **Space Complexity:** `O(n)` for storing element frequencies in the hash table and the result vector in the worst case.

## Constraints

- `1 <= nums.length <= 10^5`
- `0 <= nums[i] <= 10^6`

## Key Learnings

- Frequency counting using `unordered_map`.
- Checking the existence of elements efficiently with a hash table.
- Applying conditions to identify unique elements.
- Understanding the time and space complexity of hash-based solutions.

## Tags

`LeetCode` `C++` `Array` `Hash Table` `Counting` `Medium`

## Reference

[LeetCode 2150 — Find All Lonely Numbers in the Array](https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/)
