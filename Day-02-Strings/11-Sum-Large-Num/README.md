## Sum of Two Large Numbers as Strings

### Practice Link
https://www.geeksforgeeks.org/dsa/sum-two-large-numbers/

### Description
In this program, I found the sum of two large numbers given in string format.

The numbers can be very large, so they may not fit in normal integer data types.

### Concept
The main idea is to perform addition like the normal manual addition method.

The program starts adding digits from the last position of both strings.

Along with the digits, carry is also added.

After every addition:

- current digit is stored
- carry is updated for next step

This process continues until all digits are processed.

### Program Explanation
The program takes two strings as input.

It starts traversing both strings from right to left.

Digits are converted into numbers and added along with carry.

The last digit of the sum is added to the result, and carry is updated.

After processing all digits, if carry is still present, it is also added.

Since digits are added from right to left, the result is reversed at the end.

For example:

s1 = "23"  
s2 = "25"

23 + 25 = 48

So output is "48".

### Output
48

### Conclusion
By processing digits one by one, we can add very large numbers stored as strings without using large integer data types.
