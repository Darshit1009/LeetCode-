# LeetCode 876 - Middle of the Linked List

## Problem

Given the head of a singly linked list, return the **middle node** of the linked list.

If there are two middle nodes, return the **second middle node**.

### Example 1

```text
Input:
1 -> 2 -> 3 -> 4 -> 5

Output:
3 -> 4 -> 5
```

### Example 2

```text
Input:
1 -> 2 -> 3 -> 4 -> 5 -> 6

Output:
4 -> 5 -> 6
```

---

## Approach

The solution uses the **Slow and Fast Pointer** technique.

Two pointers are used:

* `slow` moves **one node at a time**.
* `fast` moves **two nodes at a time**.

When `fast` reaches the end of the linked list, `slow` will be pointing to the middle node.

Since `slow` is already pointing to the middle node, returning `slow` returns the linked list starting from the middle.

For example:

```text
1 -> 2 -> 3 -> 4 -> 5
         ↑
        slow
```

Returning `slow` gives:

```text
3 -> 4 -> 5
```

---

## Algorithm

1. Initialize `slow` and `fast` at the head of the linked list.
2. Move `slow` one step.
3. Move `fast` two steps.
4. Continue until `fast` reaches the end of the list.
5. `slow` will point to the middle node.
6. Return `slow`.

---

## Complexity

### Time Complexity

```text
O(n)
```

The linked list is traversed once.

### Space Complexity

```text
O(1)
```

Only two pointers are used, so no additional data structure is required.

---

## Key Concept

The important idea is:

```text
slow  ->  1 step
fast  ->  2 steps
```

Because `fast` moves twice as fast as `slow`, when `fast` reaches the end, `slow` is at the middle.

The returned pointer represents the **remaining linked list from the middle node**, not just the middle value.

---

## LeetCode

**Problem:** 876 - Middle of the Linked List

**Difficulty:** Easy

**Topic:** Linked List, Two Pointers, Fast and Slow Pointers
