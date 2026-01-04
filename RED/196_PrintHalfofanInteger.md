# 196. Print Half of an Integer

🟡 **Difficulty:** Easy

---

## 🧠 Print Half of an Integer


In this problem, you are required to implement a function that computes and prints half of a given integer. The goal is to divide the integer by 2 and handle both even and odd numbers appropriately.

For even integers, your function should perform integer division to get an exact whole number. For odd integers, perform division such that the output accurately reflects half, including a decimal if necessary.

Your function should be capable of handling both positive and negative integers.

Example
Consider the following examples to better understand the requirement:

Input: 8
Output: 4

Explanation: Since 8 is even, the result of dividing by 2 is 4.

Input: 7
Output: 3.5

Explanation: For 7, which is odd, dividing by 2 results in a floating-point number 3.5.

Input: -5
Output: -2.5

Explanation: For -5, which is odd and negative, the division remains accurate, providing -2.5.

Input: -6
Output: -3

Explanation: As -6 is even, division by 2 results in -3, a whole number.

Your task is to write a function that can handle such cases accurately.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: 10

Output:

5
Explanation:Half of 10 is 5.
```

### 🔹 Example 2

```
Input:

Input: -20

Output:

-10
Explanation:Half of -20 is -10.
```

### 🔹 Example 3

```
Input:

Input: 0

Output:

0
Explanation:Half of 0 is 0.
```

---

## ⚙️ Constraints

- `The input integer can range from large negatives to large positives.`
- `Use division to compute exactly half of the integer.`
- `Handle both positive and negative integer inputs.`
- `Return precise values for both even and odd integers.`
