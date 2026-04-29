## Check if the i-th Bit is Set or Not

### Description
In this program, I checked whether a particular bit is set or not in a given number by using bitwise operation. A set bit means the bit value is 1.

### Concept
Every number is stored in binary form in computer. Bit positions are counted from right side, starting from 0.

For example, binary form of 5 is 101.

- 0-th bit = 1
- 1-st bit = 0
- 2-nd bit = 1

To check a particular bit, I used `1 << i`. This shifts 1 to the required position. Then I used bitwise AND operation with the given number.

### Program Explanation
The program takes a number and bit position as input.

First, `1` is shifted to the left by `i` positions. After that, AND operation is performed with the given number.

If the result is not 0, it means that bit is set, so output is True.

If the result is 0, it means that bit is not set, so output is False.

For example, if input is 5 and position is 0, binary form of 5 is 101. The 0-th bit is 1, so the output is True.

### Output
True

### Conclusion
By using bitwise operation, we can easily check whether a particular bit is set or not in a number.
