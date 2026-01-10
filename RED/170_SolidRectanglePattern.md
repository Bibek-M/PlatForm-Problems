# 170. Solid Rectangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you need to generate a pattern that prints a solid rectangle using asterisk ('*') characters. You are given two integers n and m, which define the number of rows and columns of the rectangle, respectively. Your task is to print this rectangle pattern directly to the console. Each row of the rectangle should have exactly m asterisk characters followed by a space for separation. There should be exactly n such rows in the output. This exercise focuses primarily on loops and pattern generation, commonly used for introductory programming practice.

Example:
For n = 3 and m = 5, the output pattern should be:

```
* * * * * 
* * * * * 
* * * * *
``` 
As shown, the output consists of 3 rows where each row contains 5 asterisks separated by spaces.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=2, m=5

Output:

* * * * * 
* * * * * 
Explanation:A solid rectangle of 2 rows and 5 columns.
```

### 🔹 Example 2

```
Input:

n=3, m=7

Output:

* * * * * * * 
* * * * * * * 
* * * * * * * 
Explanation:A solid rectangle of 3 rows and 7 columns.
```

### 🔹 Example 3

```
Input:

n=5, m=3

Output:

* * * 
* * * 
* * * 
* * * 
* * * 
Explanation:A solid rectangle of 5 rows and 3 columns.
```

---

## ⚙️ Constraints

- `1 <= n, m <= 20`
