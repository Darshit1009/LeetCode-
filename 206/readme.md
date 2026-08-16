# Reverse Linked List — LeetCode 206

## Problem

Given the head of a singly linked list, reverse the list and return the reversed list.

### Example

**Input:**

```text
1 -> 2 -> 3 -> 4 -> 5
```

**Output:**

```text
5 -> 4 -> 3 -> 2 -> 1
```

## Approach

This solution uses three pointers:

* `prev` — stores the previous node.
* `curr` — stores the current node being processed.
* `next` — temporarily stores the next node so that the remaining list is not lost.

For every node:

1. Store `curr->next` in `next`.
2. Reverse the current node's link using `curr->next = prev`.
3. Move `prev` to `curr`.
4. Move `curr` to `next`.
5. Continue until `curr` becomes `NULL`.

Finally, `prev` points to the new head of the reversed linked list.

## Algorithm

```text
prev = NULL
curr = head

while curr is not NULL:
    next = curr->next
    curr->next = prev
    prev = curr
    curr = next

return prev
```

## Dry Run

For:

```text
1 -> 2 -> 3 -> 4 -> 5 -> NULL
```

The links are reversed one by one:

```text
NULL <- 1    2 -> 3 -> 4 -> 5
NULL <- 1 <- 2    3 -> 4 -> 5
NULL <- 1 <- 2 <- 3    4 -> 5
NULL <- 1 <- 2 <- 3 <- 4    5
NULL <- 1 <- 2 <- 3 <- 4 <- 5
```

Therefore:

```text
5 -> 4 -> 3 -> 2 -> 1 -> NULL
```

## Complexity

* **Time Complexity:** `O(n)` — every node is visited once.
* **Space Complexity:** `O(1)` — only three pointer variables are used.

## Key Concept

The important step is:

```cpp
curr->next = prev;
```

This changes the direction of the linked-list pointer and reverses the link between two nodes.

## Language

* C++
* Singly Linked List
* Iterative Approach

## LeetCode

**Problem:** 206. Reverse Linked List
