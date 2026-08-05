# 3033. Modify the Matrix

## Problem Statement
You are given a **0-indexed** `m x n` integer matrix `matrix`.

- If an element is `-1`, replace it with the **maximum value in its column**.
- Return the modified matrix.

---

## Approach

1. Traverse each column of the matrix.
2. Find the maximum value in the current column.
3. Traverse the same column again.
4. Replace every `-1` with the column's maximum value.
5. Return the updated matrix.

---

## Algorithm

1. Iterate through every column.
2. Initialize `maxi` with the smallest possible integer.
3. Find the maximum element in that column.
4. Iterate through the column again.
5. Replace every `-1` with `maxi`.
6. Return the modified matrix.

---

## Time Complexity

- Finding maximum for each column: **O(m)**
- Replacing `-1` values: **O(m)**

For `n` columns:

**Overall Time Complexity:** `O(m × n)`

---

## Space Complexity

- No extra data structure is used.
- The matrix is modified in place.

**Space Complexity:** `O(1)`

---

## Example

### Input

```text
[
 [1, 2, -1],
 [4, -1, 6],
 [7, 8, 9]
]
```

### Output

```text
[
 [1, 2, 9],
 [4, 8, 6],
 [7, 8, 9]
]
```

### Explanation

- Column 0 → Maximum = 7 → No `-1`
- Column 1 → Maximum = 8 → Replace `-1` with `8`
- Column 2 → Maximum = 9 → Replace `-1` with `9`

Final matrix:

```text
[
 [1, 2, 9],
 [4, 8, 6],
 [7, 8, 9]
]
```

---

## Key Points

- Process one column at a time.
- Compute the column maximum before making replacements.
- Perform updates directly on the original matrix.
- Efficient solution with **O(m × n)** time and **O(1)** extra space.