# 431. Create a Number Using Given Digits

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are provided with an array of digits. Your goal is to use every digit exactly once to form the largest possible integer. The integer should be constructed by arranging the digits in such a way that maximizes the digit's overall value.

Example
Input:


digits = [5, 8, 3, 2, 9]
Output:


98532
Explanation:

To achieve the largest possible number with the digits [5, 8, 3, 2, 9], they are rearranged in descending order resulting in the number 98532.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: digits = [1, 2, 3]

Output:

321
Explanation:The digits are combined as 3 → 2 → 1 forming 321.
```

### 🔹 Example 2

```
Input:

Input: digits = [4, 5, 6, 7]

Output:

7654
Explanation:The digits are combined as 7 → 6 → 5 → 4 forming 7654.
```

### 🔹 Example 3

```
Input:

Input: digits = [9, 8, 7, 6]

Output:

9876
Explanation:The digits are combined as 9 → 8 → 7 → 6 forming 9876.
```

---

## ⚙️ Constraints

- `The length of the array `digits` is in the range 1 ≤ digits.length ≤ 10^5`
- `Each digit is a non-negative integer and is between 0 and 9 inclusive.`
