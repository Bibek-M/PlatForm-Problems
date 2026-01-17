# 193. Reverse Alphabet Right Triangle Pattern

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

Your task is to generate a right triangle using alphabetic characters based on an integer input n. This triangle will have n rows, where each row ends with the letter 'E'. The starting letter of each row decreases by one alphabetical character as you move down the triangle. For example, the first row starts with 'E', the second row starts with 'D', and so on, forming a reverse alphabet pattern.

Example:

Input:


n = 5
Output:

```
    E
   DE
  CDE
 BCDE
ABCDE
```

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n = 1

Output:

A
Explanation:Single letter pattern
```

### 🔹 Example 2

```
Input:

n = 2

Output:

B
AB
Explanation:Two row pattern without spaces
```

### 🔹 Example 3

```
Input:

n = 3

Output:

C
BC
ABC
Explanation:Three row pattern as shown in example
```

---

## ⚙️ Constraints

- `1 <= n <= 26`
