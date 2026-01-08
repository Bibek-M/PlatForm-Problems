# 502. Check given triangle is valid or not

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given three numbers representing the lengths of the sides of a triangle, determine if a valid triangle can be formed with these sides.
A triangle is valid if the sum of any two sides is greater than the third side.

Input format
Three space-separated numbers representing the sides of the triangle.

Output format
Print Yes if a valid triangle can be formed, otherwise print No.

---

## 📌 Examples

### 🔹 Example 1

```
Input: a=29 b=37 c=18

Output: Yes

Explanation: The sum of any two sides is greater than the third side, so the triangle is valid.
```

### 🔹 Example 2

```
Input: a=44 b=26 c=48

Output: 'Yes'

Explanation: The sum of any two sides is greater than the third side, so the triangle is valid.
```

### 🔹 Example 3

```
Input: a=336366944 b=34259552 c=827373662

Output: 'No'

Explanation: The sum of any two sides is not greater than the third side, so the triangle is not valid.
```

---

## ⚙️ Constraints

- `Input consists of exactly three numbers.`
- `Each number is in the range 1 to 10^9.`
