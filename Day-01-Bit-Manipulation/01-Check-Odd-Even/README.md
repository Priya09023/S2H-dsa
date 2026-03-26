🧠 Check if a Number is Odd or Even (Bit Manipulation)
📌 Problem Description
In high-performance systems like embedded applications, arithmetic operations such as division (/) and modulo (%) are relatively slow.
To optimize performance, you need to determine whether a given number is Odd or Even using bitwise operations only.

💡 Core Idea
Every number in a computer is stored in binary format.
If the last bit (Least Significant Bit - LSB) is 0 → the number is Even 
If the last bit (LSB) is 1 → the number is Odd 

⚙️ Approach
Use bitwise AND (&) with 1 
This checks only the last bit of the number 
👉 Result:
num & 1 = 0 → Even 
num & 1 = 1 → Odd 

🧪 Example
Input:
7
Binary Representation:
111
Explanation:
Last bit is 1 
So, the number is Odd 
Output:
Odd

⏱️ Complexity
Time Complexity: O(1) (constant time) 
Space Complexity: O(1) 

🚀 Why Use Bit Manipulation?
Faster than traditional arithmetic operations 
Efficient for low-level programming 
Commonly used in interviews and system design 
