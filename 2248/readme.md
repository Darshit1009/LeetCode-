# Intersection of Multiple Arrays

## 📌 Problem Statement

Given a 2D integer array `nums`, return an array containing all integers that appear in **every array** of `nums`.

The result should be returned in **ascending order**.

### Example

**Input:**

```text
nums = [[3,1,2,4,5],
        [1,2,3,4],
        [3,4,5,6]]
```

**Output:**

```text
[3,4]
```

### Explanation

* `3` appears in all three arrays.
* `4` appears in all three arrays.
* Other elements are missing from at least one array.

Therefore, the intersection is `[3,4]`.

---

## 💡 Approach

The solution uses an `unordered_map` to count how many times each number occurs across all arrays.

### Step 1: Count Frequencies

Traverse every element of every array and increment its frequency:

```cpp
fre[nums[i][j]]++;
```

If an element appears in every array, its frequency will be at least equal to the number of arrays:

```cpp
fre[element] >= nums.size()
```

### Step 2: Find Common Elements

Traverse the arrays again.

If an element's frequency is equal to or greater than the number of arrays, insert it into a `set`.

```cpp
if (fre[nums[i][j]] >= nums.size())
{
    ans.insert(nums[i][j]);
}
```

A `set` is used because:

* It automatically removes duplicates.
* It keeps elements sorted in ascending order.

### Step 3: Convert Set to Vector

Finally, convert the set into a vector:

```cpp
vector<int> ans2(ans.begin(), ans.end());
```

and return it.

---

## 🧠 Algorithm

1. Create an `unordered_map<int, int>` to store frequencies.
2. Traverse every element in all arrays.
3. Increase the frequency of each element.
4. Traverse the arrays again.
5. If an element appears at least `nums.size()` times, insert it into a `set`.
6. Convert the set into a vector.
7. Return the resulting vector.

---
## code is given in file L_2248.cpp 
--- 

## ⏱️ Complexity Analysis

Let:

* `N` = total number of elements across all arrays.
* `K` = number of distinct elements.

### Time Complexity

```text
O(N + N log K)
```

* Counting frequencies: `O(N)` average.
* Inserting valid elements into the `set`: `O(log K)` per insertion.

### Space Complexity

```text
O(K)
```

The `unordered_map` and `set` store the distinct elements.

---

## 🔍 Important Concepts Used

* `unordered_map`
* Frequency counting
* `set`
* 2D vectors
* Array intersection
* Duplicate removal
* Sorting through `set`

---

## 📝 Key Learning

The important idea is to determine whether an element occurs in **every array**.

Since the number of arrays is `nums.size()`, an element that occurs once in each array will have a total frequency of:

```text
nums.size()
```

Using a `set` then makes the final answer unique and sorted automatically.

---

## 🚀 Output

For the given input:

```text
3 4
```
