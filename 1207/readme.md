# Unique Number of Occurrences

## Problem

Given an array of integers `arr`, determine whether the number of occurrences of each value is **unique**.

In other words, no two different values should appear the same number of times.

### Example

**Input:**

```text
arr = [1, 2, 2, 1, 1, 3]
```

**Frequencies:**

* `1 → 3`
* `2 → 2`
* `3 → 1`

All frequencies are different, so the answer is:

```text
true
```

## Approach

1. Use an `unordered_map` to count the frequency of every element.
2. Store the frequencies in a separate vector.
3. Sort the frequency vector.
4. Check adjacent frequencies:

   * If two consecutive frequencies are equal, return `false`.
   * Otherwise, return `true`.

## Complexity

* **Time Complexity:** `O(n + k log k)`

  * `n` = number of elements in the array
  * `k` = number of distinct elements
* **Space Complexity:** `O(k)`

## Example

```text
Input:
[1, 2, 2, 1, 1, 3]

Output:
true
```

## Key Concepts

* `unordered_map`
* Frequency counting
* `vector`
* Sorting
* Duplicate detection

## LeetCode

**Problem:** Unique Number of Occurrences

**Difficulty:** Easy

**Pattern:** Hash Map / Frequency Counting
