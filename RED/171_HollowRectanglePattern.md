# 171. Hollow Rectangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are tasked with creating a program that generates a hollow rectangle pattern using the ('*') character. You will be given two integers, n and m, representing the number of rows and columns respectively. Your task is to print a hollow rectangle pattern of n x m dimensions. The pattern should consist of '*' characters on its border (the first and last rows and columns) while the inner part should be filled with spaces. Be sure to include an extra space after each '*' and space to maintain uniformity.

Example
Input:
```js
n = 4
m = 5
```
Output:
```
* * * * * 
*       * 
*       * 
* * * * *
``` 
In this example, a rectangle of 4 rows and 5 columns is generated with a hollow inside and '*' characters on the border.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=2, m=5

Output:

* * * * * 
* * * * * 
Explanation:For n=2, m=5, both rows are filled with '*' as it's only a two-row rectangle.
```

### 🔹 Example 2

```
Input:

n=3, m=7

Output:

* * * * * * * 
*           * 
* * * * * * * 
Explanation:A hollow rectangle of 3 rows and 7 columns with '*' on the border.
```

### 🔹 Example 3

```
Input:

n=4, m=4

Output:

* * * * 
*     * 
*     * 
* * * * 
Explanation:A hollow square-like rectangle of 4 rows and 4 columns.
```

---

## ⚙️ Constraints

- `1 <= n, m <= 20`
