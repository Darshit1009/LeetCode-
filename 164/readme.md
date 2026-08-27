# Maximum Gap

## Problem

Given an integer array `nums`, find the **maximum difference between two successive elements** after sorting the array.

If the array contains fewer than 2 elements, return `0`.

## Approach

1. Check if the array has only one element. If yes, return `0`.
2. Sort the array in ascending order.
3. Calculate the difference between the first two elements.
4. Traverse the sorted array from index `2`.
5. For every adjacent pair, calculate the difference.
6. Keep the maximum difference found.
7. Return the maximum difference.

## Example

### Input

```text
nums = [1, 2, 3, 4]
```

After sorting:

```text
[1, 2, 3, 4]
```

Adjacent differences:

```text
2 - 1 = 1
3 - 2 = 1
4 - 3 = 1
```

Maximum gap:

```text
1
```

### Output

```text
1
```
## Complexity Analysis

### Time Complexity

Sorting takes:

```text
O(n log n)
```

The loop takes:

```text
O(n)
```

Therefore:

```text
O(n log n)
```

### Space Complexity

The sorting algorithm uses auxiliary space depending on the implementation, while the solution itself uses constant extra variables.

Overall:

```text
O(1) auxiliary space
```

## Key Concept

The important observation is:

> After sorting, the maximum gap can only occur between two adjacent elements.

For example:

```text
[3, 6, 10, 15]

Gaps:
6 - 3  = 3
10 - 6 = 4
15 - 10 = 5

Maximum Gap = 5
```
