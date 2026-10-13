# Check If It Is a Straight Line

## Problem Description

You are given an array of coordinates, where `coordinates[i] = [x, y]` represents a point on the XY-plane. Determine whether all the points lie on the same straight line.

Return `true` if all points lie on a straight line; otherwise, return `false`.

## Approach

The solution uses the **Cross Product** method to determine whether all points lie on the same straight line.

1. Store the coordinates of the first two points as the reference line.
2. Iterate through the remaining points, starting from index `2`.
3. For each point, compare the cross products using the coordinates of the reference points.
4. If the cross products are unequal, the point does not lie on the same line, so return `false`.
5. If all points satisfy the condition, return `true`.

This method avoids division and correctly handles horizontal, vertical, and diagonal lines.

## Example 1

**Input:**
```text
coordinates = [[1,1],[2,2],[3,3]]
```

**Output:**
```text
true
```

**Explanation:**

All three points lie on the same straight line.

## Example 2

**Input:**
```text
coordinates = [[1,1],[2,2],[3,4]]
```

**Output:**
```text
false
```

**Explanation:**

The third point does not lie on the straight line formed by the first two points.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the number of points, because each remaining point is checked once.
- **Space Complexity:** O(1), because the algorithm uses only a fixed number of additional variables.

## Key Concepts

- Arrays and Vectors
- Coordinate Geometry
- Cross Product
- Linear Time Complexity

## Language

C++