# LeetCode 2500 – Delete Greatest Value in Each Row

## Problem Description

You are given an `m x n` integer matrix `grid`.

For each operation:

1. Find the greatest value in each row.
2. Remove that greatest value from every row.
3. Among the removed values, find the greatest one.
4. Add that value to the answer.

Repeat these steps until the matrix becomes empty.

Return the final sum.

### Example

**Input:**

```text
grid = [[1,2,4],
        [3,3,1]]
```

After sorting each row:

```text
[1,2,4]
[1,3,3]
```

Operations:

* Remove `4` and `3` → maximum = `4`
* Remove `2` and `3` → maximum = `3`
* Remove `1` and `1` → maximum = `1`

Final answer:

```text
4 + 3 + 1 = 8
```

## Approach

The solution follows these steps:

1. Continue while the rows contain elements.
2. Sort every row.
3. Since the row is sorted, the greatest element is at the back.
4. Store the greatest value of each row and find the maximum among them.
5. Remove the last element from every row using `pop_back()`.
6. Add the maximum removed value to `sum`.
7. Repeat until all elements are removed.

## Why Sorting Works

After sorting a row in ascending order:

```text
[1, 2, 4]
```

The greatest element is always the last element:

```text
4
```

Therefore, after finding the maximum value of the current row, `pop_back()` removes that greatest element.

## Complexity Analysis

Let the matrix have `m` rows and `n` columns.

* Sorting each row: `O(n log n)`
* Sorting all rows: `O(m × n log n)`
* Removing elements over all operations: `O(m × n)`
* Finding the maximum of each row: `O(m × n)`

### Overall Time Complexity

```text
O(m × n log n)
```

### Space Complexity

```text
O(1)
```

apart from the input matrix, which is modified directly.

## Key Concepts

* 2D Vectors
* Sorting
* `max_element()`
* `pop_back()`
* Matrix traversal
* Greedy approach

## LeetCode

**Problem:** 2500. Delete Greatest Value in Each Row

**Difficulty:** Easy

**Language:** C++
