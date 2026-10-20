# Count Partitions

**Difficulty:** Medium

## Topics
- [Array](https://leetcode.com/tag/array/)
- [Math](https://leetcode.com/tag/math/)
- [Prefix Sum](https://leetcode.com/tag/prefix-sum/)

**Contest:** [Weekly Contest 434](https://leetcode.com/contest/weekly-contest-434/)

## Problem Statement
Given an integer array `nums`, count the number of partitions where both parts are non-empty and the difference between their sums is even.

## Approach
1. Calculate the total sum of all array elements using `totalsum`.
2. Traverse the array up to the second-last element.
3. Update `leftsum` by adding the current element.
4. Calculate `rightsum` as `totalsum - leftsum`.
5. Check whether `(leftsum - rightsum) % 2 == 0`.
6. If the condition is satisfied, increment `count`.
7. Return the final count.

## Example

**Input:**
```text
nums = [2, 4, 6, 8]
```

**Output:**
```text
3
```

**Explanation:**

The total sum is `20`. The three possible partitions have differences of `-16`, `-8`, and `4`, respectively. All differences are even, so the answer is `3`.

## Complexity Analysis
- **Time Complexity:** `O(n)` — Two traversals of the array.
- **Space Complexity:** `O(1)` — Constant extra space.

## Key Learning
This problem demonstrates how arrays, prefix sums, and mathematical properties can be combined to count valid partitions efficiently.
