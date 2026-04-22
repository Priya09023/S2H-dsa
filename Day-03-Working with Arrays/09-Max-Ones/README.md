# 09. Maximum Consecutive Ones

## 🔗 Practice Link

https://leetcode.com/problems/max-consecutive-ones/description/


## 🧩 Problem Statement

Given a binary array (containing only 0s and 1s), find the maximum number of consecutive 1’s.



## 📌 Example

**Input:**
1 1 0 1 1 1

**Output:**
3



**Input:**
1 0 1 1 0 1

**Output:**
2



## 📖 Explanation

* Count consecutive 1’s
* Reset count when 0 appears
* Track maximum count



## 💡 Approach

* Traverse the array
* Maintain a counter for consecutive 1’s
* Update maximum count
* Reset counter when 0 is found



## ⚙️ Algorithm

1. Initialize count = 0, maxCount = 0
2. Traverse array
3. If element is 1:

   * Increment count
   * Update maxCount
4. Else:

   * Reset count to 0
5. Print maxCount



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Simple traversal problem
* Works only for binary arrays
* Frequently asked in interviews
