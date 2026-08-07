# Lucky Numbers in a Matrix

## Problem Statement

Given an `m x n` matrix of distinct numbers, return all **lucky numbers** in the matrix.

A **lucky number** is an element that is:

- The **minimum** element in its row.
- The **maximum** element in its column.

---

## Approach

The solution follows these steps:

1. Traverse each row of the matrix.
2. Find the minimum element in the current row.
3. Locate the column where this minimum element exists.
4. Find the maximum element in that column.
5. If the row minimum is equal to the column maximum, it is a lucky number.
6. Store the lucky number in the answer vector.
7. Return the final list of lucky numbers.

---

## Algorithm

1. Initialize an empty vector `ans`.
2. For each row:
   - Find the minimum element using `min_element()`.
   - Find the column index of that minimum.
   - Traverse the column to determine its maximum element.
   - If both values are equal, add it to `ans`.
3. Return `ans`.

---

## Complexity Analysis

- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(1)` (excluding the output vector)

where:

- `m` = Number of rows
- `n` = Number of columns

---

## Example

### Input

```text
matrix =
[
  [3, 7, 8],
  [9,11,13],
  [15,16,17]
]
```

### Output

```text
15
```

### Explanation

- Row minimums:
  - Row 1 → 3
  - Row 2 → 9
  - Row 3 → 15

- Column maximums:
  - Column 1 → 15
  - Column 2 → 16
  - Column 3 → 17

Only **15** is both the minimum in its row and the maximum in its column.

---

## C++ Solution

```cpp
class Solution
{
public:
    int findMINI(vector<vector<int>> matrix, int j)
    {
        int max = INT_MIN;

        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }

        return max;
    }

    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;

        for (int i = 0; i < matrix.size(); i++)
        {
            int min = *min_element(matrix[i].begin(), matrix[i].end());

            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == min)
                {
                    int max = findMINI(matrix, j);

                    if (min == max)
                    {
                        ans.push_back(min);
                    }
                }
            }
        }

        return ans;
    }
};
```

---

## Key Concepts

- Matrix Traversal
- Row Minimum
- Column Maximum
- STL `min_element()`
- Arrays
- Simulation
```