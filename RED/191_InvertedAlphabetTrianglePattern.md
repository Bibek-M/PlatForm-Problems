# 191. Inverted Alphabet Triangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are required to generate an inverted triangle pattern using the English alphabet, based on a specified integer input n. This input determines the size of the triangle.

The triangle pattern starts with the letter 'A' and extends to the letter corresponding to the n-th position in the alphabet. The first row of the pattern includes letters from 'A' to the n-th letter, the second row includes up to the n-1-th letter, and this reduction continues until only the letter 'A' is printed on the last row.

Example
For n = 5, the expected output is:

```
ABCDE
ABCD
ABC
AB
A
```
Here, each row in the resulting pattern decreases by one letter until only 'A' remains in the final row.

This task involves generating and printing this pattern based on the provided input value n.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

A
Explanation:A single row with 'A'.
```

### 🔹 Example 2

```
Input:

n=2

Output:

AB
A
Explanation:An inverted triangle with two rows.
```

### 🔹 Example 3

```
Input:

n=3

Output:

ABC
AB
A
Explanation:An inverted triangle with three rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 26`
