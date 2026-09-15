# LeetCode 35 - Search Insert Position

## Problem

Given a **sorted array of distinct integers** `nums` and an integer `target`, return the index if the target is found.

If the target is not found, return the index where it would be inserted so that the array remains sorted.

The algorithm must run in **O(log n)** time.

---

## Example

### Example 1

```text
Input:
nums = [1, 3, 5, 6]
target = 5

Output:
2
```

### Example 2

```text
Input:
nums = [1, 3, 5, 6]
target = 2

Output:
1
```

### Example 3

```text
Input:
nums = [1, 3, 5, 6]
target = 7

Output:
4
```

---

## Approach

This problem can be solved efficiently using **Binary Search**.

The array is already sorted, so instead of checking every element one by one, binary search repeatedly divides the search range into two halves.

Two pointers are maintained:

* `left` → beginning of the search range
* `right` → end of the search range

For each iteration:

* Find the middle position.
* If the middle element is smaller than the target, search the right half.
* Otherwise, search the left half, including the middle position.

When the search ends, `left` represents the position where the target is found or where it should be inserted.

---

## Algorithm

1. Initialize the left pointer at the beginning of the array.
2. Initialize the right pointer at the end boundary of the array.
3. Calculate the middle index.
4. Compare the middle element with the target.
5. If the middle element is smaller than the target, move to the right half.
6. Otherwise, move to the left half.
7. Continue until the search range becomes empty.
8. Return the final position of `left`.

---

## Complexity

* **Time Complexity:** `O(log n)`
* **Space Complexity:** `O(1)`

---

## Key Concept

**Binary Search**

This solution finds the **first position where the element is greater than or equal to the target**.

This is also known as finding the **lower bound** of the target.
