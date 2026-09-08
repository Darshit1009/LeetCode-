# Difference Between Ones and Zeros in Row and Column

## Problem

Given a binary matrix `grid`, create a difference matrix where each cell is calculated using the number of `1`s and `0`s in its corresponding row and column.

For every cell `(i, j)`:

**diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j]**

Where:

* `onesRow[i]` = Number of `1`s in row `i`
* `onesCol[j]` = Number of `1`s in column `j`
* `zerosRow[i]` = Number of `0`s in row `i`
* `zerosCol[j]` = Number of `0`s in column `j`

This problem is **LeetCode 2482**.

## Approach

The solution uses four arrays to store the number of `1`s and `0`s in every row and column.

### Step 1: Count Ones and Zeros in Each Row

Traverse every element of the matrix.

For each row:

* If the value is `1`, increment the corresponding `onerow`.
* If the value is `0`, increment the corresponding `zerorow`.

### Step 2: Count Ones and Zeros in Each Column

Traverse the matrix column by column.

For each column:

* If the value is `1`, increment `onecol`.
* If the value is `0`, increment `zerocol`.

### Step 3: Calculate the Difference

For every cell `(i, j)`, calculate:

`onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j]`

The calculated value is stored directly in the original matrix.

### Step 4: Return the Matrix

After processing all cells, the modified matrix is returned as the answer.

## Example

### Input

```text
0 1 1
1 0 1
0 0 1
```

### Output

```text
0 0 4
0 0 4
-2 -2 2
```

## Complexity Analysis

Let the matrix have `m` rows and `n` columns.

### Time Complexity

**O(m × n)**

The matrix is traversed a constant number of times.

### Space Complexity

**O(m + n)**

Four auxiliary arrays are used:

* `onerow`
* `zerorow`
* `onecol`
* `zerocol`

## Key Concept

Instead of counting the number of `1`s and `0`s repeatedly for every cell, we precompute the counts for each row and column.

This reduces unnecessary repeated work and allows each cell's answer to be calculated in **O(1)** time.

## Problem Information

* **Platform:** LeetCode
* **Problem Number:** 2482
* **Problem Name:** Difference Between Ones and Zeros in Row and Column
* **Difficulty:** Medium
* **Language:** C++
* **Technique:** Matrix Traversal / Precomputation
