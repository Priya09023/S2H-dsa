## Left Rotate the Array by One

### Practice Link
https://leetcode.com/problems/rotate-array/description/

### Description
In this program, I rotated the elements of the array to the left by one position.

After rotation, the first element moves to the last position and all remaining elements shift one position to the left.

### Concept
The main idea is to store the first element temporarily.

Then all elements are shifted one position towards the left.

Finally, the first element is placed at the last position.

### Program Explanation
The program takes an array as input.

First, the first element is stored in a temporary variable.

Then the array is traversed and each element is moved to the previous index.

After shifting all elements, the stored first element is placed at the end of the array.

For example:

Array = [1,2,3,4,5]

After left rotation by one position:

[2,3,4,5,1]

### Output
[2,3,4,5,1]

### Conclusion
By shifting elements one position to the left, the array can be rotated easily in a simple way.
