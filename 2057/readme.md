# Smallest Index With Equal Value

## 📌 Problem Statement

Given a **0-indexed** integer array `nums`, return the **smallest index `i`** such that:

```
i % 10 == nums[i]
```

If no such index exists, return `-1`.

---

## 🧠 Approach

- Initialize a variable `index` with `INT_MAX`.
- Traverse the array from left to right.
- For each index `i`, check whether:
  ```cpp
  i % 10 == nums[i]
  ```
- If the condition is true and `i` is smaller than the current `index`, update `index`.
- After the traversal:
  - Return `index` if it was updated.
  - Otherwise, return `-1`.

> **Note:** Since the array is traversed from left to right, you can immediately return `i` when the condition is satisfied. The current implementation also works correctly.

---

## 🚀 Algorithm

1. Initialize `index = INT_MAX`.
2. Iterate through each element of the array.
3. Check if `i % 10 == nums[i]`.
4. If true, update `index`.
5. After the loop:
   - If `index == INT_MAX`, return `-1`.
   - Otherwise, return `index`.

---

## ⏱️ Time Complexity

- **O(n)** — Each element is visited exactly once.

## 💾 Space Complexity

- **O(1)** — Only a few extra variables are used.

---

## ✅ Example

### Input

```cpp
nums = {0, 1, 2}
```

### Execution

| Index (i) | i % 10 | nums[i] | Match |
|-----------|--------|---------|-------|
| 0 | 0 | 0 | ✅ |
| 1 | 1 | 1 | ✅ |
| 2 | 2 | 2 | ✅ |

Smallest matching index = **0**

### Output

```text
0
```

---

## 📷 Dry Run

```text
nums = {0, 1, 2}

index = INT_MAX

i = 0
0 % 10 = 0
nums[0] = 0
Match ✔
index = 0

i = 1
1 % 10 = 1
nums[1] = 1
Match ✔
index remains 0

i = 2
2 % 10 = 2
nums[2] = 2
Match ✔
index remains 0

Return 0
```

---

## 📝 Code Features

- Uses a simple linear traversal.
- Constant extra space.
- Handles cases where no valid index exists.
- Easy to understand and implement.

---

## 🎯 Tags

- Array
- Simulation
- Linear Search
- Easy