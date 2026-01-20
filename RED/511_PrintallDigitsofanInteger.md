# 511. Print all Digits of an Integer

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to write a program that takes a non-negative integer N and prints each of its individual digits, separated by a single space. The digits must be printed in their original order, from left to right (from the most significant digit to the least significant digit).

For example, if the input is 12345, the output should be: 1 2 3 4 5

If the input is 908, the output should be: 9 0 8

Input Format
The first line of input contains an integer T, the number of test cases.
Each test case consists of a single line containing a non-negative integer N.
Output Format
For each test case, print the digits of N on a single line, with each digit separated by a single space.

---

## 📌 Examples

### 🔹 Example 1

```
Input: N=344715273695410679\n\nOutput: '3 4 4 7 1 5 2 7 3 6 9 5 4 1 0 6 7 9'\n\nExplanation: Digits of the number separated by spaces.
```

### 🔹 Example 2

```
Input: N=757147\n\nOutput: '7 5 7 1 4 7'\n\nExplanation: Digits of the number separated by spaces.
```

### 🔹 Example 3

```
Input: N=167851000\n\nOutput: '1 6 7 8 5 1 0 0 0'\n\nExplanation: Digits of the number separated by spaces.
```

---

## ⚙️ Constraints

- `1 <= T <= 100`
- `0 <= N <= 10^18`
