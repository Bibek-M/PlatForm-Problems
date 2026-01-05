# 198. Average of Three Integers

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are required to write a program that computes the average of three given integers, a, b, and c. The result should be calculated using integer division, meaning that any fractional part of the average should be discarded.

The task involves performing simple arithmetic operations on the integers and handling both positive and negative numbers within the specified range.

Example

---

## 📌 Examples

### 🔹 Example 1

```
Input: a = 1, b = 2, c = 3

Output: 2

Explanation: The sum of the three integers is 1 + 2 + 3 = 6. When divided by 3, the result is 2, since the decimal part is discarded.
```

### 🔹 Example 2

```
Input: a = -9, b = -3, c = 5

Output: -2

Explanation: The sum of the integers is -9 + (-3) + 5 = -7. The integer division result of -7 / 3 is -2, as the decimal part is discarded.
```

### 🔹 Example 3

```
Input:

Input: a = 5, b = 10, c = 15

Output:

10
Explanation:The average of 5, 10, and 15 is (5 + 10 + 15) / 3 = 10.
```

### 🔹 Example 4

```
Input:

Input: a = -20, b = 0, c = 20

Output:

0
Explanation:The average of -20, 0, and 20 is (-20 + 0 + 20) / 3 = 0.
```

### 🔹 Example 5

```
Input:

Input: a = 1, b = 1, c = 1

Output:

1
Explanation:The average of 1, 1, and 1 is (1 + 1 + 1) / 3 = 1.
```

---

## ⚙️ Constraints

- `-10^6 <= a, b, c <= 10^6`
