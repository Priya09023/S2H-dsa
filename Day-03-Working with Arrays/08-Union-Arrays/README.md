# 08. Union of Two Sorted Arrays

## 🔗 Practice Link

https://leetcode.com/problems/merge-sorted-array/description/


## 🧩 Problem Statement

Given two sorted arrays, find the union of both arrays.

The union contains all unique elements from both arrays in sorted order.



## 📌 Example

**Input:**
1 2 2 3 4
2 3 5 6

**Output:**
1 2 3 4 5 6



## 📖 Explanation

* Combine elements from both arrays
* Remove duplicates
* Maintain sorted order



## 💡 Approach

* Use two-pointer technique
* Traverse both arrays simultaneously
* Add smaller element to result
* Skip duplicates



## ⚙️ Algorithm

1. Initialize two pointers i and j
2. Compare elements of both arrays
3. Add smaller element to result
4. If equal → add once and move both
5. Continue until both arrays end
6. Add remaining elements



## ⏱️ Complexity

* **Time Complexity:** O(n + m)
* **Space Complexity:** O(1) (excluding output)



## 🚀 Key Points

* Works only for sorted arrays
* Uses merging technique
* Avoid duplicates carefully
