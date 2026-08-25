# 3718. Smallest Missing Multiple of K

[LeetCode Problem](https://leetcode.com/problems/smallest-missing-multiple-of-k/)

## Problem

Given an integer array `nums` and an integer `k`, find the **smallest positive multiple of `k`** that is missing from `nums`.

### Example

```text
Input:
nums = [83, 96, 34, 56, 48, 30, 7, 14, 77, 66, 66, 66, 21, 17, 38, 7, 9]
k = 7

Output:
28
```

The positive multiples of `7` are:

```text
7, 14, 21, 28, 35, 42, ...
```

`7`, `14`, and `21` are present in the array, but `28` is missing.

Therefore:

```text
Answer = 28
```

---

## Approach

The solution uses a **Set** to store all numbers from the array that are divisible by `k`.

### Steps

1. Create a `set<int>` to store multiples of `k`.
2. Traverse the array.
3. Check whether each number is divisible by `k`.
4. If it is divisible, insert it into the set.
5. Start from `k` and generate multiples:

   ```text
   k, 2k, 3k, 4k, ...
   ```
6. Compare each multiple with the values in the set.
7. Return the first missing multiple.

### Why `set`?

A `set`:

* Stores unique values.
* Keeps values sorted.
* Automatically removes duplicates.

For example:

```text
Input:
7, 14, 14, 21, 7

Set:
{7, 14, 21}
```

## Dry Run

Given:

```text
k = 7
```

Numbers divisible by `7` from the array:

```text
7, 14, 21, 77
```

After inserting into the set:

```text
{7, 14, 21, 77}
```

Now check multiples of `7`:

| Multiple | Present? |
| -------: | :------: |
|        7 |    Yes   |
|       14 |    Yes   |
|       21 |    Yes   |
|       28 |    No    |

Therefore:

```text
28
```

is the smallest missing multiple.

---

## Complexity

Let `n` be the size of the array.

### Time Complexity

Each insertion into a `set` takes `O(log n)`.

For `n` elements:

```text
O(n log n)
```

### Space Complexity

In the worst case, the set stores `n` unique values:

```text
O(n)
```

---

## Key Concepts

* `set`
* Array traversal
* Multiples
* Duplicate removal
* Sorted data
* `O(n log n)` complexity

---

