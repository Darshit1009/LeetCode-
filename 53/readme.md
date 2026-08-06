# Maximum Subarray (Kadane's Algorithm)

## Problem Statement
Given an integer array `nums`, find the contiguous subarray (containing at least one element) that has the largest sum and return its sum.

---

## Approach
This solution uses **Kadane's Algorithm**, which efficiently finds the maximum sum subarray in a single traversal.

### Steps:
1. Initialize:
   - `res` as the first element (stores the maximum sum found so far).
   - `end` as the first element (stores the maximum subarray sum ending at the current index).
2. Traverse the array from the second element.
3. For each element:
   - Decide whether to:
     - Start a new subarray from the current element, or
     - Extend the previous subarray.
   - Update:
     ```cpp
     end = max(nums[i], nums[i] + end);
     ```
4. Update the overall maximum:
   ```cpp
   res = max(res, end);
   ```
5. Return `res`.

---

## Algorithm
```text
Initialize:
    res = nums[0]
    end = nums[0]

For each element from index 1:
    end = max(current element, current element + end)
    res = max(res, end)

Return res
```

---

## Dry Run

### Input
```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
```

| Index | Element | end | res |
|------:|--------:|----:|----:|
| 0 | -2 | -2 | -2 |
| 1 | 1 | 1 | 1 |
| 2 | -3 | -2 | 1 |
| 3 | 4 | 4 | 4 |
| 4 | -1 | 3 | 4 |
| 5 | 2 | 5 | 5 |
| 6 | 1 | 6 | 6 |
| 7 | -5 | 1 | 6 |
| 8 | 4 | 5 | 6 |

### Output
```text
6
```

The maximum subarray is:

```text
[4, -1, 2, 1]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - The array is traversed only once.

- **Space Complexity:** `O(1)`
  - Only two variables are used.

---

## Code
```cpp
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int res = nums[0];
        int end = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            end = max(nums[i], nums[i] + end);
            res = max(res, end);
        }

        return res;
    }
};
```

---

## Key Concepts
- Kadane's Algorithm
- Dynamic Programming
- Greedy Approach
- Array Traversal
- Maximum Contiguous Subarray Sum

---

## Example

### Input
```text
nums = [5,4,-1,7,8]
```

### Output
```text
23
```

### Explanation
The entire array forms the maximum subarray:

```text
5 + 4 + (-1) + 7 + 8 = 23
```

---

## Advantages
- Optimal **O(n)** time complexity.
- Constant **O(1)** extra space.
- Handles arrays containing both positive and negative numbers.
- Simple and efficient implementation.