# 222. Check if a Number is a Narcissistic Number

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

A Narcissistic number (also known as a pluperfect number, an Armstrong number, or a pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Given a non-negative integer num, write a program to determine if it is a Narcissistic number.

For example, consider the number 153. It has 3 digits, and the sum of its digits raised to the power of 3 is:

[ 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 ]

Since the result is equal to the original number 153, it is a Narcissistic number.

#### Example:
Input:

153
Output:


true

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: num = 153

Output:

Yes
Explanation:153 is equal to 1^3 + 5^3 + 3^3, so it is Narcissistic.
```

### 🔹 Example 2

```
Input:

Input: num = 9474

Output:

Yes
Explanation:9474 is equal to 9^4 + 4^4 + 7^4 + 4^4.
```

### 🔹 Example 3

```
Input:

Input: num = 123

Output:

No
Explanation:123 is not Narcissistic.
```

---

## 📝 Note

- Check if the number that is inputted is a Narcissistic number by calculating the sum of its digits each raised to the power of the number of digits.
---

## ⚙️ Constraints

- `0 <= num <= 10^6`
