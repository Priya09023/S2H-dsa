## Rotate Array by K Elements

### Practice Link
https://leetcode.com/problems/rotate-array/description/

### Description
In this program, I rotated the elements of an array by k positions either towards the left or right.

Rotation changes the positions of elements while maintaining their order.

### Concept
The main idea is to move array elements by k positions.

- In left rotation, elements move towards the beginning of the array.
- In right rotation, elements move towards the end of the array.

The elements that move out from one side are placed back on the opposite side.

### Program Explanation
The program takes an array, value of k, and rotation direction as input.

For right rotation:

- Last k elements move to the front.
- Remaining elements shift towards the right.

For left rotation:

- First k elements move to the end.
- Remaining elements shift towards the left.

The value of k is adjusted using array size to avoid extra rotations.

For example:

Array = [1,2,3,4,5,6,7]  
k = 2  
Direction = right

After rotation:

[6,7,1,2,3,4,5]

### Output
[6,7,1,2,3,4,5]

### Conclusion
By shifting elements properly, an array can be rotated left or right by k positions in an efficient way.
