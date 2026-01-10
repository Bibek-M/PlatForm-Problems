# 174. Hollow Right-Angle Triangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an integer n, your task is to print a hollow right-angled triangle pattern using the * character. The triangle's right angle is positioned at the beginning of each line.

The pattern's construction is as follows:

The triangle contains n lines.
The first and last row is completely filled with * characters.
In all other rows, only the first and last positions have the * characters; the rest are spaces.
The pattern should be returned as a list of strings, where each string represents a single line of the pattern.

Example
If n = 5, the resulting pattern would be:

```
*
**
* *
*  *
*****
```
Explanation:

Line 1 contains 1 star.
Line 2 contains 2 stars.
Line 3 has a star at the beginning and the end with a space in the middle.
Line 4 has a star at the beginning and the end, with two spaces in between.
Line 5 is completely filled with stars.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=2

Output:

* 
* * 
Explanation:A hollow right-angle triangle pattern with two rows.
```

### 🔹 Example 2

```
Input:

n=3

Output:

* 
* * 
* * * 
Explanation:A hollow right-angle triangle pattern with three rows.
```

### 🔹 Example 3

```
Input:

n=4

Output:

* 
* * 
*   * 
* * * * 
Explanation:A hollow right-angle triangle pattern with four rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
