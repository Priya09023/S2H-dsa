# 03. First Occurrence of Substring

## 🔗 Practice Link

https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/


## 🧩 Problem Statement

Given two strings `haystack` and `needle`, return the index of the first occurrence of `needle` in `haystack`.

If `needle` is not found, return `-1`.


## 📌 Example

**Input:**
haystack = "sadbutsad"
needle = "sad"

**Output:**
0


**Input:**
haystack = "leetcode"
needle = "leeto"

**Output:**
-1


## 📖 Explanation

* In the first example, `"sad"` appears at index 0 and 6
* We return the first occurrence → `0`
* In the second example, substring is not found → `-1`


## 💡 Approach

* Traverse the main string (`haystack`)
* For each index, compare substring with `needle`
* If match is found, return index
* If no match, return `-1`


## ⚙️ Algorithm

1. Loop through `haystack` from index `0` to `n - m`
2. For each position, compare characters with `needle`
3. If all characters match, return the index
4. If no match found, return `-1`


## ⏱️ Complexity

* **Time Complexity:** O(n * m)
* **Space Complexity:** O(1)


## 🚀 Key Points

* Simple substring matching problem
* Built-in functions can simplify solution
* Important for understanding pattern matching
