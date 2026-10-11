# 1437. Check If All 1's Are at Least Length K Places Away

**Difficulty:** Easy  
**Platform:** LeetCode  
**Topic:** Array

## Problem Statement

Given a binary array `nums` and an integer `k`, return `true` if all occurrences of `1` are at least `k` places away from each other. Otherwise, return `false`.

Two occurrences of `1` satisfy the condition when there are at least `k` zeros between them.

## Examples

### Example 1

**Input:**
- `nums = [1,0,0,0,1,0,0,1]`
- `k = 2`

**Output:** `true`

**Explanation:**

Each occurrence of `1` has at least two zeros between it and the next occurrence of `1`. Therefore, the condition is satisfied.

### Example 2

**Input:**
- `nums = [1,0,0,1,0,1]`
- `k = 2`

**Output:** `false`

**Explanation:**

The second and third occurrences of `1` have only one zero between them, which is less than `k = 2`. Therefore, the condition is not satisfied.

## Constraints

- `1 <= nums.length <= 10^5`
- `0 <= k <= nums.length`
- `nums[i]` is either `0` or `1`.

## Approach

1. Traverse the array and store the indices of all occurrences of `1`.
2. Compare the positions of consecutive occurrences of `1`.
3. Calculate the number of positions between each pair by subtracting their indices and then subtracting one.
4. If any pair has fewer than `k` positions between them, return `false`.
5. If every pair satisfies the condition, return `true`.

## Complexity Analysis

- **Time Complexity:** `O(n)`, where `n` is the length of the array. The array is traversed to find the positions of `1`, and consecutive positions are checked.
- **Space Complexity:** `O(n)` in the worst case, when the array contains only `1`s and all their positions are stored.

## Key Concepts

- Array traversal
- Index tracking
- Consecutive element comparison
- Distance calculation

## Problem Link

[LeetCode 1437 – Check If All 1's Are at Least Length K Places Away](https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/)