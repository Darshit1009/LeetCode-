# Three Consecutive Odds

## 📌 Problem Statement

Given an integer array `arr`, determine whether there are **three consecutive odd numbers** in the array.

Return:

- `true` if three consecutive odd numbers exist.
- `false` otherwise.

---

## 💡 Approach

We maintain a counter `c` to keep track of the number of consecutive odd numbers.

### Algorithm

1. Initialize `c = 0`.
2. Traverse the array from left to right.
3. If the current number is odd:
   - Increment `c`.
   - If `c == 3`, return `true`.
4. If the current number is even:
   - Reset `c = 0`.
5. If the entire array is traversed without finding three consecutive odd numbers, return `false`.

---

## 🔍 Example

### Input

```text
arr = [1, 2, 34, 3, 4, 5, 7, 23, 12]