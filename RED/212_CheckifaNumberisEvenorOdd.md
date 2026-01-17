# 212. Check if a Number is Even or Odd

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Write a function to determine if a given integer num is even or odd. An even number is one that can be divided by 2 without a remainder, i.e., num % 2 == 0. Conversely, an odd number will leave a remainder of 1 when divided by 2, i.e., num % 2 != 0.
The task is to create a function that takes an integer input num and outputs the string "Even" if the number is even, or "Odd" if the number is odd.

---
### Examples
#### Example 1

Input: 4

Output: Even

Here, the number 4 is divisible by 2 without a remainder, thus it is classified as an even number.

#### Example 2

Input: 7

Output: Odd

Here, the number 7 leaves a remainder of 1 when divided by 2, thus it is classified as an odd number.

The challenge is straightforward and focuses on working with the modulus operator to determine the nature of the number.

Function Signature
def check_even_odd(num: int) -> str: pass

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: num = 4

Output:

Even
Explanation:4 is even.
```

### 🔹 Example 2

```
Input:

Input: num = 7

Output:

Odd
Explanation:7 is odd.
```

### 🔹 Example 3

```
Input:

Input: num = 0

Output:

Even
Explanation:0 is considered even.
```

---

## ⚙️ Constraints

- `-109 <= num <= 109`
