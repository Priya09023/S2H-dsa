## Isomorphic Strings Check

### Practice Link
https://www.geeksforgeeks.org/dsa/check-if-two-given-strings-are-isomorphic-to-each-other/

### Description
In this program, I checked whether two given strings are isomorphic or not.

Two strings are called isomorphic if characters in one string can be mapped consistently to characters in another string.

### Concept
The main idea is to create a mapping between characters of both strings.

- One character should map to only one character.
- Different characters should not map to the same character.
- The mapping should remain same throughout the string.

If all mappings follow these conditions, then the strings are isomorphic.

### Program Explanation
The program takes two strings as input.

First, it checks whether both strings have same length or not.

Then characters of both strings are checked one by one.

A mapping is created between characters of the first string and second string.

If the same character maps to different characters, or different characters map to the same character, the program returns false.

Otherwise, the strings are isomorphic.

For example:

s1 = "aab"  
s2 = "xxy"

Here:

- a → x
- b → y

The mapping is consistent, so output is true.

### Output
true

### Conclusion
By maintaining proper character mapping, we can easily check whether two strings are isomorphic or not.
