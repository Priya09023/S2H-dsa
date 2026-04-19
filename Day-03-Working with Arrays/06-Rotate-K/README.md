# 06. Rotate Array by K Elements


## 🔗 Practice Link

https://leetcode.com/problems/rotate-array/description/


## 🧩 Problem Statement

Given an array, rotate it by k positions either to the left or right.



## 📌 Example

**Input:**
1 2 3 4 5 6 7
k = 2 (right)

**Output:**
6 7 1 2 3 4 5



**Input:**
1 2 3 4 5 6
k = 2 (left)

**Output:**
3 4 5 6 1 2



## 📖 Explanation

* Left rotation moves elements to the front
* Right rotation moves elements to the end
* Rotation wraps around the array



## 💡 Approach

* Use reversal technique
* Reverse entire array
* Reverse parts based on rotation type



## ⚙️ Algorithm

### For Right Rotation:

1. Reverse entire array
2. Reverse first k elements
3. Reverse remaining elements

### For Left Rotation:

1. Reverse first k elements
2. Reverse remaining elements
3. Reverse entire array



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Efficient in-place solution
* Avoids extra space
* Important for interview problems
