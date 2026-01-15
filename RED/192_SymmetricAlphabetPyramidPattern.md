# 192. Symmetric Alphabet Pyramid Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an integer n, generate a pyramid pattern using English alphabet letters. The pyramid consists of n rows, and each row starts with the letter 'A', extends up to the i-th letter in the alphabet, and then symmetrically reflects back to 'A'. The resulting pattern should resemble a symmetric pyramid, where each row is centered with spaces.

Example
If the input n = 5, the output should be:

```
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```
On the first row, print 'A'.
On the second row, print 'A', followed by 'B', then back to 'A', with appropriate spaces for centering.
Continue this pattern, adding the next letter in the sequence and forming a symmetric reflection in each subsequent row.
Your task is to implement the pattern generation logic for any integer input n, where n represents the number of rows, and n falls within the constraints specified.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

A
Explanation:A single row with 'A'.
```

### 🔹 Example 2

```
Input:

n=2

Output:

 A
ABA
Explanation:A symmetric pyramid pattern with two rows.
```

### 🔹 Example 3

```
Input:

n=3

Output:

  A
 ABA
ABCBA
Explanation:A symmetric pyramid pattern with three rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 26`
