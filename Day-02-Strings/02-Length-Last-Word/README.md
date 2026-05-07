## Length of Last Word

### Practice Link
https://leetcode.com/problems/length-of-last-word/

### Description
In this program, I found the length of the last word present in the given string.

A word means a group of characters separated by spaces.

### Concept
The main idea is to start checking the string from the end.

First, extra spaces at the end are ignored. After that, characters are counted until a space is found.

The total count gives the length of the last word.

### Program Explanation
The program takes a string as input.

It starts traversing the string from the last character.

If spaces are present at the end, they are skipped first.

Then characters are counted one by one until a space is found.

The final count represents the length of the last word.

For example, if input is "Hello World":

Last word is "World"

Length = 5

### Output
5

### Conclusion
By traversing the string from the end, we can easily find the length of the last word in a simple way.
