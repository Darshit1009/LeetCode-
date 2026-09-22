# 2236. Root Equals Sum of Children

A simple **Binary Tree** problem that checks whether the value of the root node is equal to the sum of its left and right child nodes.

## 📌 Problem Statement

Given the root of a binary tree containing exactly three nodes:

* Root node
* Left child
* Right child

Check whether:

**Root Value = Left Child Value + Right Child Value**

Return `true` if the condition is satisfied; otherwise, return `false`.

---

## 💡 Example

Consider the following binary tree:

```text
       10
      /  \
     4    6
```

Here:

```text
4 + 6 = 10
```

Therefore, the result is:

```text
true
```

---

## 🧠 Approach

1. Check whether the root is `nullptr`.
2. Get the value of the left child.
3. Get the value of the right child.
4. Get the value of the root.
5. Compare the sum of the child values with the root value.
6. Return `true` if they are equal; otherwise, return `false`.

---

## ⏱️ Complexity Analysis

### Time Complexity

**O(1)**

Only three node values are accessed.

### Space Complexity

**O(1)**

No additional data structures are used.

---

## 🛠️ Concepts Used

* Binary Trees
* Structures in C++
* Pointers
* TreeNode representation
* Conditional statements
* Object-Oriented Programming
* Basic recursion-free tree traversal

---

## 🎯 Key Learning

This problem demonstrates how to access and compare values stored in different nodes of a binary tree using pointers.

The important relationship is:

**Left Child + Right Child = Root**

---

## 🧪 Test Case

**Input:**

```text
Root = 10
Left = 4
Right = 6
```

**Output:**

```text
true
```

Because:

```text
4 + 6 = 10
```

---

## 📚 Problem Type

**Binary Tree | Easy**

A beginner-friendly problem for understanding tree nodes and pointer access in C++.

---

## 👨‍💻 Language

* C++
* STL (`bits/stdc++.h`)
* Object-Oriented Pro
