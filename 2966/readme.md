# 2966. Divide Array Into Arrays With Max Difference

## Problem

You are given an integer array `nums` of size `n`, where `n` is a multiple of `3`, and a positive integer `k`.

The task is to divide `nums` into `n / 3` arrays, where each array contains exactly **3 elements**.

For every group, the difference between **any two elements** must be less than or equal to `k`.

If it is impossible to create such a division, return an empty array.

If multiple valid divisions are possible, any valid division can be returned.

---

## Example 1

```text
Input:
nums = [1,3,4,8,7,9,3,5,1]
k = 2

Output:
[[1,1,3],[3,4,5],[7,8,9]]
```

### Explanation

For each group, the difference between the largest and smallest elements is at most `2`.

```text
[1,1,3] → 3 - 1 = 2
[3,4,5] → 5 - 3 = 2
[7,8,9] → 9 - 7 = 2
```

Therefore, the division is valid.

---

## Example 2

```text
Input:
nums = [2,4,2,2,5,2]
k = 2

Output:
[]
```

### Explanation

There are four occurrences of `2`.

No matter how the elements are divided into two groups of three, one group will contain both `2` and `5`.

```text
5 - 2 = 3
```

Since:

```text
3 > 2
```

the condition is violated.

Therefore, no valid division is possible.

---

## Example 3

```text
Input:
nums = [4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11]
k = 14

Output:
[[2,2,2],[4,5,5],[5,5,7],[7,8,8],[9,9,10],[11,12,12]]
```

Every group satisfies the required maximum difference condition.

---

## Approach

The solution uses **sorting** followed by **greedy grouping**.

### 1. Sort the Array

First, sort `nums` in ascending order.

For Example 1:

```text
Original:
[1,3,4,8,7,9,3,5,1]

Sorted:
[1,1,3,3,4,5,7,8,9]
```

Sorting places smaller and larger values in an ordered sequence.

---

### 2. Create Groups of Three

After sorting, divide the array into consecutive groups of three:

```text
[1,1,3]
[3,4,5]
[7,8,9]
```

Since each group is sorted, the first element is the minimum and the last element is the maximum.

---

### 3. Check the Difference

For each group:

```text
[a,b,c]
```

the largest possible difference between any two elements is:

```text
c - a
```

Therefore, we only need to check:

```text
maximum - minimum <= k
```

For example:

```text
[3,4,5]

5 - 3 = 2
```

If `k = 2`, this group is valid.

If any group has:

```text
maximum - minimum > k
```

then a valid division is impossible, so we return an empty array.

---

## Why Sorting Works

Sorting is the key idea of this solution.

After sorting, consecutive elements are the closest possible elements to each other. Therefore, grouping consecutive elements into sets of three gives us a valid greedy strategy.

For example:

```text
Sorted array:

1  1  3  3  4  5  7  8  9
|-----|  |-----|  |-----|
 Group     Group     Group
```

If any group fails the condition, there cannot be a valid arrangement that fixes that group by rearranging the elements.

---

## Algorithm

1. Sort the array in ascending order.
2. Divide the sorted array into consecutive groups of 3.
3. For every group:
   - Take the first element as the minimum.
   - Take the last element as the maximum.
   - Check whether `maximum - minimum <= k`.
4. If any group violates the condition, return an empty array.
5. Otherwise, return all the groups.

---

## Complexity Analysis

Let `n` be the number of elements in `nums`.

### Time Complexity

Sorting the array requires:

```text
O(n log n)
```

Creating the groups and checking the conditions requires:

```text
O(n)
```

Therefore, the overall time complexity is:

```text
O(n log n)
```

### Space Complexity

The result contains all `n` elements divided into groups of three:

```text
O(n)
```

---

## Key Insight

The important observation is:

> After sorting the array, the maximum difference inside each group of three is simply the difference between the last and first elements.

So for every group:

```text
[a, b, c]
```

we only need to verify:

```text
c - a <= k
```

This makes the problem a simple combination of **sorting + greedy grouping**.

---

## LeetCode Information

- **Problem:** 2966. Divide Array Into Arrays With Max Difference
- **Difficulty:** Medium
- **Contest:** Weekly Contest 376
- **Language:** C++
- **Topics:** Array, Greedy, Sorting

