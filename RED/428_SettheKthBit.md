# 428. Set the Kth Bit

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given a positive integer n and an integer k, your task is to set the k-th bit of n to 1. The bit positions are zero-indexed, meaning the least significant bit (rightmost) is position 0. If the k-th bit is already set to 1, there are no changes to the integer. Return the new integer after setting the k-th bit.

Function Signature

def set_kth_bit(n: int, k: int) -> int:
Example
Input:
n = 8
k = 2
Output:
12
Explanation:
The binary representation of 8 is 1000.
By setting the 2nd bit (0-indexed), the binary becomes 1100, which is 12 in decimal.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: n = 5, k = 1

Output:

7
Explanation:Binary of 5: 101 → Setting bit at position 1 → 111 (decimal 7).
```

### 🔹 Example 2

```
Input:

Input: n = 8, k = 2

Output:

12
Explanation:Binary of 8: 1000 → Setting bit at position 2 → 1100 (decimal 12).
```

### 🔹 Example 3

```
Input:

Input: n = 10, k = 0

Output:

11
Explanation:Binary of 10: 1010 → Setting bit at position 0 → 1011 (decimal 11).
```

---

## 📝 Note

- You are expected to manipulate the integer's binary form directly.
- The problem does not require an actual change in bits, just return the integer value after setting the k-th bit.
---

## ⚙️ Constraints

- `1 <= n <= 109`
- `0 <= k < 31`
