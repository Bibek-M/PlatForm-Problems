# 169. Hollow Square Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Create a program that prints a hollow square pattern using the * character.

Given an integer n, which specifies the size of the square, the pattern should have dimensions of n x n (n rows and n columns):

The first and last rows should be filled entirely with *.
The rows in-between should start and end with a *, and the space between these stars should be filled with spaces.
#### Example
For n = 5, the output pattern should look like:

```
*****
*   *
*   *
*   *
*****
```
This indicates the pattern's borders have *, and the inner rows, except for the borders, contain spaces between bordering stars. Use nested loops to generate each line of the pattern and remember to use conditional statements to determine when to print * or a space.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=3

Output:

* * * 
*   * 
* * * 
Explanation:Hollow square pattern of size 3.
```

### 🔹 Example 2

```
Input:

n=5

Output:

* * * * * 
*       * 
*       * 
*       * 
* * * * * 
Explanation:Hollow square pattern of size 5.
```

### 🔹 Example 3

```
Input:

n=10

Output:

* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * * 
Explanation:Hollow square pattern of size 10.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
