# 07. XOR of Numbers in a Given Range

## 🧩 Problem Statement

Given two integers `L` and `R`, find the XOR of all numbers in the range `[L, R]`.

## 📌 Example

**Input:**

```
L = 3, R = 5
```

**Output:**

```
2
```

**Explanation:**

```
3 ^ 4 ^ 5 = 2
```

## 💡 Approach

A direct approach is to XOR all numbers from `L` to `R`, but this can be inefficient for large ranges.

An optimized approach uses properties of XOR:

### Key Idea:

* XOR of range `[L, R]` can be written as:

  `XOR(L..R) = XOR(1..R) ^ XOR(1..L-1)`

* There is a repeating pattern for `XOR(1..n)` based on `n % 4`


## 🔁 Pattern for XOR(1 to n)

| n % 4 | XOR(1..n) |
| ----- | --------- |
| 0     | n         |
| 1     | 1         |
| 2     | n + 1     |
| 3     | 0         |

## ⚙️ Algorithm

1. Define a function to compute XOR from `1` to `n` using the pattern
2. Compute:

   * `XOR(1..R)`
   * `XOR(1..L-1)`
3. Take XOR of both results
4. The result gives XOR of range `[L, R]`

## ⏱️ Complexity Analysis

* **Time Complexity:** O(1)
  (Using pattern-based calculation)

* **Space Complexity:** O(1)

## 🚀 Key Points

* Much faster than iterating through the range
* Uses mathematical pattern in XOR
* Important for optimization in interviews
* Common bit manipulation problem

## 🏷️ Tags

* Bit Manipulation
* XOR
* Mathematical Pattern
* Optimization

## 🔗 Practice Reference

* LeetCode (similar problems)
* Bit Manipulation concepts

---
