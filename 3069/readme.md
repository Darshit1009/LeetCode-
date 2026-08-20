# Result Array

## Problem

Given an integer array `nums`, create two arrays `firstarr` and `secondarr`.

* The first element goes into `firstarr`.
* The second element goes into `secondarr`.
* For every remaining element:

  * If the last element of `firstarr` is greater than the last element of `secondarr`, add the current element to `firstarr`.
  * Otherwise, add it to `secondarr`.
* Finally, concatenate `secondarr` to `firstarr` and return the result.

## Approach

1. Create two empty vectors:

   * `firstarr`
   * `secondarr`
2. Insert `nums[0]` into `firstarr`.
3. Insert `nums[1]` into `secondarr`.
4. Traverse the remaining elements from index `2`.
5. Compare the last elements of both arrays:

   ```cpp
   firstarr.back() > secondarr.back()
   ```
6. Add the current element to the appropriate array.
7. Copy all elements of `secondarr` after `firstarr`.
8. Return the combined array.

## Example

### Input

```text
nums = [2, 1, 3, 4, 5]
```

### Process

Initially:

```text
firstarr  = [2]
secondarr = [1]
```

`3`:

```text
2 > 1 → firstarr
firstarr = [2, 3]
```

`4`:

```text
3 > 1 → firstarr
firstarr = [2, 3, 4]
```

`5`:

```text
4 > 1 → firstarr
firstarr = [2, 3, 4, 5]
```

Finally:

```text
firstarr  = [2, 3, 4, 5]
secondarr = [1]
```

Result:

```text
[2, 3, 4, 5, 1]
```



## Complexity

### Time Complexity

**O(n)**

We traverse the array once and then append the elements of `secondarr`.

### Space Complexity

**O(n)**

We use `firstarr`, `secondarr`, and `ans` to store the elements.

## Key Point

Instead of using:

```cpp
firstarr[firstarr.size() - 1]
```

you can use:

```cpp
firstarr.back()
```

Similarly:

```cpp
secondarr.back()
```

`back()` directly gives the last element of a vector.
