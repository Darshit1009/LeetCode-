# LeetCode 561 - Array Partition

## Problem

Given an integer array `nums` of `2n` integers, group these integers into `n` pairs:

`(a1, b1), (a2, b2), ..., (an, bn)`

The goal is to maximize:

`min(a1, b1) + min(a2, b2) + ... + min(an, bn)`

Return the maximum possible sum.

---

## Example

### Input

```text
nums = [1,4,3,2]
```

### Output

```text
4
```

### Explanation

After sorting:

```text
[1,2,3,4]
```

Pair the elements as:

```text
(1,2) and (3,4)
```

The minimum of each pair is:

```text
min(1,2) = 1
min(3,4) = 3
```

Therefore:

```text
1 + 3 = 4
```

---

## Approach

The key idea is to **sort the array** first.

After sorting, the optimal strategy is to pair adjacent elements:

```text
[1, 2, 3, 4, 5, 6]
 ↓  ↓
(1,2) (3,4) (5,6)
```

For every pair, the smaller element is the first element.

So we simply add:

```text
nums[0] + nums[2] + nums[4] + ...
```

This maximizes the sum of the minimum values of all pairs.

---

## Algorithm

1. Check if the array is empty.
2. Sort the array in ascending order.
3. Start from index `0`.
4. Add every alternate element to the answer.
5. Return the calculated sum.

---

## Complexity Analysis

* **Time Complexity:** `O(n log n)`
  Sorting the array takes `O(n log n)`.

* **Space Complexity:** `O(1)` auxiliary space
  Apart from the sorting implementation's internal stack/space.

---

## Key Concept

**Sorting + Greedy**

By sorting the numbers and pairing adjacent elements, we ensure that each selected minimum is as large as possible while still forming valid pairs.

---

## LeetCode

**Problem:** 561 - Array Partition

**Difficulty:** Easy

**Topics:**

* Array
* Sorting
* Greedy
