# LeetCode 2133 — Check if Every Row and Column Contains All Numbers

## Problem

Given an `n × n` matrix, determine whether every row and every column contains all integers from `1` to `n`.

Return `true` if the matrix is valid; otherwise, return `false`.

### Example

```text
Input:
[
    [1, 2, 3],
    [3, 1, 2],
    [2, 3, 1]
]

Output:
true
```

Every row and every column contains `1`, `2`, and `3` exactly once.

---

## Approach

The solution creates a reference vector containing:

```text
[1, 2, 3, ..., n]
```

Then it performs two checks.

### 1. Check Every Row

For each row:

1. Copy the row into a temporary vector.
2. Sort the temporary vector.
3. Compare it with `[1, 2, ..., n]`.
4. If they are different, return `false`.

A temporary vector is used so that the original matrix is **not modified**.

### 2. Check Every Column

For each column:

1. Copy all elements of the column into a temporary vector.
2. Sort the temporary vector.
3. Compare it with `[1, 2, ..., n]`.
4. If they are different, return `false`.

If all rows and columns are valid, return `true`.

---

## Why It Works

For a valid `n × n` matrix, every row and column must contain:

```text
1, 2, 3, ..., n
```

After sorting, a valid row or column will always become exactly:

```text
[1, 2, 3, ..., n]
```

Therefore, comparing every sorted row and column with the reference vector verifies the matrix.

---

## Complexity

Let `n` be the size of the matrix.

### Time Complexity

* Sorting each row: `O(n log n)`
* Sorting `n` rows: `O(n² log n)`
* Sorting each column: `O(n log n)`
* Sorting `n` columns: `O(n² log n)`

Overall:

```text
O(n² log n)
```

### Space Complexity

Temporary vectors contain at most `n` elements:

```text
O(n)
```

---

## Key Point

Do **not** sort the original rows directly:

```cpp
sort(matrix[i].begin(), matrix[i].end());
```

because this modifies the matrix and can make the later column check incorrect.

Instead, copy the row into a temporary vector, then sort the copy.
---
## LeetCode

**Problem:** 2133 — Check if Every Row and Column Contains All Numbers

**Difficulty:** Medium

**Topics:** Array, Matrix, Sorting
