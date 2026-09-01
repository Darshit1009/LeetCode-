# LeetCode 2679 — Sum in a Matrix

## Problem Description

Given an `m x n` integer matrix `nums`, perform the following operation until the matrix becomes empty:

1. Sort each row in non-decreasing order.
2. Remove the last element from each row.
3. Find the largest value among the removed elements.
4. Add this value to the answer.

Return the total sum.

### LeetCode

**Problem:** 2679. Sum in a Matrix

## Example

### Input

```text
nums = [
    [7, 2, 1],
    [6, 4, 2],
    [6, 5, 3],
    [3, 2, 1]
]
```

### Step 1 — Sort Each Row

```text
[1, 2, 7]
[2, 4, 6]
[3, 5, 6]
[1, 2, 3]
```

### Step 2 — Remove the Largest Element

First round:

```text
7, 6, 6, 3
Maximum = 7
```

Second round:

```text
2, 4, 5, 2
Maximum = 5
```

Third round:

```text
1, 2, 3, 1
Maximum = 3
```

Therefore:

```text
7 + 5 + 3 = 15
```

### Output

```text
15
```

## Approach

The solution follows these steps:

1. Sort every row in ascending order.
2. Since the largest element is now at the end of each row, use `pop_back()` to remove it.
3. For every round, find the maximum removed value across all rows.
4. Add that maximum value to `sum`.
5. Continue until all elements have been removed.

## Algorithm

```text
Sort every row.

Initialize sum = 0.

While the matrix still contains elements:
    Set fin = smallest possible integer.

    For every row:
        Find its largest element.
        Update fin with the largest value.
        Remove the largest element.

    Add fin to sum.

Return sum.
```

## Time Complexity

Let:

* `m` = number of rows
* `n` = number of columns

Sorting every row takes:

```text
O(m × n log n)
```

For every column, `max_element()` scans each row, giving:

```text
O(m × n²)
```

Therefore, the overall time complexity is:

```text
O(m × n log n + m × n²)
```

## Space Complexity

No significant extra data structure is used.

```text
O(1)
```

The input matrix is modified during the process.

## Key Concepts

* 2D Vector
* Sorting
* `sort()`
* `max_element()`
* `pop_back()`
* Matrix traversal
* Maximum element
* Time and Space Complexity

## Language

**C++**

## LeetCode Problem

**2679 — Sum in a Matrix**
