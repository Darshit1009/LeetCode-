# 3945. Digit Frequency Score

## Problem Statement

You are given an integer n.

-The score of n is defined as the sum of d * freq(d) over all distinct digits d, where freq(d) denotes the number of times the digit d appears in n.

-Return an integer denoting the score of n.

---
## Example

# Example 1
 
**Input**
```text
n=122```

**Output**
```text
9
```

**Explanation**
-The digit 1 appears 1 time, contributing 1 * 1 = 1.

-The digit 2 appears 2 times, contributing 2 * 2 = 4.

-Thus, the score of n is 1 + 4 = 5.

**Constraints**
-`1 <= n <= 109`

## Approach

1.create one vector of size 10 and initialize all element with 0
2.define sum as 0
3.Find the Frequency of All element  
4.Do Multiplication of digit and its index
5.return sum

## Complexity Analysis

- **Time Complexity:** `O(log₁₀ x)`
  - Each digit of the number is processed exactly once.

- **Space Complexity:** `O(1)`
  - Only constant extra space is required.

