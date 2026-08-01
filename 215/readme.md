# 215. Kth Largest Element in an Array

## Problem Statement

Given an integer array `nums` and an integer `k`, return the **kth largest element** in the array.

> **Note:** It is the kth largest element in the sorted order, **not** the kth distinct element.

---

## Example 1

**Input**
```text
nums = [3,2,1,5,6,4], k = 2
```

**Output**
```text
5
```

**Explanation**

Sorted in descending order:

```text
[6, 5, 4, 3, 2, 1]
```

The **2nd largest** element is **5**.

---

## Example 2

**Input**
```text
nums = [3,2,3,1,2,4,5,5,6], k = 4
```

**Output**
```text
4
```

**Explanation**

Sorted in descending order:

```text
[6, 5, 5, 4, 3, 3, 2, 2, 1]
```

The **4th largest** element is **4**.

---

## Approach

1. Sort the array in **descending order**.
2. Return the element at index `k - 1`.

This works because sorting arranges the elements from largest to smallest, making the kth largest element easy to access.

---

## Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Sorting | **O(n log n)** |
| Access kth element | **O(1)** |
| **Overall Time Complexity** | **O(n log n)** |
| **Space Complexity** | **O(1)** (excluding the sorting algorithm's internal space) |

---

## Key Points

- The kth largest element is based on the **sorted order**.
- Duplicate values are counted.
- It is **not** the kth distinct element.

---

