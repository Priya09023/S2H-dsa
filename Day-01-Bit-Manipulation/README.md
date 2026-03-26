🧠 Day 01 – Bit Manipulation
📌 Topic Details
Topic: Bit Manipulation
Number of Questions: 10
📖 What is Bit Manipulation?

Bit manipulation is a technique used to solve problems using binary operations (bits).

It helps in:

Optimizing performance
Reducing time complexity
Solving problems efficiently using low-level operations

👉 It is widely used in:

Competitive Programming
Technical Interviews
System-level programming
⚙️ Bitwise Operators
🔹 AND (&)
1 & 1 = 1
Otherwise → 0
🔹 OR (|)
If any bit is 1 → 1
Both 0 → 0
🔹 XOR (^)
Different bits → 1
Same bits → 0
✨ Special Rules:
A ^ A = 0
A ^ 0 = A
🔹 NOT (~)
Inverts all bits
Formula:
~A = -(A + 1)
🔹 Left Shift (<<)
Shifts bits to the left
Adds 0 on right

👉 Rule:
A << n = A × 2ⁿ

🔹 Right Shift (>>)
Shifts bits to the right

👉 Rule:
A >> n = A / 2ⁿ

🔢 Negative Number Representation
1️⃣ Sign-Magnitude
MSB represents sign
0 → Positive
1 → Negative

❌ Disadvantage:

Two zeros (+0, -0)
Complex calculations
2️⃣ One’s Complement
Flip all bits

❌ Disadvantage:

Still has two zeros
3️⃣ Two’s Complement (Most Important ⭐)

Steps:

Invert bits
Add 1

✅ Advantages:

Only one zero
Easy arithmetic
Used in modern computers
📏 Range Formula

For n bits:

-2^(n-1) to 2^(n-1) - 1
🚀 Practice Problems
✅ 1. Check Odd or Even

Determine whether a number is odd or even using bitwise operation.

✅ 2. Count Set Bits

Count the number of 1s in binary representation.

✅ 3. Check i-th Bit

Check whether a specific bit is set or not.

✅ 4. Power of Two

Check if a number is a power of 2.

✅ 5. Minimum Bit Flips

Find number of bits to flip to convert one number into another.

✅ 6. Single Number

Find the number that appears only once in an array.

✅ 7. XOR in Range

Find XOR of numbers from L to R efficiently.

✅ 8. XOR Queries

Answer multiple XOR range queries using prefix XOR.

✅ 9. Two Single Numbers

Find two numbers that appear only once.

✅ 10. Power Set

Generate all subsets of a given set.
