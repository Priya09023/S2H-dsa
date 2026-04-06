# 06. Pangram Check

## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/pangram-checking/


## 🧩 Problem Statement

Given a string `s`, check whether it is a Pangram or not.

A Pangram is a sentence that contains all letters of the English alphabet (a–z).


## 📌 Example

**Input:**
s = "The quick brown fox jumps over the lazy dog"

**Output:**
true


**Input:**
s = "The quick brown fox jumps over the dog"

**Output:**
false


## 📖 Explanation

* A Pangram must contain all 26 letters from 'a' to 'z'
* First example contains all letters → true
* Second example is missing some letters → false


## 💡 Approach

* Create an array or set to track characters
* Traverse the string
* Mark each alphabet character as visited
* Check if all 26 characters are present


## ⚙️ Algorithm

1. Initialize a frequency array of size 26
2. Traverse the string
3. Convert each character to lowercase
4. If character is alphabet → mark it
5. Check if all 26 letters are marked
6. If yes → return true, else false


## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)


## 🚀 Key Points

* Case-insensitive problem
* Ignore spaces and special characters
* Uses basic hashing concept
