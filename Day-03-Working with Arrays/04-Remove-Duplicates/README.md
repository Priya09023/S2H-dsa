## Remove Duplicates from Sorted Array

### Practice Link
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

### Description
In this program, I removed duplicate elements from a sorted array and kept only unique elements.

The order of elements remains the same after removing duplicates.

### Concept
Since the array is already sorted, duplicate elements appear next to each other.

The main idea is to compare the current element with the previous unique element.

If the element is different, it is placed in the next unique position.

### Program Explanation
The program takes a sorted array as input.

One position is used to store unique elements.

The array is traversed from beginning to end.

Whenever a new unique element is found, it is placed at the next position.

Duplicate elements are skipped.

At the end, the first part of the array contains only unique elements.

For example:

Array = [1,1,2,2,2,3,3]

After removing duplicates:

[1,2,3]

### Output
[1,2,3,_,_,_,_]

### Conclusion
By comparing adjacent elements in the sorted array, duplicates can be removed easily without using extra space.
