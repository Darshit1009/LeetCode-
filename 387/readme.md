# First Unique Character in a String

## Problem

Given a string `s`, find the **first character that appears only once** in the string.

Return its index. If there is no unique character, return `-1`.

### Example

**Input:**

```text
s = "leetcode"
```

**Output:**

```text
0
```

Explanation:

The character `'l'` appears only once, and its index is `0`.

### Another Example

**Input:**

```text
s = "loveleetcode"
```

**Output:**

```text
2
```

The first character that appears only once is `'v'`, at index `2`.

---

## Approach

The solution uses a `map<char, int>` to store the frequency of every character.

### Step 1 — Count frequencies

Traverse the string and increase the frequency of each character:

```cpp
fr[s[i]]++;
```

For example:

```text
s = "leetcode"

l → 1
e → 3
t → 1
c → 1
o → 1
d → 1
```

### Step 2 — Find the first unique character

Traverse the string again from left to right.

If:

```cpp
fr[s[i]] == 1
```

then that character occurs only once, so return its index.

If no such character exists, return `-1`.

---

## Complexity

Let `n` be the length of the string.

### Time Complexity

There are two traversals of the string.

With `map`, each insertion/access takes `O(log k)`, where `k` is the number of distinct characters.

Overall:

**Time: `O(n log k)`**

Since the character set is limited, this is effectively very efficient.

### Space Complexity

The map stores the frequency of each distinct character.

**Space: `O(k)`**

---

## Key Concept

The important idea is to **count frequencies first, then scan the original string again**.

```text
String
  ↓
Count frequency of every character
  ↓
Scan from left to right
  ↓
Find first character with frequency = 1
```

This guarantees that we return the **first** unique character, not just any unique character.
