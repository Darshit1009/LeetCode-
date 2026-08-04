# 287. Find the Duplicate Number

## Problem Statement

Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]`, return the **duplicate** number.

You must solve the problem without modifying the array and using only constant extra space (Follow-up).

> **Note:** The solution below uses a frequency array, which requires **O(n)** extra space. Although it works correctly, it does **not** satisfy the follow-up space constraint.

---

## Approach

This solution uses a **frequency array** to count how many times each number appears.

### Algorithm

1. Create a frequency array `ans` of size `nums.size()`, initialized with `0`.
2. Traverse the input array.
3. Increment the frequency of each element.
4. Traverse the frequency array.
5. Return the index whose frequency is greater than `1`.
6. If no duplicate exists, return `-1`.

---

## Dry Run

### Input

```text
nums = [1,3,4,2,2]
```

### Step 1

Create frequency array:

```text
Index : 0 1 2 3 4
Value : 0 0 0 0 0
```

### Step 2

Count frequencies:

```text
Read 1 → [0,1,0,0,0]

Read 3 → [0,1,0,1,0]

Read 4 → [0,1,0,1,1]

Read 2 → [0,1,1,1,1]

Read 2 → [0,1,2,1,1]
```

### Step 3

Traverse frequency array:

```text
Index 0 → 0

Index 1 → 1

Index 2 → 2  ← Duplicate found
```

### Output

```text
2
```

---

## C++ Solution

```cpp
class Solution
{
public:
    int findDuplicate(vector<int>& nums)
    {
        vector<int> ans(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }

        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] > 1)
            {
                return i;
            }
        }

        return -1;
    }
};
```

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time | **O(n)** |
| Space | **O(n)** |

- The array is traversed twice.
- An additional frequency array of size `n` is used.

---

## Example

### Input

```text
nums = [1,3,4,2,2]
```

### Output

```text
2
```

---

## Key Concepts

- Arrays
- Frequency Counting
- Traversal
- Counting Occurrences

---

## Note

This solution is simple and easy to understand, but it **does not satisfy the follow-up requirement** of using **O(1)** extra space.

The optimal solution uses **Floyd's Tortoise and Hare (Cycle Detection)** algorithm with:

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## LeetCode

**Problem:** 287. Find the Duplicate Number

**Difficulty:** Medium

**Topics:** Array, Binary Search, Two Pointers, Cycle Detection