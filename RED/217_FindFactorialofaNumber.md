# 217. Find Factorial of a Number

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

The task is to implement a function to compute the factorial of a given non-negative integer. The factorial of a number n, denoted as n!, represents the product of all positive integers less than or equal to n. By convention, the factorial of 0 is defined as 1.



---

## 📌 Examples

### 🔹 Example 1

```
Input: 5
Output: 120
Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120.
```

### 🔹 Example 2

```
Input: 0
Output: 1
Explanation: 0! is defined to be 1 by convention.
Factorials grow very quickly, therefore, to avoid overflow issues, we limit the input number n to a maximum of 20. This ensures results fit within standard data type capacities in most programming languages.
```

### 🔹 Example 3

```
Input:

Input: num = 0

Output:

1
Explanation:Factorial of 0 is defined as 1.
```

### 🔹 Example 4

```
Input:

Input: num = 1

Output:

1
Explanation:Factorial of 1 is 1.
```

### 🔹 Example 5

```
Input:

Input: num = 5

Output:

120
Explanation:5! = 120.
```

---

## ⚙️ Constraints

- `0 <= num <= 20 (to ensure result fits within standard number types)`
