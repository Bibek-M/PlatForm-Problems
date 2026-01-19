# 426. Reverse an Integer

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

Given a signed 32-bit integer x, your task is to write a function that reverses the digits of x. The function should return the integer formed by the reversed digits, but if the reversed integer goes beyond the boundaries of a 32-bit signed integer, return 0 instead.

A 32-bit signed integer's range is from -231 to 231 - 1, which is from -2147483648 to 2147483647.

---

## 📌 Examples

### 🔹 Example 1

```
Input: x = 123
Output: 321
Explanation: Reversing the digits of 123 gives 321.
```

### 🔹 Example 2

```
Input: x = -123
Output: -321
Explanation: Reversing the digits of -123 gives -321.
```

### 🔹 Example 3

```
Input: x = 120
Output: 21
Explanation: Reversing the digits of 120 gives 021, which is 21.
```

### 🔹 Example 4

```
Input:

Input: x = 123

Output:

321
Explanation:Reversing 123 gives 321.
```

### 🔹 Example 5

```
Input:

Input: x = -456

Output:

-654
Explanation:Reversing -456 gives -654.
```

### 🔹 Example 6

```
Input:

Input: x = 100

Output:

1
Explanation:Reversing 100 removes leading zeros, giving 1.
```

---

## 📝 Note

- that for the purpose of your function, you cannot use 64-bit integers in your calculations.
- Examples:
- Note:
- Assumptions about the environment restrict you from storing integers larger than 32 bits, which means you must handle overflow scenarios by returning 0.
---

## ⚙️ Constraints

- `The input number is a signed 32-bit integer: -231 ≤ x ≤ 231 - 1.`
- `Reversing the integer should also be within the 32-bit integer range.`
- `If the reversed integer overflows, the function should return 0.`
