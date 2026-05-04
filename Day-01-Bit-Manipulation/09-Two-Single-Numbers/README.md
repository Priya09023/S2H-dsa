## Find the Two Numbers Appearing Odd Number of Times

### Practice Link
https://leetcode.com/problems/single-number-iii/


### Description
In this program, I found the two numbers that appear only one time in the array, while all other numbers appear twice.

### Concept
To solve this problem, I used XOR operation.

When same numbers are XORed, the result becomes 0.

For example:

- `a ^ a = 0`
- `a ^ 0 = a`

Because of this, duplicate numbers cancel each other.

When all elements are XORed, the result will be XOR of the two single numbers.

Then I found the rightmost set bit to separate these two numbers into different groups.

After dividing into two groups, XOR is performed again in each group to get the two required numbers.

### Program Explanation
The program first performs XOR on all elements in the array.

This removes all duplicate numbers and leaves XOR of the two single numbers.

Then the rightmost set bit is found.

Using this bit, numbers are divided into two groups.

One group contains numbers with that bit as 0, and another group contains numbers with that bit as 1.

Then XOR is performed separately in both groups.

At the end, the two single numbers remain.

For example, in array [1,2,1,3,5,2], the numbers 3 and 5 appear only one time, so output is [3,5].

### Output
[3,5]

### Conclusion
By using XOR operation, we can find the two single numbers in a simple and efficient way without using extra space.
