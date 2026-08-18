# Replace Elements with Greatest Element on Right Side

## Problem

Given an array `arr`, replace every element with the **greatest element among the elements to its right**.

For the last element, there is no element to its right, so replace it with `-1`.

## Complexity

### Time Complexity

The outer loop runs `n` times and the inner loop can also run up to `n` times.

**Time:** `O(n²)`

### Space Complexity

No extra array is used.

**Space:** `O(1)`

## Key Point

The solution modifies the original array **in-place**, but it can be optimized to `O(n)` time by traversing the array from **right to left** and maintaining the maximum element seen so far.
