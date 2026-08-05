# Row and Maximum Ones in Matrix

## Problem Statement
Given a binary matrix `mat` of size `m x n`, find:

1. The index of the row containing the maximum number of `1`s.
2. The maximum number of `1`s present in that row.

If multiple rows have the same maximum number of `1`s, return the row with the smallest index.

---

## Approach

- Traverse each row of the matrix.
- Count the number of `1`s in the current row.
- Compare the current count with the maximum count found so far.
- If the current row has more `1`s, update:
  - Maximum count
  - Row index
- Return the result as a vector containing:
  - Row index
  - Maximum number of `1`s

---

## Algorithm

1. Initialize:
   - `count = -1`
   - `row = -1`
2. Traverse every row.
3. Count the number of `1`s in that row.
4. If the count is greater than the current maximum:
   - Update `count`
   - Update `row`
5. Return `{row, count}`.

---

## Time Complexity

- **O(m × n)**

where:
- `m` = Number of rows
- `n` = Number of columns

---

## Space Complexity

- **O(1)**

Only a few extra variables are used (excluding the output vector).

---

## Example

### Input

```cpp
mat = {
    {0, 0, 1},
    {0, 1, 1}
};
```

### Output

```text
1 2
```

### Explanation

| Row Index | Number of 1's |
|-----------|---------------|
| 0 | 1 |
| 1 | 2 |

Row **1** contains the maximum number of `1`s (`2`).

Therefore, the output is:

```cpp
{1, 2}
```

---


## Output

```text
12
```

**Meaning:**

- **1** → Row index with the maximum number of `1`s.
- **2** → Maximum number of `1`s in that row.

---

## Key Concepts Used

- 2D Vectors
- Nested Loops
- Counting Frequency
- Matrix Traversal
- Simulation
- Arrays
- Greedy Update of Maximum

---

## Note

The comparison inside the inner loop works correctly because the count only increases while traversing the row. However, it is generally cleaner to compare `countOne` with `count` **after finishing the row traversal**, making the logic easier to understand and maintain.