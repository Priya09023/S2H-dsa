# 04. Palindrome Check

## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/palindrome-string/


## 🧩 Problem Statement

Given a string `s`, check whether it is a palindrome or not.

Return `1` if it is a palindrome, otherwise return `0`.


## 📌 Example

**Input:**
s = "abba"

**Output:**
1


**Input:**
s = "abc"

**Output:**
0


## 📖 Explanation

* A palindrome is a string that reads the same forward and backward
* `"abba"` is same in both directions → palindrome
* `"abc"` is different → not a palindrome


## 💡 Approach

* Use two pointers:

  * One from the start
  * One from the end
* Compare characters at both positions
* If all match → palindrome
* Else → not a palindrome


## ⚙️ Algorithm

1. Initialize two pointers:

   * `left = 0`
   * `right = length - 1`
2. Compare characters at both ends
3. If mismatch found → return 0
4. Move pointers towards center
5. If loop completes → return 1


## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)


## 🚀 Key Points

* Two pointer technique is efficient
* No extra space required
* Common interview problem
