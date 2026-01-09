# 008. Solid Square Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to write a program that generates a solid square pattern using the asterisk (*) character.

Given an integer n, your program should output a square pattern of size n × n. Each row in this pattern must contain exactly n stars, aligned without any spaces in-between.

This problem is excellent for practicing the use of loops and understanding basic string manipulation.

Example
If the input is:


- 4
#### The output should be:

```
****
****
****
****
```
Here, the output consists of 4 rows and 4 columns, with each element being the * character.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

*
Explanation:With n=1, the output is a single star, forming a 1x1 grid.
```

### 🔹 Example 2

```
Input:

n=10

Output:

**********
**********
**********
**********
**********
**********
**********
**********
**********
**********
Explanation:With n=10, the output is a 10x10 grid of stars.
```

### 🔹 Example 3

```
Input:

n=4

Output:

****
****
****
****
Explanation:With n=4, the output is a 4x4 grid of stars.
```

---

## ⚙️ Constraints

- `1 <= n <= 10`
