# 10. Power Set (Subsets)

## 🔗 Practice Link

https://leetcode.com/problems/subsets/

## 🧩 Problem Statement

Given an array `nums` of **unique integers**, return all possible subsets (the power set).

The solution set must not contain duplicate subsets.


## 📌 Example

**Input:**

```id="k2m9zp"
nums = [1, 2, 3]
```

**Output:**

```id="x4t8qw"
[[], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]]
```


## 📖 Explanation

* A subset is any combination of elements from the array
* For an array of size `n`, total subsets = `2^n`
* Includes:

  * Empty set `[]`
  * Single elements `[1]`, `[2]`, `[3]`
  * Combinations `[1,2]`, `[1,3]`, `[2,3]`
  * Full set `[1,2,3]`


## 💡 Approach

This problem can be solved using **Bit Manipulation**.

### Key Idea:

* For an array of size `n`, there are `2^n` possible subsets
* Each subset can be represented using a binary number from `0` to `2^n - 1`
* Each bit in the number decides whether to include an element


## ⚙️ Algorithm

1. Let `n` be the size of the array
2. Compute total subsets = `2^n`
3. Loop from `0` to `2^n - 1`
4. For each number:

   * Check each bit
   * If bit is set, include the corresponding element
5. Add the subset to the result


## ⏱️ Complexity Analysis

* **Time Complexity:** O(n * 2^n)
  (Generating all subsets)

* **Space Complexity:** O(2^n)
  (Storing all subsets)


## 🚀 Key Points

* Uses bit manipulation for subset generation
* Efficient and commonly used technique
* Helps in solving combination-based problems
* Important for interviews and competitive programming

## 🏷️ Tags

* Bit Manipulation
* Backtracking
* Subsets
* Combinatorics
