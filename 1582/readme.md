# Number of Special Positions in a Binary Matrix

## Problem Statement

Given an `m x n` binary matrix `mat`, return the number of **special positions**.

A position `(i, j)` is considered **special** if:

- `mat[i][j] == 1`
- Every other element in row `i` is `0`.
- Every other element in column `j` is `0`.

---

## Approach

The solution follows these steps:

1. Traverse each row of the matrix.
2. Count the number of `1`s in the current row.
3. If exactly one `1` exists:
   - Store its column index.
   - Traverse that column and count the number of `1`s.
4. If the column also contains exactly one `1`, increment the answer.
5. Return the total count of special positions.

---

## Algorithm

1. Initialize `sum = 0`.
2. For every row:
   - Count the number of `1`s.
   - Store the column index of the `1`.
3. If the row contains exactly one `1`:
   - Count the number of `1`s in that column.
   - If the count is also `1`, increment `sum`.
4. Return `sum`.

---

## Complexity Analysis

- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(1)`

where:
- `m` = Number of rows
- `n` = Number of columns

---

## Example

### Input

```text
mat =
[
  [1,0,0],
  [0,1,0],
  [0,0,1]
]
```

### Output

```text
3
```

### Explanation

Each row contains exactly one `1`, and each corresponding column also contains exactly one `1`.

Special positions are:

- `(0,0)`
- `(1,1)`
- `(2,2)`

Hence, the answer is **3**.

---

## C++ Solution

```cpp
class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int c = 0;
        int sum = 0;
        int idx = -1;

        for (int i = 0; i < mat.size(); i++)
        {
            c = 0;

            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    c++;
                    idx = j;
                }
            }

            if (c == 1)
            {
                int cnt = 0;

                for (int jk = 0; jk < mat.size(); jk++)
                {
                    if (mat[jk][idx] == 1)
                    {
                        cnt++;
                    }
                }

                if (cnt == c)
                {
                    sum += cnt;
                }
            }
        }

        return sum;
    }
};
```

---

## Key Concepts

- Matrix Traversal
- Row and Column Counting
- Simulation
- Binary Matrix
- Arrays