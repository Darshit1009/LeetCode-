# 4010. Maximize Pair Strength Using GCD

[LeetCode Problem](https://leetcode.com/problems/maximize-pair-strength-using-gcd/)

## Problem

You are given an integer array `nums`.

Choose exactly one pair of distinct indices `i` and `j`.

The strength of the pair is defined as:

$$
\text{Strength} = \frac{nums[i] \times nums[j]}{gcd(nums[i], nums[j])^2}
$$

Return the maximum strength among all possible pairs.

---

## Examples

### Example 1

**Input:**

```text
nums = [2,3,5]
```

**Output:**

```text
15
```

**Explanation:**

Choose `i = 1` and `j = 2`:

```text
nums[1] = 3
nums[2] = 5

gcd(3,5) = 1

Strength = (3 × 5) / (1 × 1)
         = 15
```

So the maximum strength is `15`.

---

### Example 2

**Input:**

```text
nums = [4,6,8]
```

**Output:**

```text
12
```

For the pair `(6,8)`:

```text
gcd(6,8) = 2

Strength = (6 × 8) / (2 × 2)
         = 48 / 4
         = 12
```

---

### Example 3

**Input:**

```text
nums = [3,3]
```

**Output:**

```text
1
```

There is only one possible pair:

```text
gcd(3,3) = 3

Strength = (3 × 3) / (3 × 3)
         = 9 / 9
         = 1
```

---

## Constraints

* `2 <= nums.length <= 2000`
* `1 <= nums[i] <= 10^5`

---

# Approach

We need to choose **exactly two distinct elements** from the array.

Since `nums.length <= 2000`, we can check every possible pair using two nested loops.

For every pair `(i, j)`:

1. Calculate the GCD of `nums[i]` and `nums[j]`.
2. Calculate the pair strength.
3. Compare it with the current maximum.
4. Update the maximum if the current strength is larger.

The formula is:

```text
strength = (nums[i] × nums[j]) / gcd(nums[i], nums[j])²
```

---

## Algorithm

```text
Initialize maxii = LLONG_MIN

For every index i:
    For every index j after i:
        gcd = gcd(nums[i], nums[j])

        strength =
            (nums[i] × nums[j]) / (gcd × gcd)

        Update maxii if strength is greater

Return maxii
```

---

# Why `j = i + 1`?

The problem requires two **distinct indices**.

Therefore, we should not compare an element with itself.

Instead of:

```cpp
for (int j = 0; j < nums.size(); j++)
```

we use:

```cpp
for (int j = i + 1; j < nums.size(); j++)
```

This gives every unique pair exactly once.

For example, for:

```text
[2, 3, 5]
```

the pairs checked are:

```text
(2,3)
(2,5)
(3,5)
```

We don't need to separately check:

```text
(3,2)
(5,2)
(5,3)
```

because they represent the same pair of values.

---

# Dry Run

Consider:

```text
nums = [2, 3, 5]
```

### Pair 1

```text
2, 3

gcd(2,3) = 1

strength = (2 × 3) / (1 × 1)
         = 6
```

Current maximum:

```text
maxii = 6
```

### Pair 2

```text
2, 5

gcd(2,5) = 1

strength = (2 × 5) / (1 × 1)
         = 10
```

Update:

```text
maxii = 10
```

### Pair 3

```text
3, 5

gcd(3,5) = 1

strength = (3 × 5) / (1 × 1)
         = 15
```

Update:

```text
maxii = 15
```

Final answer:

```text
15
```

---

# Important C++ Detail: Integer Overflow

The following expression can cause an integer overflow:

```cpp
nums[i] * nums[j]
```

Both `nums[i]` and `nums[j]` are `int`, so C++ performs the multiplication as an `int` before assigning the result to `long long`.

To force the multiplication to happen using `long long`, we use:

```cpp
1LL * nums[i] * nums[j]
```

Therefore:

```cpp
long long pr = (1LL * nums[i] * nums[j]) / (gcdi * gcdi);
```

This is important for safely handling larger multiplication results.

---

# Why `LLONG_MIN`?

The answer is stored in a `long long`:

```cpp
long long maxii
```

Therefore, it is better to initialize it with:

```cpp
LLONG_MIN
```

instead of:

```cpp
INT_MIN
```

`LLONG_MIN` represents the minimum possible value of a `long long`.

---

# Complexity Analysis

Let:

```text
n = nums.size()
```

We check every possible pair.

The nested loops take:

$$
O(n^2)
$$

For every pair, we calculate GCD.

The Euclidean algorithm takes:

$$
O(\log(\min(a,b)))
$$

Therefore, the overall complexity is approximately:

$$
O(n^2 \log M)
$$

where `M` is the maximum value in `nums`.

### Space Complexity

Only a few variables are used:

```text
O(1)
```

No additional array or data structure is required.

---

# C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxPairStrength(vector<int> &nums)
    {
        long long maxii = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                long long gcdi = gcd(nums[i], nums[j]);

                long long pr =
                    (1LL * nums[i] * nums[j]) / (gcdi * gcdi);

                if (pr > maxii)
                {
                    maxii = pr;
                }
            }
        }

        return maxii;
    }
};

int main()
{
    Solution s;

    vector<int> q = {2, 3, 5};

    cout << s.maxPairStrength(q);

    return 0;
}
```

---

# Key Concepts Used

* Nested loops
* Pair generation
* Greatest Common Divisor (GCD)
* Euclidean algorithm
* `long long`
* Integer overflow prevention
* Maximum value tracking
* Time and space complexity analysis

---

## Key Takeaway

The main idea is simple:

> **Check every unique pair, calculate its GCD, calculate its strength, and keep the maximum strength found.**

The important implementation detail is using:

```cpp
1LL * nums[i] * nums[j]
```

to prevent integer overflow during multiplication.
