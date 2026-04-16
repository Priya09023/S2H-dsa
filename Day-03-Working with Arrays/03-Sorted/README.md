# 03. Check if Array is Sorted

## 🔗 Practice Link

https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


## 🧩 Problem Statement

Given an array of size n, check whether the array is sorted in **ascending (non-decreasing) order** or not.

Return:

* **true** → if sorted
* **false** → if not sorted



## 📌 Example

**Input:**
5
1 2 3 4 5

**Output:**
true



**Input:**
5
5 4 6 7 8

**Output:**
false



## 📖 Explanation

* Compare each element with the previous one
* If any element is smaller than the previous element → array is not sorted
* Otherwise, the array is sorted



## 💡 Approach

* Traverse the array from index 1
* Compare current element with previous element
* If condition fails → return false
* If loop completes → return true



## ⚙️ Algorithm

1. Read array size and elements
2. Traverse from index 1 to n-1
3. If arr[i] < arr[i-1] → return false
4. If no violation → return true



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Simple comparison problem
* No extra space required
* Important for understanding sorting concepts
