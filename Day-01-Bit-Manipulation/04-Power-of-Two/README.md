# 04. Power of Two

## 🔗 Problem Link

https://leetcode.com/problems/power-of-two/

## 📌 Problem Statement

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two if there exists an integer `x` such that:

```
n = 2^x
```

---

## 🧾 Example

```
Input: n = 16
Output: true

Explanation:
16 = 2^4
```

---

## 💡 Approach (Bit Manipulation)

* A power of two has **only one set bit (1)** in its binary representation.
* Using the expression:

```
n & (n - 1)
```

* This removes the lowest set bit.
* If the result is `0`, then `n` has only one set bit → it is a power of two.

## ⚙️ Algorithm

1. Check if `n > 0`
2. Check if `(n & (n - 1)) == 0`
3. If both conditions are true → return `true`
4. Else → return `false`

## ⏱️ Complexity

* Time Complexity: `O(1)`
* Space Complexity: `O(1)`


## 🏷️ Tags

* Bit Manipulation
* Mathematics
* Interview Preparation
