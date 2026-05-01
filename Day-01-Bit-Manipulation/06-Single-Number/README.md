## Find the Number that Appears Odd Number of Times

### Description
In this program, I found the number that appears only one time in the array, while all other numbers appear twice.

Practice Link
https://leetcode.com/problems/single-number/

### Concept
To solve this problem, I used XOR operation.

The main property of XOR is:

- Same numbers give 0 → `a ^ a = 0`
- Any number XOR with 0 gives the same number → `a ^ 0 = a`

Because of this, numbers that appear twice cancel each other, and the number that appears one time remains.

### Program Explanation
The program takes all elements in the array and performs XOR operation on each element.

At first, XOR value is 0.

Then each number is XORed one by one.

Duplicate numbers become 0 and get cancelled.

At the end, the number that appears only once will remain in XOR.

For example, array = [4,1,2,1,2]

Step by step:

0 ^ 4 = 4  
4 ^ 1 = 5  
5 ^ 2 = 7  
7 ^ 1 = 6  
6 ^ 2 = 4  

Final answer is 4.

### Output
4

### Conclusion
By using XOR operation, we can find the single number in a simple and efficient way without using extra space.
