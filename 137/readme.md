# Single Number II

## Problem Description

Given an integer array `nums`, every element appears exactly three times except for one element, which appears exactly once.

The task is to find and return the element that appears only once.

## Example

### Input

Array: `[2, 2, 3, 2]`

### Output

`3`

The number `2` appears three times, while `3` appears only once.

## Approach

1. Store the frequency of each element in a map.
2. Traverse the array and count how many times each number appears.
3. Traverse the array again.
4. Find the element whose frequency is exactly `1`.
5. Return that element.

## Complexity Analysis

### Time Complexity

**O(n log n)**

A map is used to store frequencies, and each map operation takes logarithmic time.

### Space Complexity

**O(n)**

The frequency map can contain up to `n` different elements.

## Key Concept

The main concept used in this approach is **frequency counting**.

Since every number appears exactly three times except one number, the number having a frequency of `1` is the required answer.

## Example Explanation

For the array:

`[2, 2, 3, 2]`

The frequencies are:

* `2` → 3 times
* `3` → 1 time

Therefore, the single number is **3**.

## LeetCode Information

* **Problem:** 137. Single Number II
* **Difficulty:** Medium
* **Topic:** Array, Bit Manipulation
* **Language:** C++
* **Approach:** Frequency Map
