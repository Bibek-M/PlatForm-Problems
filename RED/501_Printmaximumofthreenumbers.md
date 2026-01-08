# 501. Print maximum of three numbers

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given three numbers (they can be integers or floating-point values), write a program that prints the maximum of the three.
The program should read the three numbers from input, compare them, and output the largest one. If two or all three numbers are equal and are the maximum, print that value once.

Input format
Three space-separated numbers (or three numbers on separate lines).

Output format
A single number — the maximum of the three inputs.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

a=3 b=7 c=5

Output:

7
Explanation:Among the three numbers 3, 7, and 5, the maximum is 7.
```

### 🔹 Example 2

```
Input: a=-327266113 b=-931480897 c=654747322

Output: '654747322'

Explanation: Among the numbers -327266113, -931480897, and 654747322, the maximum is 654747322.
```

### 🔹 Example 3

```
Input: a=-861733977 b=65034374 c=580274960

Output: '580274960'

Explanation: Among the numbers -861733977, 65034374, and 580274960, the maximum is 580274960.
```

---

## ⚙️ Constraints

- `Input consists of exactly three numbers.`
- `Each number is in the range -10^9 to 10^9.`
