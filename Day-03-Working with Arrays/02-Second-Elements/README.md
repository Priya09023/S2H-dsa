## Find Second Smallest and Second Largest Element in an Array

### Practice Link
https://www.geeksforgeeks.org/find-second-smallest-and-second-largest-element-in-an-array/

### Description
In this program, I found the second smallest and second largest elements present in the array.

If the second smallest or second largest element does not exist, the program prints -1.

### Concept
The main idea is to traverse the array and keep track of:

- smallest element
- second smallest element
- largest element
- second largest element

While checking each element, these values are updated accordingly.

Duplicate values are ignored when finding second smallest and second largest elements.

### Program Explanation
The program takes array elements as input.

First, the smallest and largest elements are identified.

Then the array is checked again to find values just greater than the smallest element and just smaller than the largest element.

If valid second smallest and second largest elements are found, they are printed.

Otherwise, -1 is printed.

For example:

Array = [1, 2, 4, 7, 7, 5]

- Smallest element = 1
- Second smallest = 2
- Largest element = 7
- Second largest = 5

So output is:

2 5

### Output
2 5

### Conclusion
By traversing the array and updating required values, we can find the second smallest and second largest elements efficiently.
