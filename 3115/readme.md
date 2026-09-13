# LeetCode - Maximum Prime Difference

## Problem

Given an integer array nums, find the maximum difference between the indices of two prime numbers.

Return:

last prime index - first prime index

If there is only one prime number in the array, return 0.

## Approach

1. Traverse the array using a for loop.

2. Directly check the prime numbers 2, 3, 5, and 7.

3. For numbers greater than 10, check whether they are not divisible by 2, 3, 5, or 7.

4. Store the indices of the prime numbers in a vector.

5. Sort the stored indices.

6. Find the difference between the last and first prime indices.

7. If there is only one prime index, return 0.

Example

For:

nums = [4, 8, 2, 8]

The prime number is:

* 2 → index 2

Only one prime number exists.

Result:

0

Another example:

nums = [4, 3, 8, 11, 20, 13]

Prime numbers and their indices:

* 3 → index 1

* 11 → index 3

* 13 → index 5

Maximum difference:

5 - 1 = 4

Complexity

### Time Complexity

O(n log n)

The array traversal takes O(n), while sorting the prime indices takes O(n log n).

### Space Complexity

O(n)

The vector stores the indices of the prime numbers.

Key Concept

The important part is finding the first and last prime indices:

* First prime → smallest index

* Last prime → largest index

Therefore:

answer = lastPrimeIndex - firstPrimeIndex

Language

C++