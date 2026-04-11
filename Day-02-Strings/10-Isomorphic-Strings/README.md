# 10. Isomorphic Strings

## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/check-if-two-given-strings-are-isomorphic-to-each-other/


## 🧩 Problem Statement

Given two strings `s1` and `s2`, determine whether they are isomorphic.

Two strings are isomorphic if characters in `s1` can be replaced to get `s2` with a consistent and unique mapping.



## 📌 Example

**Input:**
s1 = "aab"
s2 = "xxy"

**Output:**
true



**Input:**
s1 = "aab"
s2 = "xyz"

**Output:**
false



**Input:**
s1 = "abc"
s2 = "xxz"

**Output:**
false



## 📖 Explanation

* Each character in `s1` must map to a unique character in `s2`
* Mapping should be consistent throughout
* No two characters in `s1` should map to the same character in `s2`



## 💡 Approach

* Use two mappings:

  * `s1 → s2`
  * `s2 → s1`
* Traverse both strings together
* Check mapping consistency



## ⚙️ Algorithm

1. Initialize two mapping arrays/maps
2. Traverse both strings
3. If mapping does not exist → create mapping
4. If mapping exists → check consistency
5. If mismatch found → return false
6. If all checks pass → return true



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Requires bidirectional mapping
* Important hashing problem
* Common interview question
