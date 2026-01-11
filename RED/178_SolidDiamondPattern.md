# 178. Solid Diamond Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to generate and print a solid diamond pattern composed using the character '*'. The height of the diamond is determined by a given integer n. The pattern should have a total height of 2n-1, consisting of an upper pyramid and an inverted lower pyramid.

Upper Pyramid: The first part of the diamond consists of n rows. Each row contains an increasing number of '*' characters, centrally aligned. The first row begins with 1 star, the second row with 3, and so forth, until the nth row.
Lower Pyramid: The second part of the diamond follows immediately after, having n-1 rows. Each row contains a decreasing number of '*' characters, centrally aligned, starting with 2n-3 stars and decreasing to 1 star on the last row.
Example
For instance, let n = 3:

The pattern should be:

```
  *
 ***
*****
 ***
  *
```
This pattern reflects a diamond shape with the widest point being the third row, consisting of 5 '*', then tapering down symmetrically. Your task is to produce such a pattern for any valid integer input n between 1 and 20.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

*
Explanation:A single row with one '*' as n=1.
```

### 🔹 Example 2

```
Input:

n=2

Output:

 *
***
 *
Explanation:Diamond pattern with height 3 rows when n=2.
```

### 🔹 Example 3

```
Input:

n=3

Output:

  *
 ***
*****
 ***
  *
Explanation:Diamond pattern with height 5 rows when n=3.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
