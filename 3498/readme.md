# 🔄 3498. Reverse Degree of a String

**LeetCode Problem:** 3498 - Reverse Degree of a String

## 📌 Problem Description

Given a string `s`, calculate its **reverse degree**.

The reverse degree of each character is determined by its position in the reverse alphabet:

| Character | Reverse Value |
| --------- | ------------: |
| a         |            26 |
| b         |            25 |
| c         |            24 |
| ...       |           ... |
| y         |             2 |
| z         |             1 |

For every character, its reverse value is multiplied by its **1-based position** in the string.

The final answer is the sum of all these products.

---

## 💡 Approach

The reverse alphabet position does not need to be manually defined for every character.

The reverse value of a character can be calculated using character arithmetic:

**Reverse Value = Position of `z` − Position of character + 1**

This allows the reverse value of any lowercase English letter to be calculated in constant time.

For each character:

1. Find its reverse alphabet value.
2. Determine its 1-based position in the string.
3. Multiply the reverse value by the position.
4. Add the result to the total sum.

An additional check is used to handle an empty string.

---

## 🔍 Example

Consider:

**Input:**

`abc`

Reverse alphabet values:

* `a → 26`
* `b → 25`
* `c → 24`

Positions:

* `a → 1`
* `b → 2`
* `c → 3`

Calculation:

`26 × 1 + 25 × 2 + 24 × 3`

`= 26 + 50 + 72`

`= 148`

Therefore, the reverse degree is:

**148**

---

## 🧠 Key Concept

The main concept used in this solution is **character arithmetic**.

Instead of creating a separate mapping for all 26 letters, the reverse position can be calculated directly from the character's ASCII value.

This makes the solution simple and efficient.

---

## ⏱️ Complexity Analysis

### Time Complexity

**O(n)**

The string is traversed once, where `n` is the length of the string.

### Space Complexity

**O(1)**

Only a constant amount of additional memory is used.

---

## 🛠️ Concepts Used

* Strings
* Character arithmetic
* ASCII values
* Iteration
* Basic mathematical calculation
* Time and space complexity analysis

---

## 📚 Problem Details

**Problem:** 3498. Reverse Degree of a String

**Language:** C++

**Difficulty:** Easy
