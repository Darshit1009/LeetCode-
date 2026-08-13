# Alternating Sum

## 📌 Problem Statement

Given an integer array `nums`, calculate the **alternating sum** of its elements.

The alternating sum is calculated by:

* Adding elements at **even indices**
* Subtracting elements at **odd indices**

For an array:

`[a, b, c, d]`

The alternating sum is:

`a - b + c - d`

## 🧠 Approach

Traverse the array from left to right.

* If the index is even, add the element to `sum`.
* If the index is odd, subtract the element from `sum`.

The index is checked using the modulo operator:

* `i % 2 == 0` → even index → addition
* `i % 2 != 0` → odd index → subtraction

## 🔍 Example

Given:

`nums = [1, 3, 5, 7]`

The calculation is:

`1 - 3 + 5 - 7`

`= -4`

Therefore, the output is:

`-4`

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

Only one variable is used to store the running sum.

## 🔑 Concepts Used

* Vectors
* Array traversal
* Conditional statements
* Modulo operator
* Alternating addition and subtraction

## 🧪 Example

**Input:**

`[1, 3, 5, 7]`

**Output:**

`-4`

## 📚 Problem Information

* **Language:** C++
* **Topic:** Array
* **Difficulty:** Easy
