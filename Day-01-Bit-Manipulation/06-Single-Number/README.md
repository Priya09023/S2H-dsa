# 06. Single Number

## 🧩 Problem Statement

Given an integer array `nums`, every element appears exactly twice except for one element.
Your task is to find the element that appears only once.

🔗 Practice Link

https://leetcode.com/problems/single-number/

## 📌 Example

**Input:**

```
nums = [4, 1, 2, 1, 2]
```

**Output:**

```
4
```

---

## 💡 Approach

This problem can be efficiently solved using **Bit Manipulation (XOR)**.

### Key Properties of XOR:

* `a ^ a = 0` (same numbers cancel each other)
* `a ^ 0 = a` (number remains unchanged)

### Idea:

When we apply XOR to all elements in the array:

* Duplicate elements cancel out
* Only the unique element remains

## ⚙️ Algorithm

1. Initialize a variable `result = 0`
2. Traverse through each element in the array
3. Perform XOR operation with the current element
4. After the loop, `result` will contain the single number

## ⏱️ Complexity Analysis

* **Time Complexity:** O(n)
  (We traverse the array once)

* **Space Complexity:** O(1)
  (No extra space is used)

## 🚀 Key Points

* Uses efficient bit manipulation technique
* No need for extra data structures
* Works in a single pass
* Common interview problem

## 🏷️ Tags

* Bit Manipulation
* Arrays
* XOR
* Interview Questions
