# 347. Top K Frequent Elements

## Problem Description

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in **any order**.

### Examples

**Example 1:**
* **Input:** `nums = [1,1,1,2,2,3]`, `k = 2`
* **Output:** `[1,2]`

**Example 2:**
* **Input:** `nums = [1]`, `k = 1`
* **Output:** `[1]`

### Constraints
* `1 <= nums.length <= 10^5`
* `-10^4 <= nums[i] <= 10^4`
* `k` is in the range `[1, the number of unique elements in the array]`.
* It is **guaranteed** that the answer is **unique**.

---

## Approach

1. **Frequency Map:** Count the occurrences of each element using an `std::unordered_map`.
2. **Vector Conversion:** Copy the key-value pairs from the hash map into an `std::vector` of pairs.
3. **Sorting:** Sort the vector in descending order based on the frequencies (`pair.second`) using a custom lambda comparator.
4. **Extraction:** Retrieve the first `k` unique keys from the sorted vector and append them to the result vector.

---

## Solution (C++)

This complete runnable source code includes a driver `main()` function to test the solution locally.

---

## Complexity Analysis

Let \(N\) be the total number of elements in `nums`, and \(U\) be the number of unique elements (\(U \le N\)).

* **Time Complexity:** \(\mathcal{O}(N \log N)\)
  * Populating the frequency map takes \(\mathcal{O}(N)\) time.
  * Sorting the vector of unique pairs takes \(\mathcal{O}(U \log U)\) time. In the absolute worst case where all elements are unique (\(U = N\)), the sorting operation dominates with \(\mathcal{O}(N \log N)\).
* **Space Complexity:** \(\mathcal{O}(N)\)
  * The hash map and the temporary vector dynamically grow to accommodate \(U\) unique elements, resulting in linear auxiliary space usage.
