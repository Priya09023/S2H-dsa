## Check if a Number is Power of 2 or Not

### Description
In this program, I checked whether a given number is power of 2 or not by using bitwise operation.

###  Problem Link
https://leetcode.com/problems/power-of-two/

### Concept
Power of 2 numbers have only one set bit in binary form.

For example:

- 2 = 10
- 4 = 100
- 8 = 1000
- 16 = 10000

In these numbers, only one bit is 1 and remaining bits are 0.

For checking this, I used `n & (n - 1)`.

### Program Explanation
The program takes a number as input and first checks whether it is greater than 0.

Then bitwise AND operation is performed between `n` and `n - 1`.

If the result is 0, it means only one set bit is present, so it is a power of 2.

If the result is not 0, it means more than one set bit is present, so it is not a power of 2.

For example, if input is 16, binary form is 10000. It has only one set bit, so the output is True.

### Output
True

### Conclusion
By using bitwise operation, we can easily find whether a number is power of 2 or not.n
