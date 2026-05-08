## Find the First Occurrence in a String

### Practice Link
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

### Description
In this program, I found the index of the first occurrence of a given string (needle) in another string (haystack). If the string is not found, the output is -1.

### Concept
The main idea is to compare the characters of needle with haystack one by one.

The program checks every possible starting position in haystack and compares it with needle.

If all characters match, that position is returned as the answer.

If no match is found, the program returns -1.

### Program Explanation
The program takes two strings as input: haystack and needle.

It starts checking from index 0 of haystack.

At each position, characters are compared with needle.

If all characters match, the current index is returned.

If characters do not match, the program moves to the next position and checks again.

For example, if haystack is "sadbutsad" and needle is "sad":

The first match is found at index 0, so output is 0.

### Output
0

### Conclusion
By comparing characters step by step, we can find the first occurrence of one string in another string in a simple way.
