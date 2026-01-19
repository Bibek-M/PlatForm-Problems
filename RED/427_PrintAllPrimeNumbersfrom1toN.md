# 427. Print All Prime Numbers from 1 to N

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to write a function that identifies and returns all prime numbers from 1 to a given integer N. For clarity, a prime number is a positive integer greater than 1, which has no positive divisors other than 1 and itself. In simpler terms, it cannot be evenly divided by any other positive integers except for 1 and itself.

Example
Input:


N = 10
Output:


[2, 3, 5, 7]
Explanation:

When 1 through 10 are evaluated, the numbers 2, 3, 5, and 7 meet the criteria of being prime numbers, as they cannot be divided evenly by any other numbers except for 1 and the number itself.
You need to ensure that your function effectively computes all the prime numbers for a given N, especially considering large values of N.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: N = 10

Output:

2 3 5 7
Explanation:Prime numbers up to 10 are: 2, 3, 5, 7.
```

### 🔹 Example 2

```
Input:

Input: N = 20

Output:

2 3 5 7 11 13 17 19
Explanation:Prime numbers up to 20 are: 2, 3, 5, 7, 11, 13, 17, 19.
```

### 🔹 Example 3

```
Input:

Input: N = 1

Explanation:There are no prime numbers up to 1.
```

---

## ⚙️ Constraints

- `1 <= N <= 10^6`
- `Output prime numbers should be in a sorted list.`
- `The solution should handle larger values of N efficiently.`
