# K Items With Maximum Sum

## Problem

You are given three integers:

* `numOnes` — number of `1`s
* `numZeros` — number of `0`s
* `numNegOnes` — number of `-1`s
* `k` — number of items to select

The goal is to select exactly `k` items such that their sum is **maximum**.

### Example

```text
Input:
numOnes = 3
numZeros = 2
numNegOnes = 0
k = 4

Available items:
[1, 1, 1, 0, 0]

Choose:
[1, 1, 1, 0]

Maximum Sum:
3
```

## Approach

The solution follows these steps:

1. Add all `1`s to a vector.
2. Add all `0`s to the vector.
3. Add all `-1`s to the vector.
4. Sort the vector.
5. Reverse it so that the largest values come first.
6. Select the first `k` elements.
7. Add them to calculate the maximum sum.

Since the values are only `1`, `0`, and `-1`, selecting positive values first and then zeros gives the maximum possible sum.

## Complexity

Let:

```text
n = numOnes + numZeros + numNegOnes
```

* **Time Complexity:** `O(n log n)` because of sorting.
* **Space Complexity:** `O(n)` because the vector stores all elements.

## Test Case

```text
Input:
numOnes = 3
numZeros = 2
numNegOnes = 0
k = 4

Output:
3
```

## Key Concept

The important idea is to **always choose the largest available values first**.

The priority is:

```text
1 > 0 > -1
```

Therefore, to maximize the sum:

1. Choose as many `1`s as possible.
2. If more elements are required, choose `0`s.
3. Only choose `-1`s if necessary.

## Language

* C++
* STL (`vector`, `sort`, `reverse`)
