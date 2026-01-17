# 215. Check if a Number is Power of 2

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Implement a function that determines if a given integer num is a power of 2. An integer is considered a power of 2 if it can be represented in the form of 2x, where x is a non-negative integer.

Your task is to return true if the input number num is a power of 2, and false otherwise.

---

### Example
Input: num = 16

Output: true

Explanation: 16 is 24, which is a power of 2.

Input: num = 18

Output: false

Explanation: 18 cannot be expressed as a power of 2.



## 📌 Examples

### 🔹 Example 1

```
Input:

Input: num = 1

Output:

Yes
Explanation:1 is 2^0, hence a power of 2.
```

### 🔹 Example 2

```
Input:

Input: num = 2

Output:

Yes
Explanation:2 is 2^1, hence a power of 2.
```

### 🔹 Example 3

```
Input:

Input: num = 3

Output:

No
Explanation:3 is not a power of 2.
```

---

## 📝 Note

- You need to write an efficient solution; using properties of numbers and bit manipulation could be beneficial here.
- Consider edge cases and large values, within the given constraints.
---

## ⚙️ Constraints

- `0 <= num <= 109`
