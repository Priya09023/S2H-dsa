## Checking Odd or Even using Bitwise Operator

In this program, I used bitwise AND operator to find whether a given number is odd or even. We usually use modulo operator (`%`) to check this, but here I used bitwise operator because it is a simple and faster method.

The concept behind this is based on binary numbers. In computer, every number is stored in binary format using 0s and 1s. To know whether a number is odd or even, we only need to check the last bit of that binary number.

If the last bit is 0, the number is Even.  
If the last bit is 1, the number is Odd.

For this checking, I used `num & 1`. Here `&` is bitwise AND operator. It compares the number with 1 and checks only the last bit.

For example, if the number is 7, its binary value is 111. The last bit is 1, so it is an Odd number.

If the number is 8, its binary value is 1000. The last bit is 0, so it is an Even number.

By using bitwise operator, we can find odd or even in an easy way. This method is also efficient because bitwise operations are faster compared to normal arithmetic operations.
