# 1572. Matrix Diagonal Sum

## 📌 Problem Statement

Given a **square matrix** `mat`, return the **sum of the matrix diagonals**.

Only count the value once if an element belongs to both the primary and secondary diagonals.

---

## 🧠 Approach

The matrix has two diagonals:

- **Primary Diagonal:** `mat[i][i]`
- **Secondary Diagonal:** `mat[i][n - i - 1]`

### Steps

1. Traverse the primary diagonal and add each element to the sum.
2. Traverse the secondary diagonal and add each element to the sum.
3. If the matrix size is odd, the center element gets counted twice.
4. Subtract the center element once to avoid double counting.
5. Return the final sum.

---

## Algorithm

1. Initialize `sum = 0`.
2. Traverse the primary diagonal.
3. Traverse the secondary diagonal.
4. If `n` is odd:
   - Subtract the center element `mat[n/2][n/2]`.
5. Return `sum`.

---

## Dry Run

### Input

```text
mat =
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
]
```

### Primary Diagonal

```text
1 + 5 + 9 = 15
```

### Secondary Diagonal

```text
3 + 5 + 7 = 15
```

### Center Element

```text
5 is counted twice
```

### Final Sum

```text
15 + 15 - 5 = 25
```

### Output

```text
25
```

---

## Time Complexity

```text
O(n)
```

Two traversals of the diagonals, each taking `n` operations.

---

## Space Complexity

```text
O(1)
```

Only a few extra variables are used.

---

## Edge Cases

- Matrix of size `1 × 1`
- Even-sized matrices (no overlapping element)
- Odd-sized matrices (center element counted once)
- Negative values in the matrix

---

## Key Concepts

- Matrix Traversal
- Primary Diagonal
- Secondary Diagonal
- Conditional Handling for Odd-Sized Matrix

---

## Example

### Input

```text
mat = [[5]]
```

### Output

```text
5
```

---

## Topics 

- Array
- Mid Level
- Matrix
- Biweekly Contest 34
```