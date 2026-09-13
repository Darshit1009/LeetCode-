# LeetCode - Minimum Cost of Buying Candies With Discount

## Problem

You are given an integer array `cost` where `cost[i]` represents the price of the `i-th` candy.

There is a special offer:

* For every **3 candies** you buy, the **cheapest candy is free**.
* You can buy the candies in any order.
* Return the **minimum cost** to buy all the candies.

---

## Approach

The main idea is to sort the candy prices in **descending order**.

### Steps

1. Sort the `cost` array in descending order.
2. Calculate the total cost of all candies.
3. Starting from index `2`, make every third candy free.
4. Subtract the cost of those free candies from the total cost.

After sorting:

```text
[6, 5, 4, 3, 2, 1]
```

We can group the candies as:

```text
[6, 5, 4] → 4 is free
[3, 2, 1] → 1 is free
```

Therefore:

```text
Total Cost = 6 + 5 + 4 + 3 + 2 + 1 = 21
Free Candies = 4 + 1 = 5

Minimum Cost = 21 - 5 = 16
```

---

## Complexity Analysis

### Time Complexity

**`O(n log n)`**

The array needs to be sorted in descending order. Sorting takes `O(n log n)` time.

After sorting, calculating the total cost and finding the free candies takes `O(n)` time.

Therefore:

```text
O(n log n) + O(n)
= O(n log n)
```

### Space Complexity

**`O(1)` auxiliary space**

No additional data structure is used. The sorting is performed directly on the given array.

---

## Key Idea

After sorting the prices in descending order, every third candy starting from index `2` becomes free.

The free candy positions are:

```text
2, 5, 8, 11, ...
```

For example:

```text
Index:  0   1   2   3   4   5   6   7   8
        ↓   ↓   ↓   ↓   ↓   ↓   ↓   ↓   ↓
        X   X  FREE  X   X  FREE  X   X  FREE
```

This ensures that the **cheapest candy in every group of three** is selected as the free candy.

---

## Example

### Input

```text
cost = [6, 5, 3, 2, 1, 4]
```

### Sorted Array

```text
[6, 5, 4, 3, 2, 1]
```

### Calculation

```text
Total = 21

Free candies:
4 + 1 = 5

Minimum Cost:
21 - 5 = 16
```

### Output

```text
16
```

---

## LeetCode

**Problem:** Minimum Cost of Buying Candies With Discount

**Difficulty:** Easy

**Topics:** Sorting, Greedy

**Time Complexity:** `O(n log n)`

**Space Complexity:**
