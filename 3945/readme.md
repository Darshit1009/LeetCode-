# Digit Frequency Score

## Problem Statement

Given an integer `n`, calculate its **digit frequency score**.

The score is computed by:

1. Count the frequency of each digit (0–9) in the number.
2. Multiply each digit by its frequency.
3. Return the sum of all these products.

---

## Example

### Example 1

**Input**

```text
n = 122
```

**Explanation**

- Digit `1` appears `1` time → `1 × 1 = 1`
- Digit `2` appears `2` times → `2 × 2 = 4`

Total Score:

```text
1 + 4 = 5
```

**Output**

```text
5
```

---

### Example 2

**Input**

```text
n = 9990
```

**Explanation**

- Digit `9` appears `3` times → `9 × 3 = 27`
- Digit `0` appears `1` time → `0 × 1 = 0`

Total Score:

```text
27
```

**Output**

```text
27
```

---

## Approach

- Create a frequency array of size `10`.
- Traverse the digits of the number using modulo (`% 10`) and division (`/ 10`).
- Count the occurrences of each digit.
- Iterate through the frequency array and calculate:

```
score += digit × frequency
```

- Return the final score.

---

## Algorithm

1. Initialize a frequency array of size `10` with zeros.
2. Extract each digit using `n % 10`.
3. Increment the corresponding frequency.
4. Remove the last digit using `n /= 10`.
5. Compute the score by summing:

```
digit × frequency[digit]
```

6. Return the score.

---

## Complexity Analysis

- **Time Complexity:** `O(log n)`
  - The number is processed once digit by digit.

- **Space Complexity:** `O(1)`
  - Only a fixed-size array of 10 elements is used.

---

