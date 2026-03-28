# 05. Minimum Bit Flips to Convert Number

## 🔗 Problem Link

https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

## 📌 Problem Statement

Given two integers `start` and `goal`, return the minimum number of bit flips required to convert `start` into `goal`.

A bit flip means changing a bit from `0` to `1` or from `1` to `0`.

## 🧾 Example

```
Input: start = 10, goal = 7
Output: 3
```

### Explanation

Binary representation:

* 10 → 1010
* 7  → 0111

Steps:

* 1010 → 1011
* 1011 → 1111
* 1111 → 0111

Total flips = 3


## 💡 Approach (Bit Manipulation)

* Use XOR (`^`) to find differing bits between `start` and `goal`
* XOR gives `1` where bits are different
* Count number of set bits (1s) in the result

## ⚙️ Algorithm

1. Compute `num = start ^ goal`
2. Initialize `count = 0`
3. Loop through all bits (0 to 31):

   * Add `(num & 1)` to count
   * Right shift `num` by 1
4. Return `count`

## ⏱️ Complexity

* Time Complexity: `O(1)`
* Space Complexity: `O(1)`

## 🏷️ Tags

* Bit Manipulation
* XOR
