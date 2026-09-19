# LeetCode 2574 - Left and Right Sum Differences

## Problem

Given an integer array `nums`, create an array `answer` where `answer[i]` is the absolute difference between the sum of elements to the left of index `i` and the sum of elements to the right of index `i`.

For the first element, the left sum is `0`.

For the last element, the right sum is `0`.

## Example

### Input

```text
nums = [10, 4, 8, 3]
```

### Output

```text
[15, 1, 11, 22]
```

### Explanation

| Index | Left Sum | Right Sum | Difference |
| ----: | -------: | --------: | ---------: |
|     0 |        0 |        15 |         15 |
|     1 |       10 |        11 |          1 |
|     2 |       14 |         3 |         11 |
|     3 |       22 |         0 |         22 |

## Approach

The solution calculates two separate sums for every index:

* **Left Sum:** Sum of all elements before the current index.
* **Right Sum:** Sum of all elements after the current index.
* The absolute difference between these two sums is stored in the result.

The solution uses separate arrays to store the left and right sums before calculating the final differences.

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)`

The array is traversed a constant number of times, so the overall time complexity is linear.

## Key Concepts

* Arrays
* Prefix Sum
* Suffix Sum
* Array Traversal
* Absolute Difference

## LeetCode

**Problem:** [2574. Left and Right Sum Differences](https://leetcode.com/problems/left-and-right-sum-differences/)

**Difficulty:** Easy
