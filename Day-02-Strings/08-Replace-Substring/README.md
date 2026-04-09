# 08. Replace All Occurrences of Substring

## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/find-and-replace-all-occurrence-of-a-substring-in-the-given-string/


## 🧩 Problem Statement

Given three strings `s`, `s1`, and `s2`, replace all occurrences of substring `s1` in string `s` with `s2`.



## 📌 Example

**Input:**
s = "abababa"
s1 = "aba"
s2 = "a"

**Output:**
aba



**Input:**
s = "geeksforgeeks"
s1 = "eek"
s2 = "ok"

**Output:**
goksforgoks



## 📖 Explanation

* Find all occurrences of substring `s1` in string `s`
* Replace each occurrence with `s2`
* Continue until all occurrences are replaced



## 💡 Approach

* Traverse the string
* Check if substring matches at current position
* If match found:

  * Append replacement string
  * Skip matched part
* Else:

  * Add current character



## ⚙️ Algorithm

1. Initialize an empty result string
2. Traverse original string
3. If substring matches:

   * Add `s2` to result
   * Move index by length of `s1`
4. Else:

   * Add current character
   * Move index by 1
5. Return result



## ⏱️ Complexity

* **Time Complexity:** O(n * m)
* **Space Complexity:** O(n)



## 🚀 Key Points

* Careful while handling overlapping substrings
* Built-in functions can simplify solution
* Useful string manipulation problem
