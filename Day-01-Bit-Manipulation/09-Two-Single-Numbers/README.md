# 09. Find Two Numbers Appearing Once

## 🔗 Practice Link

https://leetcode.com/problems/single-number-iii/

## 🧩 Problem Statement

Given an array `nums` of integers, every element appears exactly twice except for two elements.
Your task is to find the two elements that appear only once.

Return the result in **ascending order**.


## 📌 Example

**Input:**

```id="x7b2lm"
nums = [1, 2, 1, 3, 5, 2]
```

**Output:**

```id="q1m8sn"
[3, 5]
```


## 📖 Explanation

* Elements `1` and `2` appear twice and cancel out
* Elements `3` and `5` appear only once
* Final answer in ascending order → `[3, 5]`


## 💡 Approach

This problem can be solved efficiently using **Bit Manipulation (XOR)**.

### Key Idea:

* XOR of all elements gives `xor = x ^ y`
  (where `x` and `y` are the two unique numbers)

* Find a set bit (difference) between `x` and `y`

* Use this bit to divide elements into two groups

* XOR each group separately to get the two numbers


## ⚙️ Algorithm

1. XOR all elements → get `xor = x ^ y`
2. Find the rightmost set bit:

   * `diffBit = xor & (-xor)`
3. Divide elements into two groups:

   * Group 1: bit not set
   * Group 2: bit set
4. XOR elements in each group:

   * Get `x` and `y`
5. Sort the result in ascending order


## ⏱️ Complexity Analysis

* **Time Complexity:** O(n)
  (Single traversal of array)

* **Space Complexity:** O(1)
  (No extra space used)


## 🚀 Key Points

* Uses XOR properties to eliminate duplicates
* Efficient and optimal solution
* No need for extra data structures
* Important interview problem


## 🏷️ Tags

* Bit Manipulation
* XOR
* Arrays
* Interview Questions
