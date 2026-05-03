## XOR Queries of a Subarray

### Practice Link
https://leetcode.com/problems/xor-queries-of-a-subarray/

### Description
In this program, I found the XOR of elements between the given left and right positions for each query in the array.

### Concept
To solve this problem efficiently, I used Prefix XOR.

Prefix XOR means storing XOR values from starting index up to current index.

For example, if array is [1,3,4,8]:

- prefix[0] = 1
- prefix[1] = 1 ^ 3 = 2
- prefix[2] = 1 ^ 3 ^ 4 = 6
- prefix[3] = 1 ^ 3 ^ 4 ^ 8 = 14

By using prefix XOR, we can find XOR of any range quickly.

Formula:

If L = 0 → answer = prefix[R]

If L > 0 → answer = prefix[R] ^ prefix[L-1]

### Program Explanation
The program first creates a prefix XOR array.

Each position stores XOR of all elements from beginning up to that position.

After creating prefix array, each query is processed.

If left index is 0, result is directly taken from prefix[right].

Otherwise, XOR is calculated using:

`prefix[R] ^ prefix[L-1]`

This gives XOR of elements between left and right.

For example, for query [1,2]:

3 ^ 4 = 7

So output is 7.

### Output
[2,7,14,8]

### Conclusion
By using Prefix XOR, range XOR queries can be solved in a simple and faster way.
