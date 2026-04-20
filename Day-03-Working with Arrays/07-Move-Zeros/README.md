# 07. Move Zeros to End

## 🔗 Practice Link

https://leetcode.com/problems/move-zeroes/description/


## 🧩 Problem Statement

Given an array, move all zeros to the end while maintaining the relative order of non-zero elements.



## 📌 Example

**Input:**
1 0 2 3 0 4 0 1

**Output:**
1 2 3 4 1 0 0 0



## 📖 Explanation

* Non-zero elements should remain in the same order
* All zeros should be shifted to the end



## 💡 Approach

* Use two-pointer technique
* One pointer tracks position for non-zero elements
* Swap elements when a non-zero is found



## ⚙️ Algorithm

1. Initialize pointer j = 0
2. Traverse the array
3. If element is non-zero:

   * Swap with arr[j]
   * Increment j
4. Continue till end
5. Print array



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Maintains order of elements
* Uses in-place swapping
* Common interview problem
