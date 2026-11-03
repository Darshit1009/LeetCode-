# 3736. Minimum Moves to Equal Array Elements III

**Difficulty:** Easy  
**Topics:** Array, Math  
**Platform:** [LeetCode](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/)

## Problem Statement

You are given an integer array `nums`.

In one move, you may increase the value of any single element `nums[i]` by 1.

Return the minimum total number of moves required so that all elements in `nums` become equal.

## Examples

**Example 1:**
```text
Input: nums = [2,1,3]
Output: 3
Explanation:
Increase 2 to 3 (1 move).
Increase 1 to 3 (2 moves).
Total moves = 3.
```

**Example 2:**
```text
Input: nums = [4,4,5]
Output: 2
Explanation:
Increase both 4s to 5.
Total moves = 2.
```

## Approach

1. Find the maximum element in the array.
2. Initialize a counter to store the total number of moves.
3. Traverse the array and compare each element with the maximum element.
4. Calculate the difference between the maximum element and the current element.
5. Add all differences to the counter.
6. Return the total number of moves.

## Complexity Analysis

- **Time Complexity:** O(N), where N is the number of elements in the array. Finding the maximum and traversing the array both take linear time.
- **Space Complexity:** O(1), as only a constant amount of extra space is used.

## Language Used

C++