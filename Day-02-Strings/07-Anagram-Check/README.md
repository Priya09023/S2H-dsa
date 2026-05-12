## Check if Two Strings are Anagrams

### Practice Link
https://www.geeksforgeeks.org/dsa/check-whether-two-strings-are-anagram-of-each-other/

### Description
In this program, I checked whether two given strings are anagrams or not.

Two strings are called anagrams if they contain the same characters with the same frequency.

### Concept
The main idea is to compare the characters present in both strings.

If both strings have:

- same characters
- same number of occurrences for each character

then they are anagrams.

If any character is missing or frequency is different, then they are not anagrams.

### Program Explanation
The program takes two strings as input.

First, it checks whether both strings have same length or not.

If lengths are different, the strings cannot be anagrams.

Then characters in both strings are counted and compared.

If all character frequencies are equal, the program returns true.

Otherwise, it returns false.

For example:

s1 = "lemon"  
s2 = "melon"

Both strings contain same characters with same frequency, so output is true.

### Output
true

### Conclusion
By comparing character frequencies, we can easily check whether two strings are anagrams or not.
