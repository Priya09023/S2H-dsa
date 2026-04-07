# 07. Anagram Check

## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/check-whether-two-strings-are-anagram-of-each-other/


## 🧩 Problem Statement

Given two strings `s1` and `s2`, check whether they are anagrams of each other.

Two strings are anagrams if they contain the same characters with the same frequency.


## 📌 Example

**Input:**
s1 = "lemon"
s2 = "melon"

**Output:**
true


**Input:**
s1 = "allergy"
s2 = "allergyy"

**Output:**
false


**Input:**
s1 = "listen"
s2 = "lists"

**Output:**
false


## 📖 Explanation

* Anagrams must have:

  * Same characters
  * Same frequency of each character
* If any character count differs → not an anagram


## 💡 Approach

* Use a frequency array of size 26
* Increase count for first string
* Decrease count for second string
* If all values are zero → anagram


## ⚙️ Algorithm

1. Initialize frequency array of size 26
2. Traverse first string → increment count
3. Traverse second string → decrement count
4. Check all values:

   * If all are zero → true
   * Else → false


## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)


## 🚀 Key Points

* Efficient method using hashing
* Avoid sorting for better performance
* Common interview question
