# LeetCode 3774 — Absolute Difference Between Maximum and Minimum K Elements

**Difficulty:** Easy
**Topics:** [Array](https://leetcode.com/tag/array/), [Sorting](https://leetcode.com/tag/sorting/)
**Contest:** [Weekly Contest 480](https://leetcode.com/contest/weekly-contest-480/)

---

## Problem Statement

You are given an integer array `nums` and an integer `k`.

You need to:

1. Find the sum of the **smallest `k` elements**.
2. Find the sum of the **largest `k` elements**.
3. Return the absolute difference between these two sums.

### Example

```text
Input:
nums = [5, 2, 2, 4]
k = 2

Sorted array:
[2, 2, 4, 5]

Smallest 2 elements:
2 + 2 = 4

Largest 2 elements:
4 + 5 = 9

Answer:
|9 - 4| = 5
```

---

## Approach

### Step 1: Sort the Array

Sort `nums` in ascending order.

```cpp
sort(nums.begin(), nums.end());
```

After sorting:

```text
[5, 2, 2, 4]
        ↓
[2, 2, 4, 5]
```

Now:

* The first `k` elements are the smallest `k` elements.
* The last `k` elements are the largest `k` elements.

---

### Step 2: Calculate Both Sums

Use two pointers:

```cpp
int i = 0;
int j = nums.size() - 1;
```

* `i` starts from the beginning.
* `j` starts from the end.

For every iteration:

```cpp
minSum += nums[i];
maxSum += nums[j];

i++;
j--;
```

Repeat this `k` times.

For:

```text
nums = [2, 2, 4, 5]
k = 2
```

The process is:

```text
Iteration 1:
minSum = 2
maxSum = 5

Iteration 2:
minSum = 2 + 2 = 4
maxSum = 5 + 4 = 9
```

---

### Step 3: Find the Difference

Finally:

```cpp
return maxSum - minSum;
```

Since the sum of the largest `k` elements is always greater than or equal to the sum of the smallest `k` elements, this gives the required absolute difference.

---

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        int count = 0;
        int minSum = 0;
        int maxSum = 0;

        while (count < k)
        {
            minSum += nums[i];
            maxSum += nums[j];

            i++;
            j++;
            count++;
        }

        return maxSum - minSum;
    }
};

int main()
{
    Solution s;

    vector<int> nums = {5, 2, 2, 4};

    cout << s.absDifference(nums, 2);

    return 0;
}
```

> **Note:** In the LeetCode submission, only the `Solution` class is required. The `main()` function is used here only for local testing.

---

## Correct Implementation

There is one important correction to the pointer movement in the code above.

The right pointer must move **backward**, so it should be:

```cpp
j--;
```

Therefore, the final LeetCode solution is:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        int minSum = 0;
        int maxSum = 0;

        for (int count = 0; count < k; count++)
        {
            minSum += nums[i];
            maxSum += nums[j];

            i++;
            j--;
        }

        return maxSum - minSum;
    }
};
```

---

## Dry Run

### Input

```text
nums = [5, 2, 2, 4]
k = 2
```

### After Sorting

```text
[2, 2, 4, 5]
 ↑       ↑
 i       j
```

### Iteration 1

```text
minSum = 0 + nums[0]
       = 2

maxSum = 0 + nums[3]
       = 5
```

Move pointers:

```text
i = 1
j = 2
```

### Iteration 2

```text
minSum = 2 + nums[1]
       = 4

maxSum = 5 + nums[2]
       = 9
```

Final:

```text
maxSum - minSum
= 9 - 4
= 5
```

### Output

```text
5
```

---

## Why Does Sorting Work?

After sorting:

```text
nums[0], nums[1], ..., nums[n-1]
```

The smallest `k` elements are:

```text
nums[0] ... nums[k-1]
```

The largest `k` elements are:

```text
nums[n-k] ... nums[n-1]
```

Therefore, sorting lets us directly access both groups without checking every possible combination.

---

## Complexity Analysis

Let `n` be the size of `nums`.

### Time Complexity

Sorting takes:

```text
O(n log n)
```

The loop runs `k` times:

```text
O(k)
```

Therefore:

```text
O(n log n + k)
```

Since `k <= n`, this simplifies to:

```text
O(n log n)
```

### Space Complexity

The sorting operation uses:

```text
O(log n)
```

auxiliary stack space in the typical implementation.

The algorithm itself uses only a few variables:

```text
O(1)
```

extra space apart from the sorting implementation.

---

## Key Concept

The main idea is:

> **Sort → take `k` smallest → take `k` largest → subtract their sums.**

```text
          SORT
           ↓
┌─────────────────────────┐
│  smallest k │ largest k │
└─────────────────────────┘
       ↓             ↓
    minSum         maxSum
       └──────┬──────┘
              ↓
       maxSum - minSum
```

---

## Important Learning Points

* Sorting can make **minimum/maximum element selection** much easier.
* Two pointers can process elements from **both ends of a sorted array**.
* When the problem asks for the smallest and largest `k` elements, sorting is a natural approach.
* Always check pointer movement carefully:

  * Left pointer → `i++`
  * Right pointer → `j--`

---

## Tags

`Array` `Sorting` `Two Pointers` `Greedy` `LeetCode` `Easy` `Weekly Contest 480`
