# Minimum Price with Discounts

## Problem Description

Given two arrays:

* `prices` — contains the prices of products.
* `discounts` — contains the discount percentages.

The goal is to calculate the **minimum total price** by applying the available discounts to the highest-priced products.

Each discount is applied to one product.

If there are more products than discounts, the remaining products are added at their original price.

### Example

```text
prices = [10, 30, 21]
discounts = [50, 60]
```

Sort both arrays in descending order:

```text
prices    = [30, 21, 10]
discounts = [60, 50]
```

Apply discounts:

```text
30 - 60% = 12
21 - 50% = 10.5
```

The remaining product:

```text
10
```

Total:

```text
12 + 10.5 + 10 = 32.5
```

Therefore, the minimum price is:

```text
32.5
```

---

## Approach

The solution follows these steps:

1. Sort the `prices` array in descending order.
2. Sort the `discounts` array in descending order.
3. Apply the largest discount to the most expensive product.
4. Calculate the discounted price using:

```text
Discounted Price = Price × (100 - Discount) / 100
```

5. Add the prices of products that do not have a discount.
6. Return the total price.

---

## Algorithm

```text
1. Sort prices in descending order.
2. Sort discounts in descending order.
3. Find the smaller size of the two arrays.
4. For every available discount:
      discountedPrice = price × (100 - discount) / 100
      add discountedPrice to sum
5. If products are still remaining:
      add their original prices to sum
6. Return sum
```

---
## Complexity Analysis

### Time Complexity

Sorting both arrays takes:

```text
O(n log n + m log m)
```

where:

* `n` = number of prices
* `m` = number of discounts

The loop takes:

```text
O(min(n, m))
```

Therefore, overall:

```text
O(n log n + m log m)
```

### Space Complexity

The algorithm uses only a few variables apart from the input arrays:

```text
O(1)
```

---

## Important Note

There is a small syntax error in the original code:

```cpp
double double sum = 0;
```

It should be:

```cpp
double sum = 0;
```

Also, using `double` for the calculation is preferable to `float` because it provides better precision for decimal prices.

---

## Key Concepts

* `vector`
* Sorting
* `greater<int>()`
* Percentage calculation
* Greedy approach
* Time complexity
* `double` data type

## Example

### Input

```text
prices = [10, 30, 21]
discounts = [50, 60]
```

### Processing

```text
Sorted prices:
[30, 21, 10]

Sorted discounts:
[60, 50]

30 with 60% discount = 12
21 with 50% discount = 10.5
10 without discount = 10
```

### Output

```text
32.5
```
