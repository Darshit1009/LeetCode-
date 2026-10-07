# 162. Find Peak Element

## Problem

You are given an integer array `nums` where adjacent elements are different.

A **peak element** is an element that is strictly greater than its neighbors.

You need to return the **index of any peak element**.

For boundary elements, assume that the element outside the array is negative infinity.

If there are multiple peak elements, returning the index of any one of them is valid.

---

## Example 1

```text
Input:
nums = [1,2,3,1]

Output:
2
```

### Explanation

The element at index `2` is `3`.

```text
1 < 2 < 3 > 1
```

Therefore, `3` is a peak element.

---

## Example 2

```text
Input:
nums = [1,2,1,3,5,6,4]

Output:
5
```

### Explanation

There are multiple possible peak elements.

At index `1`:

```text
1 < 2 > 1
```

At index `5`:

```text
5 < 6 > 4
```

Both are valid peaks, so either index can be returned.

---

## Approach

The solution uses a **linear search** to find a peak element.

### 1. Handle a Single Element

If the array contains only one element, that element is automatically a peak.

For example:

```text
[5]
```

The answer is:

```text
0
```

---

### 2. Traverse the Array

Start checking the array from index `1`.

For every element, compare it with the element immediately before it.

If:

```text
nums[i] < nums[i-1]
```

then the previous element is greater than the current element.

At this point, the previous element can be considered a peak, so its index is returned.

---

### 3. Handle an Increasing Array

If no decreasing point is found during the traversal, it means the array is continuously increasing.

For example:

```text
[1,2,3,4,5]
```

Since every element is greater than the previous one, the last element is the peak.

Therefore, the last index is returned.

---

## Algorithm

1. If the array contains only one element, return index `0`.
2. Start traversing the array from index `1`.
3. Compare the current element with the previous element.
4. If the current element is smaller than the previous element, return the previous index.
5. If no such element is found, return the last index.

---

## Example Walkthrough

Consider:

```text
nums = [1,2,3,1]
```

Start from index `1`:

```text
2 < 1  → No
```

Move to index `2`:

```text
3 < 2  → No
```

Move to index `3`:

```text
1 < 3  → Yes
```

Therefore, index `2` is returned.

```text
[1, 2, 3, 1]
       ↑
      peak
```

---

## Why This Works

While traversing the array, if we encounter a point where the sequence changes from increasing to decreasing:

```text
... < nums[i-1] > nums[i]
```

then `nums[i-1]` is a peak.

If the sequence never decreases, it keeps increasing until the end:

```text
1 < 2 < 3 < 4 < 5
```

Therefore, the last element must be a peak.

This allows the solution to find a peak without checking both neighbors explicitly.

---

## Complexity Analysis

### Time Complexity

The array is traversed at most once.

```text
O(n)
```

### Space Complexity

Only a few variables are used and no additional data structure is required.

```text
O(1)
```

---

## Key Insight

The main idea is:

> **A peak can be found by detecting the first point where an increasing sequence starts decreasing. If the sequence never decreases, the last element is the peak.**

For example:

```text
1 → 2 → 3 → 1
        ↑
       Peak
```

---

## LeetCode Information

- **Problem:** 162. Find Peak Element
- **Difficulty:** Medium
- **Language:** C++
- **Topics:** Array