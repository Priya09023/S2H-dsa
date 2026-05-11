## Check if a String is Pangram or Not

### Practice Link
https://www.geeksforgeeks.org/dsa/pangram-checking/

### Description
In this program, I checked whether the given string is a pangram or not.

A pangram is a sentence that contains all letters from 'a' to 'z' at least one time.

### Concept
The main idea is to check whether every alphabet letter is present in the string.

The program checks all characters one by one and marks the letters that are present.

If all 26 letters are found, then the string is a pangram.

If any letter is missing, then it is not a pangram.

### Program Explanation
The program takes a string as input.

It converts all characters into lowercase so that both uppercase and lowercase letters can be handled easily.

Then each character is checked.

If the character is an alphabet letter, it is marked as present.

After checking the complete string, the program verifies whether all 26 letters are present or not.

For example, in the sentence:

"The quick brown fox jumps over the lazy dog"

all letters from 'a' to 'z' are present, so the output is true.

### Output
true

### Conclusion
By checking all alphabet letters in the string, we can easily determine whether the given string is a pangram or not.
