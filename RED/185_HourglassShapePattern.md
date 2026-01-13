# 185. Hourglass Shape Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an integer n, the task is to print an hourglass pattern using the character '*'. The pattern is structured in two symmetric halves:

Top Half: This part of the pattern starts with 2*n stars and decreases by two stars with each descending row. Furthermore, each row is indented with an increasing number of spaces.
Bottom Half: This mirrors the top half of the pattern, beginning with the smallest number of stars and increasing by two stars with each ascending row, while similarly adjusting the indentation.
The resulting figure should be symmetrical across the horizontal center of the pattern, forming the shape of an hourglass.

#### Example
For n = 4, the output would be:

```
********
 ******
  ****
   **
   **
  ****
 ******
********
```
Here, the top four rows decrease and indent, while the last four rows increase and de-indent to complete the hourglass shape.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=2

Output:

****
 **
 **
****
Explanation:An hourglass pattern with 2 rows in each half.
```

### 🔹 Example 2

```
Input:

n=3

Output:

******
 ****
  **
  **
 ****
******
Explanation:An hourglass pattern with 3 rows in each half.
```

### 🔹 Example 3

```
Input:

n=4

Output:

********
 ******
  ****
   **
   **
  ****
 ******
********
Explanation:An hourglass pattern with 4 rows in each half.
```

---

## ⚙️ Constraints

- `1 <= n <= 10`
