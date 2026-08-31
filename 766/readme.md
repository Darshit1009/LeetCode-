
# Toeplitz Matrix

## Problem Statement

Given an `m x n` matrix, determine whether the matrix is a **Toeplitz matrix**.

A matrix is called a Toeplitz matrix if every element is equal to the element diagonally down-right from it.

In other words:

```text
matrix[i][j] == matrix[i+1][j+1]
```

for all valid positions.

---

## Example

### Input

```text
1  2  3  4
5  1  2  3
9  5  1  2
```

### Output

```text
true
```

### Explanation

Every diagonal from the top-left to the bottom-right contains the same value.

For example:

```text
1 → 1 → 1
2 → 2 → 2
3 → 3
4
```

Therefore, the given matrix is a Toeplitz matrix.

---

## Approach

The main idea is to compare each element with the element immediately diagonally down-right.

For every position `(i, j)`:

```text
matrix[i][j] == matrix[i+1][j+1]
```

If any pair is different, the matrix is not a Toeplitz matrix.

If all valid pairs are equal, the matrix is a Toeplitz matrix.

---

## Algorithm

1. Find the number of rows and columns.
2. Traverse the matrix row by row.
3. Compare each element with its diagonally down-right element.
4. If any two corresponding elements are different, return `false`.
5. If all comparisons are equal, return `true`.

---

## Complexity Analysis

### Time Complexity

**O(m × n)**

The matrix is traversed once.

### Space Complexity

**O(1)**

No additional data structure is required.

---

## Key Learning

A Toeplitz matrix can be checked by comparing:

```text
matrix[i][j]
```

with:

```text
matrix[i+1][j+1]
```

This provides a simple and efficient solution without creating an additional 1D array.
