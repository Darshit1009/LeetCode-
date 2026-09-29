# LeetCode 3591 — Check if Any Element Has Prime Frequency

## Problem

Given an integer array `nums`, determine whether there exists at least one element whose **frequency in the array is a prime number**.

The frequency of an element is the number of times that element appears in `nums`.

Return:

* `true` if at least one element has a prime frequency.
* `false` otherwise.

---

## Example

### Example 1

**Input:**

```text
nums = [1, 2, 3, 4, 5, 4]
```

**Frequencies:**

| Element | Frequency |
| ------: | --------: |
|       1 |         1 |
|       2 |         1 |
|       3 |         1 |
|       4 |         2 |
|       5 |         1 |

Since `4` appears **2 times**, and `2` is a prime number:

**Output:**

```text
true
```

---

## Approach

The solution follows these steps:

1. Count the frequency of every element using a hash map.
2. Check whether any frequency is a prime number.
3. If a prime frequency is found, return `true`.
4. If no prime frequency exists, return `false`.

### Prime Number Check

A number is considered prime if:

* It is greater than `1`.
* It has no divisors other than `1` and itself.

For example:

```text
2 → Prime
3 → Prime
4 → Not Prime
5 → Prime
6 → Not Prime
7 → Prime
```

---

## Data Structure Used

### `unordered_map`

An `unordered_map` is used to store:

```text
Element → Frequency
```

For example:

```text
nums = [2, 2, 3, 3, 3]
```

The frequency map becomes:

```text
2 → 2
3 → 3
```

Both `2` and `3` are prime frequencies, so the result is `true`.

---

## Complexity Analysis

Let `n` be the number of elements in `nums`.

### Time Complexity

Frequency counting takes approximately:

```text
O(n)
```

Checking the frequencies using the prime-checking method takes additional time depending on the frequency values.

With the straightforward prime-checking implementation, the overall worst-case complexity can be approximately:

```text
O(n²)
```

### Space Complexity

The hash map stores the frequency of distinct elements:

```text
O(n)
```

---

## Key Concepts

* Arrays / Vectors
* Frequency Counting
* `unordered_map`
* Prime Number Checking
* Hashing
* Time and Space Complexity

---

## LeetCode

**Problem:** 3591. Check if Any Element Has Prime Frequency

**Difficulty:** Easy

**Platform:** LeetCode

---

## Conclusion

This problem demonstrates a common competitive-programming technique: **counting the frequency of elements using a hash map and then applying a mathematical condition to those frequencies**.

The important idea is to focus on the **frequency of each distinct element**, rather than checking the elements themselves.
