🔹 03. Check if the i-th Bit is Set
📝 Problem Statement

Given two integers n and i, determine whether the i-th bit (0-indexed from the least significant bit) in the binary representation of n is set (1) or not (0).

Return True if the bit is set, otherwise return False.

📥 Input
5 0
📤 Output
True
💡 Explanation
Binary representation of 5 is 101
Counting from the right (LSB), the 0-th bit is 1
Hence, the result is True
🧠 Approach
Shift the number 1 to the left by i positions
Perform a bitwise AND operation with n
If the result is non-zero, the bit is set
Otherwise, the bit is not set
⏱️ Complexity
Time Complexity: O(1)
Space Complexity: O(1)
🚀 Key Idea

Use bitwise operations to efficiently check individual bits in constant time.
