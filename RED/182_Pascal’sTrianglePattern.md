# 182. Pascal’s Triangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you are required to generate Pascal's Triangle up to a specified number of rows. Given an integer numRows, return the first numRows of Pascal's Triangle.

Pascal's Triangle is a triangular array of numbers where a number is the sum of the two numbers directly above it. Each row in the triangle represents the coefficients of the binomial expansion. For example, the topmost row is considered the 0th row and contains a single number 1. Each subsequent row contains one more number than the previous row.

Here is an example with 5 rows:

```
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
 ```
#### Example
Input: numRows = 5
Output: [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1], [1, 4, 6, 4, 1]]
The above example shows the first 5 rows of Pascal's Triangle, which should be returned as a list of lists.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n = 3

Output:

1 
1 1 
1 2 1 
Explanation:Three row Pascal's triangle
```

### 🔹 Example 2

```
Input:

n = 1

Output:

1
Explanation:Single row Pascal's triangle
```

### 🔹 Example 3

```
Input:

n = 2

Output:

1 
1 1 
Explanation:Two row Pascal's triangle
```

---

## ⚙️ Constraints

- `1 <= numRows <= 30`
