# 3940. Limit Occurrences in Sorted Array

## Problem
Given a sorted integer array `nums` and an integer `k`, return an array in which each distinct element appears at most `k` times while preserving the relative order of elements.

If an element appears at least `k` times, it must appear exactly `k` times in the resulting array.

## Examples

**Example 1:**
- Input: `nums = [1,1,1,2,2,3], k = 2`
- Output: `[1,1,2,2,3]`

**Example 2:**
- Input: `nums = [1,2,3], k = 1`
- Output: `[1,2,3]`

## Constraints
- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.
- `1 <= k <= nums.length`

## Approach
- Count the frequency of each distinct element using a hash map.
- Traverse the original array to maintain the relative order.
- Use a visited map to process each distinct element only once.
- Insert each element exactly `k` times if its frequency is at least `k`; otherwise, insert all its occurrences.

## Complexity Analysis
- **Time Complexity:** O(n), where n is the length of the array.
- **Space Complexity:** O(n) for the frequency and visited maps and the resulting array.

## Key Concepts
- Hash Map
- Frequency Counting
- Relative Order Preservation
- Array Traversal