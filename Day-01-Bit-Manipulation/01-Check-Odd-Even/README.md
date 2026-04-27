# Check if a Number is Odd or Even

## Description
This program checks whether a given number is Odd or Even using bitwise operation. Instead of using modulo (`%`) or division (`/`), bitwise AND operator is used because it is faster and more efficient.

## Concept
Every number in computer is stored in binary format. To find whether a number is odd or even, we only need to check the last bit (Least Significant Bit).

- If the last bit is `0`, the number is Even.
- If the last bit is `1`, the number is Odd.

For checking this, the program uses:

`num & 1`

Here, `1` in binary is `0001`, so the AND operation checks only the last bit of the given number.

## Program Explanation
The program takes a number as input and performs bitwise AND operation with `1`.

If the result is:
- `0` → Even Number
- `1` → Odd Number

For example, if the input is `7`, its binary representation is `111`.

111  
001  

001  

The result is `1`, so the number is **Odd**.

## Input
7

## Output
Odd

## Advantages
- Faster execution
- Efficient compared to arithmetic operations
- Useful in embedded systems and low-level programming
  

## Conclusion
By using bitwise operation, odd or even can be checked in a simple and efficient way without using arithmetic operators.
