## Count the Number of Set Bits

### Description
In this program, I counted the number of set bits in a given number by using bitwise operations. A set bit means the bit value is 1 in the binary representation of a number.

### Concept
Every number in computer is stored in binary form. By checking each bit, we can find how many 1s are present in that number.

For example, decimal number 7 in binary is 111. Since there are three 1s, the number of set bits is 3.

### Program Explanation
The program takes a number as input and checks each bit one by one.

If the current bit is 1, the count is increased. Then the number is shifted to the right to check the next bit. This process continues until the number becomes 0.

By repeating this, the program counts all set bits present in the number.

### Output
3

### Conclusion
Counting set bits is useful in programming because it is used in binary operations, permissions, flags, and many bit manipulation problems.
