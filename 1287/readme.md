# Element Appearing More Than 25% In Sorted Array

A C++ solution for the **LeetCode 1287 - Element Appearing More Than 25% In Sorted Array** problem using a **Frequency Counting** approach.

---

## 🚀 Problem Statement

Given a **sorted** integer array `arr`, return the integer that appears **more than 25%** of the time in the array.

It is guaranteed that exactly one such element exists.

---

## 💡 Approach

This solution uses a **frequency array** to count the occurrences of each element.

### Steps

1. Create a frequency array initialized with zeros.
2. Calculate the threshold as **25% of the array size**.
3. Traverse the array and count the frequency of each element.
4. Traverse the array again.
5. Return the first element whose frequency is greater than the threshold.

---

## 📝 Algorithm

1. Initialize a frequency array.
2. Compute the threshold value.
3. Count the frequency of every element in the array.
4. Traverse the array once more.
5. If an element's frequency is greater than the threshold, return it.
6. If no such element exists, return `-1`.

---

## ✅ Time Complexity

- **Time Complexity:** `O(n)`

The array is traversed twice, resulting in linear time complexity.

---

## ✅ Space Complexity

- **Space Complexity:** `O(100000)` ≈ **O(1)**

A fixed-size frequency array is used, so the extra space remains constant with respect to the input size.

---

## 📌 Example

### Input

```text
arr = [1,2,2,6,6,6,6,7,10]
```

### Output

```text
6
```

### Explanation

- Array size = **9**
- 25% of the array size = **2.25**
- The element **6** appears **4 times**, which is greater than **25%** of the array.
- Therefore, the answer is **6**.

---

## 🛠️ Concepts Used

- Arrays
- Frequency Counting
- Iteration
- Simulation

---

## 🎯 Key Takeaway

- Counts the frequency of every element using a frequency array.
- Finds the required element in **linear time**.
- Simple and easy-to-understand approach.
- Uses additional memory for frequency storage, while more optimized solutions can utilize the sorted nature of the array to reduce space usage.