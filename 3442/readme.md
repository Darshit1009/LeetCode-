# LeetCode - Maximum Difference Between Odd and Even Frequency

## Problem

Given a string `s`, find the difference between:

* The **maximum frequency of a character with an odd frequency**
* The **minimum frequency of a character with an even frequency**

Return:

`maximum odd frequency - minimum even frequency`

## Approach

1. Count the frequency of every character using a `map`.
2. Store the unique frequencies in a `set`.
3. Convert the set into a vector.
4. Find:

   * The maximum odd frequency.
   * The minimum even frequency.
5. Return their difference.

## Example

For a string where the character frequencies are:

* `a → 5`
* `b → 2`
* `c → 3`
* `d → 4`

Maximum odd frequency = `5`

Minimum even frequency = `2`

Result:

`5 - 2 = 3`

## Complexity

### Time Complexity

**O(n log n)**

The frequency counting takes `O(n)`, while inserting frequencies into the set takes logarithmic time.

### Space Complexity

**O(n)**

The map, set, and vector store frequency information.

## Key Concept

The important part is selecting the correct frequency:

* **Odd → maximum**
* **Even → minimum**

Therefore:

`answer = maxOdd - minEven`

## Language

C++
