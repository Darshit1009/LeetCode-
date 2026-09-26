# Leetcode 3550

## Problem Description

Given an integer array `nums`, find the **smallest index `i`** such that the sum of the digits of `nums[i]` is equal to `i`.

If no such index exists, return `-1`.

### Example

```text
Input:
nums = [1, 2, 3, 4, 5, 6]

Output:
2
```

Explanation:

* `nums[0] = 1` → digit sum = `1` ≠ index `0`
* `nums[1] = 2` → digit sum = `2` ≠ index `1`
* `nums[2] = 3` → digit sum = `3` ≠ index `2`

So this example would actually return `-1`.

Another example:

```text
Input:
nums = [0, 1, 2, 3, 4]

Output:
0
```

Because:

```text
index = 0
nums[0] = 0
digit sum = 0
```

Therefore, the smallest valid index is `0`.

---

## Approach

The solution uses two steps:

### 1. Calculate Digit Sum

The `sumofDIGIT()` function calculates the sum of all digits of a number.

For example:

```text
123 → 1 + 2 + 3 = 6
```

This is done using:

```cpp
int rem = i % 10;
temp += rem;
i = i / 10;
```

### 2. Check Every Index

For every index `i`:

```cpp
int sum = sumofDIGIT(nums[i]);
```

Then check:

```cpp
if (sum == i)
{
    return i;
}
```

Since the array is checked from left to right, the first matching index is automatically the **smallest index**.

If no index satisfies the condition, return `-1`.

---

## Code

```cpp
#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int sumofDIGIT(int i)
    {
        int temp = 0;

        while (i > 0)
        {
            int rem = i % 10;
            temp += rem;
            i = i / 10;
        }

        return temp;
    }

    int smallestIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = sumofDIGIT(nums[i]);

            if (sum == i)
            {
                return i;
            }
        }

        return -1;
    }
};
```

---

## Dry Run

Consider:

```text
nums = [1, 2, 3, 4, 5]
```

| Index `i` | `nums[i]` | Digit Sum | Match? |
| --------: | --------: | --------: | :----: |
|         0 |         1 |         1 |    ❌   |
|         1 |         2 |         2 |    ❌   |
|         2 |         3 |         3 |    ❌   |
|         3 |         4 |         4 |    ❌   |
|         4 |         5 |         5 |    ❌   |

No index satisfies the condition.

Therefore:

```text
Output = -1
```

---

## Complexity Analysis

Let:

* `n` = number of elements in the array
* `d` = number of digits in each number

### Time Complexity

```text
O(n × d)
```

We visit every element and calculate its digit sum.

### Space Complexity

```text
O(1)
```

Only a few integer variables are used.

---

## Key Concept

The main technique used is **digit extraction using `% 10` and `/ 10`**:

```cpp
rem = number % 10;
number = number / 10;
```

For example:

```text
number = 456

456 % 10 = 6
456 / 10 = 45

45 % 10 = 5
45 / 10 = 4

4 % 10 = 4
4 / 10 = 0
```

Therefore:

```text
Digit Sum = 6 + 5 + 4 = 15
```
