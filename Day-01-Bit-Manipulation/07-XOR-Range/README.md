## XOR of Numbers in the Given Range

### Description
In this program, I found the XOR value of all numbers in a given range from L to R.

### Concept
Normally, to find XOR from L to R, we can calculate:

L ^ (L+1) ^ (L+2) ... ^ R

But this takes more time for large numbers.

So, I used a pattern in XOR values.

For numbers from 1 to n:

- If n % 4 == 0, XOR value is n
- If n % 4 == 1, XOR value is 1
- If n % 4 == 2, XOR value is n + 1
- If n % 4 == 3, XOR value is 0

Using this pattern, XOR in range L to R can be found by:

`XOR(1 to R) ^ XOR(1 to L-1)`

### Program Explanation
The program first finds XOR from 1 to R.

Then it finds XOR from 1 to L-1.

After that, XOR operation is performed on both values.

This gives XOR of numbers in the range L to R.

For example, if L = 3 and R = 5:

3 ^ 4 ^ 5 = 2

So the output is 2.

### Output
2

### Conclusion
By using XOR pattern, we can find range XOR in an easy and faster way.
