# 3099. Harshad Number

## Problem Statement

An integer is called a **Harshad Number** if it is perfectly divisible by the sum of its digits.

Given an integer `x`, return:

- The **sum of its digits** if `x` is a Harshad number.
- Otherwise, return **-1**.

---

## Examples

### Example 1

**Input**
```text
x = 18
```

**Output**
```text
9
```

**Explanation**

- Sum of digits = `1 + 8 = 9`
- `18` is divisible by `9`
- Therefore, `18` is a Harshad number, so the answer is `9`.

---

### Example 2

**Input**
```text
x = 23
```

**Output**
```text
-1
```

**Explanation**

- Sum of digits = `2 + 3 = 5`
- `23` is not divisible by `5`
- Therefore, `23` is not a Harshad number, so the answer is `-1`.

---

## Constraints

- `1 <= x <= 100`

---

## Approach

1. Calculate the sum of all digits of the given number.
2. Check whether the original number is divisible by this digit sum.
3. If it is divisible, return the digit sum.
4. Otherwise, return `-1`.

---

## Algorithm

1. Store the original value of the number.
2. Compute the sum of its digits.
3. Verify whether the original number is divisible by the computed sum.
4. Return the digit sum if divisible; otherwise, return `-1`.

---

## Complexity Analysis

- **Time Complexity:** `O(log₁₀ x)`
  - Each digit of the number is processed exactly once.

- **Space Complexity:** `O(1)`
  - Only constant extra space is required.

---

## Key Concepts

- Digit Sum
- Divisibility
- Number Theory
- Simulation

---

## Tags

- Math
- Number Theory
- Simulation
- Easy

---

⭐ If you found this explanation helpful, consider starring the repository!