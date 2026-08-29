# First Unique Even Number

## Problem Description

Given an integer array `nums`, find the **first even number that appears exactly once** in the array.

* Consider only even numbers.
* If an even number occurs only once, it is a **unique even number**.
* Return the first unique even number according to its order in the array.
* If no unique even number exists, return `-1`.

## Example

### Input

```text
nums = {3, 4, 2, 5, 4, 6}
```

### Output

```text
2
```

### Explanation

The even numbers are:

```text
4, 2, 4, 6
```

Their frequencies are:

```text
4 → 2
2 → 1
6 → 1
```

`4` is repeated, while `2` and `6` occur only once.

Since `2` appears first among the unique even numbers, the answer is:

```text
2
```

---

## Approach

The solution uses a **frequency array** to count how many times each even number occurs.

### Step 1: Create Frequency Array

### Step 2: Count Even Numbers

### Step 3: Find the First Unique Even Number


Traverse the original array again. If an even number has frequency `1`, return it immediately.

### Step 4: No Unique Even Number

If no unique even number exists, return `-1`.

## Complexity Analysis

Let `n` be the number of elements in `nums`.

### Time Complexity

There are two passes through the array:

```text
O(n) + O(n) = O(n)
```

Therefore:

**Time Complexity: `O(n)`**

### Space Complexity

The frequency array has a fixed size of `101`.

```cpp
vector<int> freq(101, 0);
```

Therefore:

**Space Complexity: `O(1)`**

> The space is constant because the frequency array size does not depend on `n`.

---

## Test Cases

| Input                | Output | Explanation                  |
| -------------------- | -----: | ---------------------------- |
| `{3, 4, 2, 5, 4, 6}` |    `2` | `2` is the first unique even |
| `{2, 4, 6}`          |    `2` | All even numbers occur once  |
| `{2, 4, 2, 6}`       |    `4` | `2` repeats, `4` is unique   |
| `{2, 4, 2, 6, 6}`    |    `4` | Only `4` is unique           |
| `{1, 3, 5}`          |   `-1` | No even numbers              |
| `{4, 4, 2, 2}`       |   `-1` | No unique even number        |
| `{8}`                |    `8` | Single element is even       |
| `{7}`                |   `-1` | Single element is odd        |

---

## Key Concepts

* Arrays / Vectors
* Frequency Counting
* Two-Pass Technique
* Conditional Statements
* Time Complexity: `O(n)`
* Space Complexity: `O(1)`

## Important Idea

The key technique is:

```text
Count → Traverse Again → Find First Unique
```

This allows us to determine the frequency of each even number while still preserving the **original order** of the array.
