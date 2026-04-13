# 12. Number to Words


## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/program-to-convert-a-given-number-to-words-set-2/


## 🧩 Problem Statement

Convert a given number into its word representation.



## 📌 Example

**Input:**
438237764

**Output:**
forty three crore eighty two lakh thirty seven thousand seven hundred sixty four



**Input:**
999999

**Output:**
nine lakh ninety nine thousand nine hundred ninety nine



**Input:**
1000

**Output:**
one thousand



## 📖 Explanation

* Break the number into parts:

  * Crore
  * Lakh
  * Thousand
  * Hundreds
* Convert each part into words



## 💡 Approach

* Divide number into segments
* Convert each segment separately
* Combine results in correct order



## ⚙️ Algorithm

1. Handle crore part
2. Handle lakh part
3. Handle thousand part
4. Handle remaining number
5. Convert each part using helper function
6. Combine results



## ⏱️ Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(1)



## 🚀 Key Points

* Uses Indian numbering system
* Break problem into smaller parts
* String building technique
