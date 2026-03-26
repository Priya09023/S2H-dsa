🧠 Count the Number of Set Bits
📌 Problem Description

You are working on a system that stores user permissions using binary numbers.

Each bit in the binary representation indicates:

1 → Permission enabled
0 → Permission disabled

👉 Your task is to count how many permissions are active (number of 1s) in a given number.

💡 Core Idea

A number in decimal can be represented in binary form.

Example:
13 → 1101 (binary)
Number of 1s = 3

👉 So, the answer is 3 active permissions

⚙️ Approach (Efficient Method)

We use an optimized technique called Brian Kernighan’s Algorithm.

🔥 Key Concept:
Each operation removes the rightmost set bit (1)
Repeat until the number becomes 0
Count how many times this happens
🧪 Example
Input
7
Binary Representation
111
Explanation
There are three 1s
So, total active permissions = 3
Output
3
⏱️ Complexity
Time Complexity: O(number of set bits)
Space Complexity: O(1)
🚀 Why This Approach?

✔ Faster than checking every bit
✔ Reduces unnecessary operations
✔ Commonly asked in coding interviews
✔ Useful in low-level and system programming
