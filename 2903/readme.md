# 2903. Find Indices With Index and Value Difference I

**LeetCode:** [2903. Find Indices With Index and Value Difference I](https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/)  
**Difficulty:** Easy  
**Topics:** Array, Two Pointers  
**Contest:** Weekly Contest 367

---

## Problem Statement

You are given a **0-indexed integer array** `nums` of length `n`, along with two integers:

- `indexDifference`
- `valueDifference`

The task is to find two indices `i` and `j` such that both of the following conditions are satisfied:

- `|i - j| >= indexDifference`
- `|nums[i] - nums[j]| >= valueDifference`

If such a pair exists, return `[i, j]`.

If no valid pair exists, return `[-1, -1]`.

If multiple valid pairs exist, any one of them can be returned.

> **Note:** `i` and `j` can be equal.

---

## Examples

### Example 1

**Input:**

`nums = [5,1,4,1]`  
`indexDifference = 2`  
`valueDifference = 4`

**Output:**

`[0,3]`

**Explanation:**

For `i = 0` and `j = 3`:

- `|0 - 3| = 3 >= 2`
- `|5 - 1| = 4 >= 4`

Both conditions are satisfied, so `[0,3]` is a valid answer.

---

### Example 2

**Input:**

`nums = [2,1]`  
`indexDifference = 0`  
`valueDifference = 0`

**Output:**

`[0,0]`

**Explanation:**

The same index can be selected because `i` and `j` are allowed to be equal.

- `|0 - 0| = 0 >= 0`
- `|2 - 2| = 0 >= 0`

Therefore, `[0,0]` is valid.

---

### Example 3

**Input:**

`nums = [1,2,3]`  
`indexDifference = 2`  
`valueDifference = 4`

**Output:**

`[-1,-1]`

**Explanation:**

Although indices `0` and `2` satisfy the index condition:

`|0 - 2| = 2 >= 2`

their values do not satisfy the value condition:

`|1 - 3| = 2 < 4`

Therefore, no valid pair exists.

---

## Approach

The given constraints are very small:

`1 <= nums.length <= 100`

Because of this, a **Br