# Sum of Even Numbers After Queries

## 📌 Problem Statement

You are given an integer array `nums` and a list of queries where each query is represented as:

- `queries[i][0]` → Value to add.
- `queries[i][1]` → Index in the array.

For each query:

1. Add the given value to the specified index.
2. Calculate the sum of all even numbers in the updated array.
3. Store the result.

Return an array containing the sum of even numbers after every query.

---

## 💡 Approach

This solution uses a **Brute Force** approach.

### Algorithm

1. Create a helper function `sumOfVector()`:
   - Traverse the entire array.
   - Add only even elements to the sum.
   - Return the total even sum.

2. For each query:
   - Extract the value and index.
   - Update the array element.
   - Call `sumOfVector()` to compute the current even sum.
   - Store the result in the answer vector.

3. Return the answer vector after processing all queries.

---

## 🧠 Example

### Input

```cpp
nums = [1,2,3,4]
queries = [[1,0],[-3,1],[-4,0],[2,3]]
```

### Output

```cpp
[8,6,2,4]
```

### Explanation

| Query | Updated Array | Sum of Even Numbers |
|--------|---------------|---------------------|
| +1 at index 0 | [2,2,3,4] | 8 |
| -3 at index 1 | [2,-1,3,4] | 6 |
| -4 at index 0 | [-2,-1,3,4] | 2 |
| +2 at index 3 | [-2,-1,3,6] | 4 |

---

## ⏱️ Time Complexity

### `sumOfVector()`

- Traverses the entire array.
- **Time:** `O(n)`

### Main Function

- There are `q` queries.
- For each query, `sumOfVector()` is called.

**Overall Time Complexity:**

```
O(q × n)
```

where:

- `n` = size of `nums`
- `q` = number of queries

---

## 💾 Space Complexity

- Answer vector stores one result for each query.

**Overall Space Complexity:**

```
O(q)
```

---

## ✅ Features

- Simple and easy to understand.
- Uses a helper function for cleaner code.
- Correctly updates the array after every query.
- Suitable for learning array manipulation.

---

## 🔴 Limitation

This is a **Brute Force** solution because it recalculates the sum of all even numbers after every query.

For large inputs, an optimized solution can achieve **O(n + q)** by maintaining the current even sum and updating it intelligently instead of traversing the array each time.

---

## 📚 Concepts Used

- Arrays
- Vectors
- Iteration
- Brute Force
- Simulation