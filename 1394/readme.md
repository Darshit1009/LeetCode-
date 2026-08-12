# 1394. Find Lucky Integer in an Array

## 📌 Problem Statement

Given an array of integers `arr`, a **lucky integer** is an integer whose frequency in the array is equal to its value.

Return the **largest lucky integer** in the array. If there is no lucky integer, return `-1`.

### Example

```text
Input: arr = [2,2,2,3,3]

Output: -1

Explanation:
2 occurs 3 times, so it is not lucky.
3 occurs 2 times, so it is not lucky.
Therefore, there is no lucky integer.
```

---

## 💡 Approach

The solution uses a **frequency array** to count how many times each number appears.

### Steps

1. Create a frequency array of size `501`.
2. Traverse the input array and count the frequency of every element.
3. Traverse the array again.
4. If:

```cpp
freq[arr[i]] == arr[i]
```

then `arr[i]` is a lucky integer.
5. Store all lucky integers in the `great` vector.
6. If `great` is empty, return `-1`.
7. Otherwise, use `max_element()` to find and return the largest lucky integer.

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        vector<int> freq(501, 0);

        // Count frequency of each element
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        vector<int> great;

        // Find lucky integers
        for (int i = 0; i < arr.size(); i++)
        {
            if (freq[arr[i]] == arr[i])
            {
                great.push_back(arr[i]);
            }
        }

        // No lucky integer found
        if (great.empty())
        {
            return -1;
        }

        // Return the largest lucky integer
        int max = *max_element(great.begin(), great.end());

        return max;
    }
};

int main()
{
    Solution s;

    vector<int> ques = {2, 2, 2, 3, 3};

    cout << s.findLucky(ques);

    return 0;
}
```

---

## 🔍 Example Walkthrough

For:

```text
arr = [2, 2, 2, 3, 3]
```

Frequency table:

| Number | Frequency | Lucky? |
| ------ | --------: | ------ |
| 2      |         3 | ❌      |
| 3      |         2 | ❌      |

No number has a frequency equal to its value.

Therefore:

```text
Output: -1
```

### Another Example

```text
arr = [2, 2, 3, 3, 3]
```

Frequency:

```text
2 → 2 times ✅
3 → 3 times ✅
```

Both `2` and `3` are lucky integers.

The largest one is:

```text
3
```

---

## ⏱️ Complexity Analysis

Let `n` be the number of elements in `arr`.

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

The frequency array has a fixed size of `501`, so its space usage is constant.

---

## 🧠 Key Concept

A number `x` is a **lucky integer** when:

```cpp
frequency[x] == x
```

For example:

```text
[1, 2, 2, 3, 3, 3]

1 → frequency = 1 → Lucky
2 → frequency = 2 → Lucky
3 → frequency = 3 → Lucky
```

The answer is the **largest lucky integer**, which is `3`.

---

## 🏷️ LeetCode Information

* **Problem:** 1394. Find Lucky Integer in an Array
* **Difficulty:** Easy
* **Language:** C++
* **Topics:** Array, Hash Table, Counting
