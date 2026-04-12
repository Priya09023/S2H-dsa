# 11. Sum of Two Large Numbers (Strings)

## 🔗 Practice Link

https://www.geeksforgeeks.org/dsa/sum-two-large-numbers/


## 🧩 Problem Statement

Given two numbers represented as strings, find their sum.

The numbers may be very large and cannot be stored in standard integer types.



## 📌 Example

**Input:**
s1 = "23"
s2 = "25"

**Output:**
48



**Input:**
s1 = "00"
s2 = "000"

**Output:**
0



**Input:**
s1 = "10000000"
s2 = "89990000"

**Output:**
99990000



## 📖 Explanation

* Since numbers are large, we cannot directly convert to integers
* We simulate manual addition digit by digit



## 💡 Approach

* Start from the last digit of both strings
* Add digits along with carry
* Store result digit
* Continue until all digits are processed



## ⚙️ Algorithm

1. Initialize pointers at end of both strings
2. Initialize carry = 0
3. Add digits + carry
4. Store result digit (sum % 10)
5. Update carry (sum / 10)
6. Repeat until all digits are processed
7. Reverse result
8. Remove leading zeros



## ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)



## 🚀 Key Points

* Works for very large numbers
* Simulates real-life addition
* Important string manipulation problem
