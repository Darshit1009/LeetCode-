# 🔢 LeetCode 2614 — Prime In Diagonal

## 📌 Problem

**LeetCode Problem:** 2614
**Title:** Prime In Diagonal
**Difficulty:** Easy
**Topics:** Array, Matrix, Number Theory

---

## 📝 Problem Description

You are given a square matrix `nums` of size `n × n`.

A number is considered a **diagonal element** if it appears on either:

* The **main diagonal** — from the top-left corner to the bottom-right corner.
* The **secondary diagonal** — from the top-right corner to the bottom-left corner.

The task is to find the **largest prime number** among all the diagonal elements.

If there is no prime number on either diagonal, return `0`.

> Note: The same element can belong to both diagonals, but considering it more than once does not affect the final maximum.

---

## 💡 Approach

The solution follows these steps:

1. Traverse the **main diagonal** using the condition:

   * Row index = column index.
2. Check whether each diagonal element is prime.
3. Traverse the **secondary diagonal**:

   * Start from the top-right corner.
   * Move one row down and one column left at every step.
4. Check each diagonal element for primality.
5. Store all prime diagonal elements.
6. Return the largest prime using the maximum element.
7. If no prime is found, return `0`.

---

## 🔍 Prime Number Checking

A number is prime if it has exactly two positive divisors:

* `1`
* The number itself

Instead of checking every number from `2` to `n - 1`, the solution checks divisibility only up to:

**√n**

This is sufficient because if a number has a factor greater than √n, it must have a corresponding factor smaller than √n.

### Example

For `29`:

* Check `2`
* Check `3`
* Check `4`
* Check `5`

Since no number divides `29`, it is prime.

---

## 📊 Example

### Input

```text
[
  [1, 2, 3],
  [5, 6, 7],
  [9, 10, 11]
]
```

### Diagonal Elements

**Main diagonal:**

```text
1, 6, 11
```

**Secondary diagonal:**

```text
3, 6, 9
```

Prime numbers:

```text
3, 11
```

### Output

```text
11
```

---

## ⏱️ Complexity Analysis

Let:

* `n` = dimension of the square matrix
* `M` = maximum value in the matrix

### Time Complexity

There are `2n` diagonal elements to check, and each primality check takes:

```text
O(√M)
```

Therefore:

```text
O(n√M)
```

### Space Complexity

The solution stores the prime diagonal elements in a vector.

In the worst case, there can be `2n` stored elements:

```text
O(n)
```

---

## 🧠 Key Concepts

* Two-dimensional vectors
* Matrix diagonals
* Prime number detection
* Square root optimization
* `max_element`
* Array traversal

---

## ⚠️ Important Edge Cases

The solution handles:

* Matrix containing no prime numbers → returns `0`
* Prime number equal to `2`
* Values equal to `1`
* Values less than or equal to `1`
* Prime numbers appearing on both diagonals
* Prime numbers located at the center of an odd-sized matrix

---

## 🎯 Key Learning

The main optimization in this problem is the **prime-checking function**.

Checking every number up to `n` can be unnecessarily slow.

Checking only up to `√n` reduces the work significantly and avoids unnecessary iterations.

---

## 🔗 LeetCode

**Problem:** Prime In Diagonal
**LeetCode #2614**

[View Problem on LeetCode](https://leetcode.com/problems/prime-in-diagonal/?utm_source=chatgpt.com)
