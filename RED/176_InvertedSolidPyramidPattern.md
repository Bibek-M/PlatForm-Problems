# 176. Inverted Solid Pyramid Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Write a function that prints an inverted solid pyramid pattern using the character '*'. The height of the pyramid is determined by an integer n provided as input.

The pattern should be displayed such that:

The first row contains 2n - 1 stars.
The second row contains 2n - 3 stars.
The third row contains 2n - 5 stars, continuing this progression until the last row, which contains a single star.
Each row should be centered, meaning that leading spaces are added appropriately such that the stars form a symmetrical pattern.

Example
Consider n = 3:

```
*****
 ***
  *
```
#### Explanation:

The first row has 5 stars (2*3 - 1) and no leading spaces.
The second row has 3 stars and 1 leading space.
The third row contains 1 star with 2 leading spaces.
Your task is to implement the function such that it generates the correct pattern for any valid value of n.

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

* * * 
  * 
Explanation:An inverted solid pyramid with two rows.
```

### 🔹 Example 3

```
Input:

n=3

Output:

* * * * * 
  * * * 
    * 
Explanation:An inverted solid pyramid with three rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
