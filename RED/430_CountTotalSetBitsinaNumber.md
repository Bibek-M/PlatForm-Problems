# 430. Count Total Set Bits in a Number

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

Given a positive integer n, your task is to determine the total number of set bits (1s) in the binary representations of all integers from 1 to n.


---

## 📌 Examples

### 🔹 Example 1

```
Input:


n = 3
Output:


4
Explanation:

The binary representations of numbers from 1 to n are:

1 (1): 1
2 (2): 10
3 (3): 11
The total number of set bits in these numbers is 1 + 1 + 2 = 4.
```

### 🔹 Example 2

```
Input:


n = 5
Output:


7
Explanation:

The binary representations are:

1: 1
2: 10
3: 11
4: 100
5: 101
The total set bits = 1 + 1 + 2 + 1 + 2 = 7.

Your goal is to find a more efficient solution than directly counting the bits of each individual number.
```

### 🔹 Example 3

```
Input:

Input: n = 1

Output:

1
Explanation:Binary representation: 1 → 1 set bit. Total set bits: 1.
```

### 🔹 Example 4

```
Input:

Input: n = 2

Output:

2
Explanation:Binary: 1 (1 set bit), 10 (1 set bit). Total: 1+1 = 2.
```

### 🔹 Example 5

```
Input:

Input: n = 3

Output:

4
Explanation:Binary: 1 (1), 10 (1), 11 (2). Total: 1+1+2 = 4.
```

---

## ⚙️ Constraints

- `1 ≤ n ≤ 10^6`
- `The solution should have a time complexity better than directly counting bits for each number up to n.`
