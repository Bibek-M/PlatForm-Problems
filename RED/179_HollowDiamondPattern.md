# 179. Hollow Diamond Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to generate a hollow diamond pattern using asterisks ('*'). Given a positive integer n, the diamond will have a total of 2n - 1 rows with the following properties:

The diamond is symmetric about its central horizontal row and its central vertical axis.
The middle row (at position n) will contain exactly n asterisks.
The topmost and bottommost rows will each have one asterisk centered in the row.
Each row brings a new level of indentation, so the outermost rows will have the most spaces apart from the asterisk.
As row numbers increase from 1 up to n, the spacing between asterisks increases until the widest point is reached.
After row n, the pattern mirrors itself.
Example

Let's consider n = 3:

```
  *  
 * * 
*****
 * * 
  *  
```
In this example, row 1 and row 5 have one asterisk centered, rows 2 and 4 have two asterisks with one space between them, and row 3 has five asterisks filling the entire row.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n = 1

Output:

*
Explanation:Smallest possible diamond with single star
```

### 🔹 Example 2

```
Input:

n = 2

Output:

 *
* *
 *
Explanation:Diamond with height 3 (2*n-1)
```

### 🔹 Example 3

```
Input:

n = 3

Output:

  *
 * *
*   *
 * *
  *
Explanation:Diamond with height 5 showing hollow structure
```

---

## ⚙️ Constraints

- `The input number n is a positive integer.`
- `- 1 <= n <= 20`
