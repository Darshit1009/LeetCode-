# LeetCode 3033 - Modify the Matrix Solution

This project provides an efficient solution to solve the Modify the Matrix problem found on LeetCode. The strategy repairs data inside a two-dimensional grid by filling in missing values using the context of surrounding columns.

## Problem Context

You are handed a grid of numbers where a few specific spots contain a value of negative one. This negative one acts as an error indicator or a missing placeholder. The goal is to scan through the grid and fix every single negative one. 

To fix a placeholder, you look at all the other numbers sharing that exact same vertical column, identify the single highest number among them, and use that highest number to overwrite the placeholder.

---

## Practical Example

Imagine a grid configured with three rows and three columns:

First Row:      1     2    -1
Second Row:     4    -1     6
Third Row:      7     8     9

The system applies the column logic to update the layout:

* The first column contains the numbers 1, 4, and 7. There are no placeholders here, so it remains unchanged.
* The second column contains 2, a placeholder, and 8. The highest number is 8. The placeholder is replaced with 8.
* The third column contains a placeholder, 6, and 9. The highest number is 9. The placeholder is replaced with 9.

The final repaired grid looks like this:

First Row:      1     2     9
Second Row:     4     8     6
Third Row:      7     8     9

---

## How the Algorithm Works

The solution fixes the grid by working vertically, scanning column by column from left to right.

1. Peak Value Scan
The algorithm isolates the first vertical column. It moves from top to bottom, comparing all values to identify the absolute largest integer sitting in that specific column.

2. In-Place Repair
The algorithm jumps back to the top of that exact same column and travels downward a second time. Whenever it hits a negative one, it overwrites it with the peak value found during the first step. Valid data points are ignored and left alone.

3. Step Sideways
Once a column is clean, the algorithm shifts one position to the right and repeats the entire process on the next column. This sequence continues until the final column is evaluated.

---

## Performance Metrics

* Computational Speed: The time required scales linearly with the total number of grid items. Because every single slot is inspected exactly twice (once to find the max, once to swap the negative ones), it executes incredibly fast even on massive data tables.
* Memory Utilization: The algorithm has a flat memory footprint. It alters the original layout directly on the fly without duplicating the matrix or generating secondary tables to hold temporary values.
