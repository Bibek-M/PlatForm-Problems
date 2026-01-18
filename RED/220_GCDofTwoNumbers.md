# 220. GCD of Two Numbers

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Find the Greatest Common Divisor (GCD) of two positive integers a and b. The GCD is the largest positive integer that divides both numbers without leaving a remainder.

The task is to write a function that takes in two integers, a and b, and returns their GCD.

---

## 📌 Examples

### 🔹 Example 1

```
Input:
a = 28, b = 35

Output:
7

Explanation:

The factors of 28 are 1, 2, 4, 7, 14, 28
The factors of 35 are 1, 5, 7, 35
The largest common factor is 7.
```

### 🔹 Example 2

```
Input:
a = 18, b = 48

Output:
6

Explanation:

The factors of 18 are 1, 2, 3, 6, 9, 18.
The factors of 48 are 1, 2, 3, 4, 6, 8, 12, 16, 24, 48.
The largest common factor is 6.
```

### 🔹 Example 3

```
Input:

Input: a = 4, b = 5

Output:

1
Explanation:GCD of 4 and 5 is 1.
```

### 🔹 Example 4

```
Input:

Input: a = 6, b = 8

Output:

2
Explanation:GCD of 6 and 8 is 2.
```

### 🔹 Example 5

```
Input:

Input: a = 15, b = 20

Output:

5
Explanation:GCD of 15 and 20 is 5.
```

---

## 📝 Note

- You need to ensure that your solution handles values of a and b that are up to 10^6 efficiently.
---

## ⚙️ Constraints

- `1 <= a, b <= 10^6`
