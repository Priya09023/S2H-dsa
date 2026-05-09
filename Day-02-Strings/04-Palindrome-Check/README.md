## Check if a String is Palindrome

### Practice Link
https://www.geeksforgeeks.org/dsa/palindrome-string/

### Description
In this program, I checked whether the given string is palindrome or not.

A palindrome is a string that reads the same from left to right and right to left.

### Concept
The main idea is to compare characters from both ends of the string.

- First character is compared with last character
- Second character is compared with second last character

If all characters are equal, then the string is palindrome.

If any one character does not match, then it is not palindrome.

### Program Explanation
The program takes a string as input.

It uses two positions, one starting from the beginning and another starting from the end.

Characters at both positions are compared one by one.

If characters are same, positions move towards the center.

If any mismatch is found, the program returns 0.

If all characters match, the program returns 1.

For example, if input is "abba":

First and last characters are same.  
Next characters are also same.

So the string is palindrome.

### Output
1

### Conclusion
By comparing characters from both ends, we can easily check whether a string is palindrome or not.
