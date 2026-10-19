# Find the Difference of Two Arrays

## Problem Statement

Given two integer arrays `nums1` and `nums2`, return a list `answer` of size 2 such that:

- `answer[0]` contains all distinct integers present in `nums1` but not in `nums2`.
- `answer[1]` contains all distinct integers present in `nums2` but not in `nums1`.

The integers can be returned in any order.

## Example 1

**Input:**
- `nums1 = [1, 2, 3]`
- `nums2 = [2, 4, 6]`

**Output:**
`[[1, 3], [4, 6]]`

**Explanation:**

- The elements `1` and `3` exist only in `nums1`.
- The elements `4` and `6` exist only in `nums2`.
- The element `2` is common to both arrays.

## Example 2

**Input:**
- `nums1 = [1, 2, 3, 3]`
- `nums2 = [1, 1, 2, 2]`

**Output:**
`[[3], []]`

**Explanation:**

- The distinct element `3` exists in `nums1` but not in `nums2`.
- Every element in `nums2` is present in `nums1`, so the second list is empty.

## Approach

1. Convert both arrays into sets to remove duplicate elements.
2. Create two empty vectors, `ans1` and `ans2`, to store the differences.
3. Iterate through the first set and check whether each element exists in the second set.
4. If an element is absent from the second set, add it to `ans1`.
5. Iterate through the second set and check whether each element exists in the first set.
6. If an element is absent from the first set, add it to `ans2`.
7. Return both vectors as a two-dimensional vector.

## Concepts Used

- Arrays and Vectors
- Sets (`std::set`)
- Duplicate Removal
- Set Membership Checking
- Iteration and Conditional Statements

## Complexity Analysis

Let `n` be the size of `nums1` and `m` be the size of `nums2`.

- **Time Complexity:** `O(n log n + m log m)` for constructing the sets, with additional membership checks taking up to `O((n + m) log(n + m))` in the worst case.
- **Space Complexity:** `O(n + m)` for storing the sets and result vectors.

## Key Learning

This problem demonstrates how sets can simplify finding distinct elements that are present in one array but absent from another. Using `std::set` automatically removes duplicates and allows efficient membership checks.

## Language

C++

## Difficulty

Easy
