# Maximum Frequency Elements

## Problem

Given an integer array `nums`, find the total number of elements that belong to the frequency group with the **highest frequency**.

If multiple elements have the same maximum frequency, count all of them.

### Example

```text
Input:  nums = [1,2,2,3,1,4]
Output: 4
```

Explanation:

* `1` appears 2 times
* `2` appears 2 times
* `3` appears 1 time
* `4` appears 1 time

The maximum frequency is `2`.

Both `1` and `2` have this frequency:

```text
2 + 2 = 4
```

Therefore, the answer is `4`.

## Approach

1. Create a frequency array `fr` of size `101`.
2. Count how many times each number occurs.
3. Find the maximum frequency using `max_element()`.
4. Traverse the original array:

   * If an element has the maximum frequency, add `max` to `count`.
5. Since every occurrence of a maximum-frequency element is counted, divide `count` by `max` to obtain the total number of elements having the maximum frequency.

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

The frequency array has a fixed size of `101`.

## Key Concepts

* Frequency counting
* Vectors
* `max_element()`
* Array traversal
* Constant auxiliary space
