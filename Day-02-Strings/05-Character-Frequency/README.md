# 05. Character Frequency in a String


## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/frequency-of-a-character-in-a-string/


## 🧩 Problem Statement

Given a string `s` and a character `ch`, find the frequency of that character in the string.


## 📌 Example

**Input:**
s = "Aditya university"
Character = 'i'

**Output:**
3


## 📖 Explanation

* Count how many times the given character appears in the string
* In the example, character `'i'` appears 3 times


## 💡 Approach

* Traverse the string character by character
* Compare each character with the given character
* Increase count whenever a match is found


## ⚙️ Algorithm

1. Initialize count = 0
2. Loop through the string
3. If current character == given character → increment count
4. After loop ends, return count


## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)


## 🚀 Key Points

* Simple string traversal problem
* Case-sensitive comparison
* No extra data structures required
