## Convert a Number to Words

### Practice Link
https://www.geeksforgeeks.org/dsa/program-to-convert-a-given-number-to-words-set-2/

### Description
In this program, I converted a given number into words.

The program prints the number in readable word format instead of numeric form.

### Concept
The main idea is to divide the number into parts like:

- crore
- lakh
- thousand
- hundred

Then each part is converted into words separately.

Special words are used for numbers from 1 to 19, and different words are used for tens like twenty, thirty, forty, etc.

### Program Explanation
The program takes a number as input.

It checks each digit group step by step.

First, the crore part is processed, then lakh, thousand, hundred, and remaining digits.

Each part is converted into words using predefined word arrays.

Finally, all words are combined to form the complete result.

For example:

Input: 1000

1000 is converted into:

"one thousand"

### Output
one thousand

### Conclusion
By dividing the number into smaller parts and converting each part separately, large numbers can be represented easily in word format.
