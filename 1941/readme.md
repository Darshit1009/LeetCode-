# 1941. Check if All Characters Have Equal Number of Occurrences

## Problem

Given a string `s`, determine whether all characters that occur in the string appear the **same number of times**.

Return `true` if every character has the same frequency; otherwise, return `false`.

### Example

```text
Input:  s = "abacbc"
Output: true

Explanation:
'a' → 2
'b' → 2
'c' → 2
All characters occur the same number of times.
```

```text
Input:  s = "aaabb"
Output: false

Explanation:
'a' → 3
'b' → 2
The frequencies are different.
```

## Approach

1. Use a `map<char, int>` to store the frequency of every character.
2. Traverse the string and increment the frequency of each character.
3. Store the frequency of the first character as the required frequency.
4. Traverse the map and compare every character's frequency with this value.
5. If any frequency is different, return `false`.
6. If all frequencies are equal, return `true`.



## Complexity

Let `n` be the length of the string.

* **Time Complexity:** `O(n log k)`
* **Space Complexity:** `O(k)`

Where `k` is the number of distinct characters.

Since the problem uses lowercase English letters, `k ≤ 26`, so this effectively behaves like **O(n)** time and **O(1)** extra space.

## Key Idea

The important part is that we only need to compare the frequency of every distinct character with the frequency of the first character.

```cpp
int count = ct[s[0]];
```

Then:

```cpp
if (val != count)
    return false;
```

If no frequency differs, all characters occur equally.
