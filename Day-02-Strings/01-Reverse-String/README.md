# 🔹 01 - Reverse String

## 🔗 Reference

GeeksforGeeks:
https://www.geeksforgeeks.org/dsa/reverse-a-string/

## 📌 Problem Statement

Given a string `s`, reverse the string.

Reversing a string means rearranging the characters such that:

* The first character becomes the last
* The second character becomes the second last
* And so on


## 🧾 Examples

### Example 1

**Input:**
Engineering

**Output:**
gnireenignE


### Example 2

**Input:**
abdcfe

**Output:**
efcdba


## 💡 Approach

* Use the **Two Pointer Technique**
* Initialize two pointers:

  * `i = 0` (start of string)
  * `j = n - 1` (end of string)
* Swap characters at positions `i` and `j`
* Move pointers:

  * `i++`
  * `j--`
* Repeat until `i < j`


## ⏱ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)
