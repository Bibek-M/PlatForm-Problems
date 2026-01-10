# 173. Inverted Right-Angle Triangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You need to generate an inverted right-angle triangle pattern using the asterisk symbol ('*'). Given an integer n, print the triangle such that:

The triangle has n rows.
The first row contains exactly n asterisks.
The second row contains n-1 asterisks.
This pattern continues until the final row, which will have just 1 asterisk.
Add a single space after each asterisk when printing.
Here's how this works:

Input: A single integer n representing the number of rows.

Output: A series of print statements that generate the triangle pattern.

Example:
If the input n is 4, your output should be:

```
* * * * 
* * * 
* * 
* 
```
Explanation:
Row 1 has 4 asterisks, each followed by a space.
Row 2 has 3 asterisks, each followed by a space.
Row 3 has 2 asterisks, each followed by a space.
Row 4 has 1 asterisk followed by a space.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=2

Output:

* * 
* 
Explanation:An inverted right-angle triangle pattern of height 2.
```

### 🔹 Example 2

```
Input:

n=3

Output:

* * * 
* * 
* 
Explanation:An inverted right-angle triangle pattern of height 3.
```

### 🔹 Example 3

```
Input:

n=5

Output:

* * * * * 
* * * * 
* * * 
* * 
* 
Explanation:An inverted right-angle triangle pattern of height 5.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
