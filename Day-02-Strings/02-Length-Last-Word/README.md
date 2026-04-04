# 02. Length of Last Word


## 🔗 Practice Link

https://leetcode.com/problems/length-of-last-word/


## 🧩 Problem Statement

Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A word is defined as a substring consisting of non-space characters.


## 📌 Example

**Input:**
`s = "Hello World"`

**Output:**
`5`


**Input:**
`s = "fly me to the moon"`

**Output:**
`4`


## 📖 Explanation

* Ignore trailing spaces
* Identify the last word
* Count its length


## 💡 Approach

* Traverse the string from the end
* Skip all trailing spaces
* Count characters until a space is found
* The count gives the length of the last word


## ⚙️ Algorithm

1. Start from the end of the string
2. Skip spaces
3. Count characters of the last word
4. Stop when a space is encountered
5. Return the count


## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)


## 🚀 Key Points

* Handle trailing spaces carefully
* No need for extra data structures
* Simple and efficient solution
