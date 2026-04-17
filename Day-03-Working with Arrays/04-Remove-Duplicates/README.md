# 04. Remove Duplicates from Sorted Array

## 🔗 Practice Link

https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


## 🧩 Problem Statement

Given a sorted array, remove duplicates in-place such that each unique element appears only once.

The first k elements should contain unique values, and the remaining positions can be ignored.



## 📌 Example

**Input:**
1 1 2 2 2 3 3

**Output:**
1 2 3 _ _ _ _



**Input:**
1 1 1 2 2 3 3 3 3 4 4

**Output:**
1 2 3 4 _ _ _ _ _ _ _



## 📖 Explanation

* Since the array is sorted, duplicates appear together
* We overwrite duplicate elements using a pointer
* Only unique elements are kept in the front



## 💡 Approach

* Use two pointers:

  * One for tracking unique position
  * One for traversal
* When a new unique element is found, place it at correct position



## ⚙️ Algorithm

1. Initialize k = 1
2. Traverse array from index 1
3. If current element ≠ previous unique element:

   * Place it at index k
   * Increment k
4. Print first k elements
5. Fill remaining with "_"



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Uses two-pointer technique
* Works only for sorted arrays
* Very important interview question
