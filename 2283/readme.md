# Digit Count

## 📌 Problem Statement

Given a string `num` representing a non-negative integer, return `true` if for every digit `i` from `0` to `n - 1`, the digit `i` occurs exactly `num[i]` times in the string.

Otherwise, return `false`.

## 🧠 Approach

The solution uses a **frequency array** to count how many times each digit appears in the given string.

### Step 1: Count Digit Frequencies

Traverse the string and count the frequency of each digit.

The character digit is converted into an integer value to use it as an index in the frequency array.

### Step 2: Validate the Frequencies

Traverse the string again and compare:

* The frequency of digit `i`
* The value of the digit at position `i`

If any value does not match, return `false`.

If all values match, return `true`.

## 🔍 Example

For:

`num = "1210"`

The frequency of each digit is:

* Digit `0` → appears 1 time
* Digit `1` → appears 2 times
* Digit `2` → appears 1 time
* Digit `3` → appears 0 times

These values match the digits at their corresponding positions, so the answer is `true`.

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

The frequency array has a fixed size because there are only 10 possible digits (`0–9`).

## 🔑 Concepts Used

* Strings
* Frequency Counting
* Arrays / Vectors
* Character-to-Integer Conversion
* Array Traversal

## 🧪 Example Test Cases

| Input     | Output  |
| --------- | ------- |
| `"1210"`  | `true`  |
| `"030"`   | `false` |
| `"12580"` | `false` |

## 📚 Problem Information

* **Platform:** LeetCode
* **Problem:** Digit Count
* **Difficulty:** Easy
* **Topics:** String, Counting, Hash Table
