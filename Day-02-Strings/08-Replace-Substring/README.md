## Replace All Occurrences of a Substring

### Practice Link
https://www.geeksforgeeks.org/dsa/find-and-replace-all-occurrence-of-a-substring-in-the-given-string/

### Description
In this program, I replaced all occurrences of a given substring in a string with another substring.

### Concept
The main idea is to search for the required substring in the original string.

Whenever the substring is found, it is replaced with the new substring.

This process continues until all occurrences are replaced.

### Program Explanation
The program takes three strings as input:

- Original string
- Substring to be replaced
- New substring

First, the program searches for the given substring in the original string.

If the substring is found, it is replaced with the new substring.

The program continues checking the remaining part of the string until all occurrences are replaced.

For example:

s = "abababa"  
s1 = "aba"  
s2 = "a"

After replacing all occurrences of "aba" with "a", the final string becomes "aba".

### Output
aba

### Conclusion
By searching and replacing substrings, we can modify strings easily according to the given requirement.
