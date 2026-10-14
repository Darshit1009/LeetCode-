# 1450. Number of Students Doing Homework at a Given Time

**Difficulty:** Easy  
**Topics:** Array  
**Platform:** LeetCode  
**Problem Link:** [1450. Number of Students Doing Homework at a Given Time](https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/)

## Problem Statement

Given two integer arrays, `startTime` and `endTime`, and an integer `queryTime`, determine the number of students doing their homework at the specified time.

The `i`th student starts homework at `startTime[i]` and finishes at `endTime[i]`.

A student is considered to be doing homework if `queryTime` lies within the inclusive interval `[startTime[i], endTime[i]]`.

Return the total number of students doing homework at `queryTime`.

## Examples

### Example 1

**Input:**
- `startTime = [1, 2, 3]`
- `endTime = [3, 2, 7]`
- `queryTime = 4`

**Output:** `1`

**Explanation:** Only the third student is doing homework at time 4 because their homework interval is from time 3 to time 7.

### Example 2

**Input:**
- `startTime = [4]`
- `endTime = [4]`
- `queryTime = 4`

**Output:** `1`

**Explanation:** The only student is doing homework at time 4. Both the starting and ending times are included in the interval.

## Approach

1. Initialize a counter to `0`.
2. Traverse the arrays to check each student's homework interval.
3. Check whether `queryTime` is greater than or equal to the student's start time and less than or equal to their end time.
4. If both conditions are satisfied, increment the counter.
5. Return the counter after checking all students.

## Complexity Analysis

- **Time Complexity:** `O(n)` — Each student's homework interval is checked once, where `n` is the number of students.
- **Space Complexity:** `O(1)` — Only a constant amount of additional space is used.

## Key Concepts Learned

- Array traversal
- Conditional statements
- Inclusive interval checking
- Counting elements that satisfy a condition
- Time and space complexity analysis

## Conclusion

This problem demonstrates how to use a simple linear traversal to count students who are doing homework at a specific time. By checking each student's start and end times, the problem can be solved efficiently in `O(n)` time with `O(1)` auxiliary space.

**LeetCode Status:** Solved  
**Language:** C++
