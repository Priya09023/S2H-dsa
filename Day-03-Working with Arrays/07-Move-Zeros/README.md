## Move Zeros to End

### Practice Link
https://leetcode.com/problems/move-zeroes/description/

### Description

In this program, I moved all the zeros in the array to the end while keeping the order of the remaining elements the same.

The array is modified without using any extra array.

### Concept

The main idea is to move all non-zero elements to the front.

While traversing the array:

- If the element is non-zero, place it in the next available position.
- Zeros automatically remain at the end after all non-zero elements are shifted.

This maintains the original order of non-zero elements.

### Program Explanation

The program takes an integer array as input.

It starts traversing the array from the beginning.

Whenever a non-zero element is found:

- It is swapped with the element at the current position of the non-zero pointer.
- The pointer is moved to the next position.

Zero elements are skipped during traversal.

After completing the traversal, all non-zero elements are placed at the front and all zeros are moved to the end.

For example:

Array = [1,0,2,3,0,4,0,1]

After moving zeros:

[1,2,3,4,1,0,0,0]

### Output

[1,2,3,4,1,0,0,0]

### Conclusion

By using a simple two-pointer approach, all zeros can be moved to the end while keeping the order of non-zero elements unchanged. This method is efficient and works in linear time without using extra space.
