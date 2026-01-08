# 208. Sum of N Numbers

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you are required to compute the sum of a specified number of integer inputs. First, you will input an integer n, which indicates the number of subsequent integers you need to sum. Following that, you will input n integers. Your task is to calculate the total sum of these n integers and return it.

This problem is designed to help you become familiar with basic input handling and simple iteration techniques.

Example:
Input

5
12 4 -8 7 3
Output

18
Explanation
In this example, the first number 5 tells us how many integers will follow. The subsequent integers are 12, 4, -8, 7, 3. Adding these together gives 12 + 4 - 8 + 7 + 3 = 18.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: n = 3, values = 1 2 3

Output:

6
Explanation:The sum of 1, 2, and 3 is 6.
```

### 🔹 Example 2

```
Input:

Input: n = 5, values = 10 20 30 40 50

Output:

150
Explanation:The sum of 10, 20, 30, 40, and 50 is 150.
```

### 🔹 Example 3

```
Input:

Input: n = 2, values = -5 5

Output:

0
Explanation:The sum of -5 and 5 is 0.
```

---

## ⚙️ Constraints

- `1 <= n <= 1000`
- `-106 <= value <= 106`
