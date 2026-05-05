## Power Set

### Practice Link
https://leetcode.com/problems/subsets/

### Description
In this program, I generated all possible subsets of a given array. A power set means the collection of all subsets, including empty set and full set.

### Concept
For an array with n elements, total number of subsets will be `2^n`.

For example, if array is [1,2,3]:

Total subsets = `2^3 = 8`

Subsets are:

- []
- [1]
- [2]
- [1,2]
- [3]
- [1,3]
- [2,3]
- [1,2,3]

To generate these subsets, I used bit manipulation.

Each number from 0 to `2^n - 1` represents one subset in binary form.

If a bit is 1, that element is included in the subset.

If a bit is 0, that element is not included.

### Program Explanation
The program first finds total number of subsets using `1 << n`.

Then it runs a loop from 0 to total subsets - 1.

For each number, its binary form is checked bit by bit.

If a bit is set, the corresponding element is added to the current subset.

After checking all bits, that subset is added to the final answer.

This process continues until all subsets are generated.

For input [1,2,3], total 8 subsets are generated.

### Output
[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

### Conclusion
By using bit manipulation, generating power set becomes simple and efficient.
