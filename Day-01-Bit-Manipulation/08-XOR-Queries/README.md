# 08. XOR Queries of a Subarray

## 🔗 Practice Link

https://leetcode.com/problems/xor-queries-of-a-subarray/

## 🧩 Problem Statement

You are given an array `arr` of positive integers and a list of queries.
Each query contains two indices `[left, right]`.

For each query, compute the XOR of elements from index `left` to `right`:

`arr[left] XOR arr[left+1] XOR ... XOR arr[right]`

Return the result for all queries.

## 📌 Example

**Input:**

```
arr = [1, 3, 4, 8]
queries = [[0,1], [1,2], [0,3], [3,3]]
```

**Output:**

```
[2, 7, 14, 8]
```

## 📖 Explanation

* [0,1] → 1 XOR 3 = 2
* [1,2] → 3 XOR 4 = 7
* [0,3] → 1 XOR 3 XOR 4 XOR 8 = 14
* [3,3] → 8

## 💡 Approach

### 🔹 Brute Force

* For each query, iterate from `left` to `right`
* Compute XOR manually

### 🔹 Optimized Approach (Prefix XOR)

* Use prefix XOR array to store cumulative XOR values
* This allows answering each query in constant time

## ⚙️ Algorithm (Optimized)

1. Create a prefix XOR array:

   * `prefix[i] = arr[0] ^ arr[1] ^ ... ^ arr[i]`
2. For each query `[L, R]`:

   * If `L == 0` → answer = `prefix[R]`
   * Else → answer = `prefix[R] ^ prefix[L-1]`

## ⏱️ Complexity Analysis

### Brute Force:

* Time Complexity: O(n * q)
* Space Complexity: O(1)

### Optimized:

* Time Complexity: O(n + q)
* Space Complexity: O(n)

## 🚀 Key Points

* XOR operation is associative and commutative
* Prefix XOR helps reduce repeated calculations
* Efficient for handling multiple queries
* Common problem in bit manipulation and arrays

## 🏷️ Tags

* Bit Manipulation
* Prefix XOR
* Arrays
* Range Queries
