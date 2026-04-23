# 10. Single Number (Using XOR)

## 🔗 Practice Link

https://leetcode.com/problems/single-number/description/


## 🧩 Problem Statement

Given an array where every element appears twice except one, find the element that appears only once.



## 📌 Example

**Input:**
2 2 1

**Output:**
1



**Input:**
4 1 2 1 2

**Output:**
4



## 📖 Explanation

* All elements appear twice except one
* Duplicate elements cancel each other
* The remaining element is the answer



## 💡 Approach

* Use XOR operation
* XOR of same numbers = 0
* XOR with 0 = number itself



## ⚙️ Algorithm

1. Initialize result = 0
2. Traverse array
3. XOR each element with result
4. Final result will be the single number



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Uses bit manipulation
* No extra memory required
* Very efficient solution
