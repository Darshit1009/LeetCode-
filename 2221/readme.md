# LeetCode 2221 - Find Triangular Sum of an Array

## Problem

Given an array of integers, repeatedly calculate the sum of every pair of adjacent elements and replace each sum with its last digit.

Continue this process until only one element remains.

Return that final element as the **triangular sum** of the array.

---

## Example

### Input

```text
1 2 3 4 5
```

### Process

```text
1  2  3  4  5
 \ / \ / \ / \
  3   5   7   9

  3   5   7   9
   \ / \ / \ /
    8   2   6

    8   2   6
     \ / \ /
      0   8

      0   8
       \ /
        8
```

### Output

```text
8
```

---

## Approach

The solution repeatedly processes adjacent elements.

For every pair of adjacent elements:

1. Add the two values.
2. Take the remainder when divided by 10.
3. Store the result in the position of the first element.
4. Remove the last element because the size of the array decreases by one after every round.
5. Continue until only one element remains.

The remaining element is the triangular sum.

---

## Algorithm

1. Check the current size of the array.
2. While more than one element exists:

   * Traverse all adjacent pairs.
   * Calculate their sum.
   * Keep only the last digit of each sum.
   * Remove the last element.
3. Return the remaining element.

---

## Example Walkthrough

For:

```text
[1, 2, 3, 4, 5]
```

The rows become:

```text
[1, 2, 3, 4, 5]
[3, 5, 7, 9]
[8, 2, 6]
[0, 8]
[8]
```

Therefore, the answer is:

```text
8
```

---

## Complexity

### Time Complexity

**O(n²)**

Each round processes almost all remaining elements, and the array size decreases by one after every round.

### Space Complexity

**O(1)** auxiliary space when the input array is modified directly.

---

## Key Concept

The important idea is to repeatedly reduce the array by calculating the sum of adjacent elements.

The array size decreases like:

```text
n → n-1 → n-2 → ... → 1
```

Once only one element remains, that element is the answer.

---

## LeetCode Details

* **Problem:** 2221 - Find Triangular Sum of an Array
* **Difficulty:** Medium
* **Topics:** Array, Simulation, Math
