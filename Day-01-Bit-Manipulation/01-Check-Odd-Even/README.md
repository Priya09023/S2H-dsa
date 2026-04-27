## Check if a Number is Odd or Even

## Description
In this program, I checked whether a given number is odd or even by using bitwise AND operator. Normally we use modulo operator, but bitwise method is faster.

### Concept
Every number in computer is stored in binary form. To know whether a number is odd or even, we just check the last bit.

- Last bit 0 means Even number
- Last bit 1 means Odd number

For checking this, I used `num & 1`.

### Program Explanation
The program takes a number as input and performs AND operation with 1. This checks the last bit of the number.

If result is 0, it prints Even.  
If result is 1, it prints Odd.

For example, if input is 7, binary form is 111. Last bit is 1, so output is Odd.

### Output
Odd

### Conclusion
Using bitwise operator is a simple and fast way to find whether a number is odd or even.
