## Count Number of Bits to be Flipped to Convert A to B

###  Problem Link
https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

### Description
In this program, I found how many bits need to be changed to convert one number into another number.

### Concept
To solve this problem, I used XOR operation.

When two bits are different, XOR gives 1.  
When two bits are same, XOR gives 0.

So, by doing `start ^ goal`, we can know which bits are different. Then we count how many 1s are present. That count is the number of bit flips needed.

### Program Explanation
The program takes two numbers as input.

First, XOR operation is performed between start and goal. This gives a new number where different bits become 1.

Then the program checks each bit one by one.

If the bit is 1, count is increased. After that, the number is shifted right to check the next bit.

This process continues until all bits are checked.

For example, start = 10 and goal = 7.

10 = 1010  
7 = 0111  

After XOR:

1010  
0111  
----  
1101  

Here, there are three 1s, so 3 bit flips are needed.

### Output
3

### Conclusion
By using XOR operation, we can easily find the minimum number of bit changes needed to convert one number into another.
