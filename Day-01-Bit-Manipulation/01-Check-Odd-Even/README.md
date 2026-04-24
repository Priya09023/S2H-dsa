# 🧠 Check if a Number is Odd or Even (Bit Manipulation)

## 📌 Problem Description

In high-performance systems like embedded applications, arithmetic operations such as division (`/`) and modulo (`%`) can be relatively slow.

To improve efficiency, determine whether a given number is **Odd or Even using bitwise operations only**.



## 💡 Core Idea

Every number in a computer is stored in **binary format**.

* If the **last bit (Least Significant Bit - LSB)** is `0` → the number is **Even**
* If the **last bit (LSB)** is `1` → the number is **Odd**



## ⚙️ Approach

* Use the **bitwise AND (`&`) operator** with `1`
* This operation checks only the **last bit** of the number

### 👉 Result:

* `num & 1 = 0` → **Even**
* `num & 1 = 1` → **Odd**



## 🧪 Example

**Input:**
7

**Binary Representation:**
111

**Explanation:**

* The last bit is `1`
* Therefore, the number is **Odd**

**Output:**
Odd



## ⏱️ Complexity

* **Time Complexity:** O(1) (constant time)
* **Space Complexity:** O(1)



## 🚀 Why Use Bit Manipulation?

* Faster than traditional arithmetic operations
* Efficient for low-level and performance-critical systems
* Commonly used in coding interviews and system design



## 🎯 Key Takeaway

Checking whether a number is odd or even can be done instantly using a simple bitwise operation, making it both efficient and elegant.

---
