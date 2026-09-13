# LeetCode 3075 - Maximum Happiness Sum of Selected Children

## Problem

You are given an integer array `happiness`, where `happiness[i]` represents the happiness value of the `i-th` child.

You need to select exactly `k` children.

When a child is selected:

* The first selected child gets their original happiness.
* Each subsequent selection decreases the happiness of every remaining child by `1`.
* Happiness cannot become negative.

The goal is to maximize the total happiness of the selected children.

## Example

```text
Input:
happiness = [1, 2, 3]
k = 2

Sorted:
[3, 2, 1]

Selection:
First child  → 3 - 0 = 3
Second child → 2 - 1 = 1

Answer:
3 + 1 = 4
```

## Approach

The optimal strategy is to select children with the highest happiness values first.

### Steps

1. Sort the `happiness` array in descending order.
2. Select the first `k` children.
3. For the child at index `i`, their effective happiness is:

```text
happiness[i] - i
```

4. Since happiness cannot be negative, calculate:

```text
max(0, happiness[i] - i)
```

5. Add the effective happiness values to obtain the maximum total happiness.

## Dry Run

### Input

```text
happiness = [1, 2, 3]
k = 2
```

### Step 1: Sort in Descending Order

```text
[3, 2, 1]
```

### Step 2: Select `k = 2` Children

| Index | Happiness | Decrease | Effective Happiness |
| ----: | --------: | -------: | ------------------: |
|     0 |         3 |        0 |                   3 |
|     1 |         2 |        1 |                   1 |

### Step 3: Calculate Total

```text
3 + 1 = 4
```

### Output

```text
4
```

## Complexity Analysis

### Time Complexity

```text
O(n log n)
```

Sorting the array takes `O(n log n)` and selecting the `k` children takes `O(k)`.

### Space Complexity

```text
O(1)
```

Apart from the space used internally by the sorting algorithm.

## Key Concepts

* Greedy Algorithm
* Sorting
* Array
* Frequency/Value Reduction
* Maximization
* `long long`

## LeetCode

**Problem:** 3075. Maximum Happiness Sum of Selected Children

**Difficulty:** Medium

**Language:** C++

**Approach:** Greedy + Sorting
