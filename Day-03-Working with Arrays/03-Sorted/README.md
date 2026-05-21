## Check if an Array is Sorted

### Practice Link
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

### Description
In this program, I checked whether the given array is sorted in ascending order or not.

If all elements are arranged in increasing or non-decreasing order, the array is considered sorted.

### Concept
The main idea is to compare adjacent elements in the array.

If every element is smaller than or equal to the next element, then the array is sorted.

If any element is greater than the next element, then the array is not sorted.

### Program Explanation
The program takes array elements as input.

It starts checking elements from the beginning of the array.

Each element is compared with the next element.

If any element is greater than the next element, the program returns False.

If all comparisons are correct, the program returns True.

For example:

Array = [1,2,3,4,5]

All elements are in increasing order, so output is True.

### Output
True

### Conclusion
By comparing adjacent elements in the array, we can easily determine whether the array is sorted or not.
