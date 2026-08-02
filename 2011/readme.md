# 2011. Final Value of Variable After Performing Operations

## Problem Statement

There is a variable `X` that is initially `0`.

You are given an array of strings `operations`, where each operation is one of the following:

- `"++X"` or `"X++"` → Increment `X` by `1`
- `"--X"` or `"X--"` → Decrement `X` by `1`

Return the final value of `X` after performing all the operations.

---

## Example 1

**Input**
```text
operations = ["--X","X++","X++"]
```

**Output**
```text
1
```

**Explanation**

- `X = 0`
- `"--X"` → `X = -1`
- `"X++"` → `X = 0`
- `"X++"` → `X = 1`

Final value = **1**

---

## Example 2

**Input**
```text
operations = ["++X","++X","X++"]
```

**Output**
```text
3
```

---

## Approach

1. Initialize `X = 0`.
2. Traverse the `operations` array.
3. If the operation is `"--X"` or `"X--"`, decrement `X`.
4. Otherwise, increment `X`.
5. Return the final value of `X`.

---

## Algorithm

1. Set `X = 0`.
2. For each operation:
   - If it is a decrement operation, do `X--`.
   - Otherwise, do `X++`.
3. Return `X`.

---

## Time Complexity

- **O(n)**, where `n` is the number of operations.

## Space Complexity

- **O(1)**

---

## Topics

- Mid Level
- Array
- String
- Simulation
- Weekly Contest 259Array
