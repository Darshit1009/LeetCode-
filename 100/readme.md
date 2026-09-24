# 🌳 Same Tree — LeetCode

## 📌 Problem

Given the roots of two binary trees `p` and `q`, determine whether the two trees are **the same**.

Two binary trees are considered the same if:

1. They have the same structure.
2. Corresponding nodes have the same values.

---

## 💡 Approach

We use **recursion** to compare both trees simultaneously.

For every pair of nodes:

1. If both nodes are `NULL`, they are equal.
2. If only one node is `NULL`, the trees are different.
3. If their values are different, the trees are different.
4. Recursively compare:

   * Left subtrees
   * Right subtrees

The trees are the same only when both the left and right subtrees are identical.

### 🔄 Recursive Logic

```text
isSameTree(p, q)

        |
        v
Both NULL?
   /       \
 Yes        No
  |          |
true    One NULL?
            /   \
          Yes    No
           |      |
         false  Values same?
                    /    \
                  No      Yes
                  |         |
                false   Compare left
                            AND
                        Compare right
```

---

## 🧠 Example

### Tree 1

```text
       15
      /  \
     2    18
```

### Tree 2

```text
       15
      /  \
     2    18
```

Both trees have:

* Same root value → `15`
* Same left child → `2`
* Same right child → `18`
* Same structure

### Output

```text
Both trees are same
```

--- 

## ⏱️ Complexity Analysis

Let `n` be the number of nodes being compared.

### Time Complexity

```text
O(n)
```

Each corresponding node is visited at most once.

### Space Complexity

```text
O(h)
```

where `h` is the height of the tree because of the recursive call stack.

For a balanced tree:

```text
O(log n)
```

For a completely skewed tree:

```text
O(n)
```

---

## 🔑 Key Concept

The important idea is:

```cpp
return isSameTree(p->left, q->left) &&
       isSameTree(p->right, q->right);
```

Both subtrees must be identical.

If either subtree is different, the entire tree is considered different.

---

## 🧪 Test Cases

| Tree 1      | Tree 2        | Output  |
| ----------- | ------------- | ------- |
| `[15,2,18]` | `[15,2,18]`   | `true`  |
| `[15,2,18]` | `[15,3,18]`   | `false` |
| `[15,2]`    | `[15,null,2]` | `false` |
| `[]`        | `[]`          | `true`  |

---

## 📚 Concepts Used

* Binary Trees
* Tree Traversal
* Recursion
* Pointers
* Divide and compare subtrees
* Time and Space Complexity

---

## 🔗 LeetCode

**Problem:** Same Tree

**LeetCode Problem #100**

---

## ⭐ Summary

The solution recursively compares two binary trees node by node. A pair of nodes must satisfy three conditions:

```text
Both NULL        → Same
One NULL         → Different
Different values → Different
Otherwise        → Compare left + right subtrees
```

This gives an efficient **O(n)** time solution.
