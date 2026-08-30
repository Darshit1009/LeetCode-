# Minimum Deletions to Remove Minimum and Maximum

## Problem Description

Given an integer array `nums`, find the minimum number of deletions required to remove both the **minimum** and **maximum** elements from the array.

In one deletion, an element can be removed from either:

* The beginning of the array
* The end of the array

The goal is to find the minimum number of deletions needed.

---

## Approach

The solution first finds the minimum and maximum values in the array and then finds their indices.

There are four possible ways to remove both elements:

### 1. Remove both from the left

Remove elements from the beginning until both the minimum and maximum elements are removed.

The number of deletions depends on whichever element is farther from the beginning.

### 2. Remove maximum from the left and minimum from the right

Remove the maximum element by deleting elements from the beginning and remove the minimum element by deleting elements from the end.

### 3. Remove minimum from the left and maximum from the right

This is the opposite of the previous case.

The minimum is removed from the beginning, while the maximum is removed from the end.

### 4. Remove both from the right

Remove elements from the end until both the minimum and maximum elements are removed.

---

## Decision

The solution calculates the number of deletions required for all four possibilities and chooses the smallest value.

In simple terms:

```text
Both from left
        ↓
Maximum from left + Minimum from right
        ↓
Minimum from left + Maximum from right
        ↓
Both from right
        ↓
Choose minimum
```

---

## Example

### Input

```text
[2, 10, 7, 5, 4, 1, 8, 6]
```

Minimum element:

```text
1
```

Maximum element:

```text
10
```

Their positions determine how many elements need to be removed from the left or right.

After calculating all four possible strategies, the minimum number of deletions is:

```text
5
```

### Output

```text
5
```

---

## Edge Case

If the array contains only one element, that element is both the minimum and maximum.

Therefore, only **one deletion** is required.

---

## Complexity Analysis

### Time Complexity

The array is traversed to find the minimum, maximum, and their positions.

```text
O(n)
```

### Space Complexity

Only a constant number of variables are used.

```text
O(1)
```

---

## Key Concept

The main idea is to consider the **four possible deletion strategies**:

1. Both elements from the left
2. Maximum from left and minimum from right
3. Minimum from left and maximum from right
4. Both elements from the right

Calculate all four possibilities and return the smallest number of deletions.
