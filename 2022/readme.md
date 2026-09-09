# Convert 1D Array Into 2D Array

## Problem Description

Given a 1D integer array `original` and two integers `m` and `n`, construct a 2D array with `m` rows and `n` columns.

The elements must be placed in the same order as they appear in the original array.

If the number of elements in the original array is not equal to `m × n`, return an empty 2D array.

## Example

### Input

* Original Array: `[1, 2, 3, 4]`
* Rows: `2`
* Columns: `2`

### Output

The resulting 2D array is:

* Row 1: `[1, 2]`
* Row 2: `[3, 4]`

## Approach

1. Check whether the total number of required elements (`m × n`) is equal to the size of the original array.
2. If the sizes are different, the conversion is not possible, so an empty array is returned.
3. Create a 2D array with `m` rows and `n` columns.
4. Traverse the 2D array row by row.
5. Place each element from the original array into the corresponding position.
6. Maintain the original ordering of all elements.
7. Return the constructed 2D array.

## Complexity Analysis

### Time Complexity

**O(m × n)**

Each element is processed exactly once.

### Space Complexity

**O(m × n)**

The resulting 2D array requires space for `m × n` elements.

## Key Concept

The conversion is possible only when:

**Number of elements in original array = m × n**

For example, an array containing 6 elements can be converted into:

* 2 × 3 matrix
* 3 × 2 matrix
* 1 × 6 matrix
* 6 × 1 matrix

But it cannot be converted into a 2 × 2 matrix because it requires only 4 elements.

## LeetCode Information

* **Problem:** 2022. Convert 1D Array Into 2D Array
* **Difficulty:** Easy
* **Topic:** Arrays
* **Language:** C++
