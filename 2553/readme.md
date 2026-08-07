# Separate Digits in an Array

## Problem Statement
Given an array of positive integers, separate every digit of each number while preserving their original order. Return the resulting array containing all individual digits.

### Example
**Input:**
```text
nums = [13, 25, 83, 77]
```

**Output:**
```text
[1, 3, 2, 5, 8, 3, 7, 7]
```

---

## Approach

1. Traverse each number in the input array.
2. Extract its digits one by one using the modulo (`%`) operator.
3. Store the extracted digits in a temporary vector.
4. Since digits are extracted in reverse order, reverse the temporary vector.
5. Append all digits from the temporary vector into the final answer vector.
6. Return the final vector containing all separated digits.

---

## Algorithm

- Create an empty vector `ans`.
- For every number in `nums`:
  - Create a temporary vector `temp`.
  - Extract digits using:
    - `digit = number % 10`
    - `number /= 10`
  - Reverse `temp`.
  - Insert all elements of `temp` into `ans`.
- Return `ans`.

---

## Time Complexity

- Let **D** be the total number of digits across all numbers.
- Each digit is processed exactly once.

**Time Complexity:** `O(D)`

---

## Space Complexity

- Temporary vector stores digits of one number.
- Answer vector stores all digits.

**Space Complexity:** `O(D)`

---

## C++ Solution

```cpp
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> temp;

            while (nums[i] > 0)
            {
                int rem = nums[i] % 10;
                temp.push_back(rem);
                nums[i] = nums[i] / 10;
            }

            reverse(temp.begin(), temp.end());

            for (int j = 0; j < temp.size(); j++)
            {
                ans.push_back(temp[j]);
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;

    vector<int> nums = {13, 25, 83, 77};

    vector<int> result = s.separateDigits(nums);

    for (int digit : result)
        cout << digit << " ";

    return 0;
}
```

---

## Sample Output

```text
1 3 2 5 8 3 7 7
```

---

## Key Concepts Used

- Arrays (Vector)
- Modulo Operator (`%`)
- Integer Division (`/`)
- Vector Operations
- Reversing a Vector
- Traversing Arrays

---

## Note

This solution modifies the original input array while extracting digits because each number is repeatedly divided by `10`. If preserving the original array is required, use a copy of each number instead of modifying `nums[i]`.