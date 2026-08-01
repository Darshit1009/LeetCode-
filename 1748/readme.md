
# 1748. Sum of Unique Elements

## Problem Statement

Given an integer array `nums`, return the **sum of all elements that appear exactly once** in the array.

An element is considered **unique** if it occurs only one time.

---

## Example 1

**Input:**
```
nums = [1,2,3,2]
```

**Output:**
```
4
```

**Explanation:**
- `1` appears once.
- `2` appears twice.
- `3` appears once.

Sum = `1 + 3 = 4`

---

## Example 2

**Input:**
```
nums = [1,1,1,1,1]
```

**Output:**
```
0
```

**Explanation:**
No element appears exactly once.

---

## Approach

1. Count the frequency of each element.
2. Traverse the frequency array or map.
3. Add only those elements whose frequency is exactly `1`.
4. Return the final sum.

---

## Time Complexity

- **O(n)**

## Space Complexity

- **O(1)** (when using a frequency array of fixed size)
- **O(n)** (when using a hash map for general input ranges)

---

## Concepts Used

- Frequency Counting
- Arrays / Hash Map
- Traversal

---
