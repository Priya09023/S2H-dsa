# 02. Second Smallest and Second Largest Element

## 🔗 Practice Link

https://www.geeksforgeeks.org/find-second-smallest-and-second-largest-element-in-an-array/


## 🧩 Problem Statement

Given an array of integers, find the second smallest and second largest elements.

If they do not exist, return -1 -1.



## 📌 Example

**Input:**
6
1 2 4 7 7 5

**Output:**
2 5



**Input:**
1
1

**Output:**
-1 -1



## 📖 Explanation

* The smallest and largest elements are ignored
* We find the next smallest and next largest values
* If no such values exist → return -1



## 💡 Approach

* Track four values:

  * smallest
  * second smallest
  * largest
  * second largest
* Traverse the array once
* Update values accordingly



## ⚙️ Algorithm

1. Initialize smallest and largest values
2. Traverse the array
3. Update smallest and second smallest
4. Update largest and second largest
5. Check if valid second values exist
6. Print result



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Avoid sorting for better efficiency
* Handle duplicates carefully
* Important interview question
