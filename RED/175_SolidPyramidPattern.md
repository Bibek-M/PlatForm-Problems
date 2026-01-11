# 175. Solid Pyramid Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you are required to generate a solid pyramid pattern using asterisk (*) characters. Given an integer n, the task is to print a pyramid with n rows. Each row of the pyramid contains a specific number of asterisks that form a symmetrical pattern, centered to give the overall shape of a pyramid.

The number of asterisks starts at 1 in the first row and increases by 2 in each subsequent row, aligning the pyramid symmetrically. This means the second row will have 3 asterisks, the third will have 5, and so on.

Example
For n = 4, the output should be:

```
   *
  ***
 *****
*******
```
Here, the pyramid is built with 4 rows, where each row is centered by adjusting the spaces on either side of the asterisks.

Your task is to write a function that generates this pattern for any valid input of n within the specified constraints.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

* 
Explanation:A single row pyramid with one '*' for n=1.
```

### 🔹 Example 2

```
Input:

n=2

Output:

  * 
* * * 
Explanation:A solid pyramid with two rows.
```

### 🔹 Example 3

```
Input:

n=3

Output:

    * 
  * * * 
* * * * * 
Explanation:A solid pyramid with three rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
