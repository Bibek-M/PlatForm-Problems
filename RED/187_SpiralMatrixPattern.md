# 187. Spiral Matrix Pattern

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

Given an integer n, generate an n x n matrix with numbers from 1 to n^2. These numbers should be filled in a spiral order, starting from the top-left corner and spiraling clockwise until the center is reached.

Imagine starting at the top left and moving right until you reach the boundary, then move downwards, then left, and finally upwards. Keep repeating this pattern while adjusting boundaries inward until the entire matrix is filled.

Example
To illustrate, consider creating a spiral matrix for n = 4:

```
1   2   3   4
12  13  14  5
11  16  15  6
10   9   8   7
```
You can see how the numbers start from 1 in the top-left corner, move rightwards, downwards, leftwards, and upwards, spirally filling inwards until all spaces in the 4x4 matrix are occupied.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

1
Explanation:A single cell spiral matrix with n=1.
```

### 🔹 Example 2

```
Input:

n=2

Output:

1 2
4 3
Explanation:A 2x2 spiral matrix.
```

### 🔹 Example 3

```
Input:

n=3

Output:

1 2 3
8 9 4
7 6 5
Explanation:A 3x3 spiral matrix.
```

---

## ⚙️ Constraints

- `1 <= n <= 10`
