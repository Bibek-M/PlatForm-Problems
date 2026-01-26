# 228. Shift Array Elements by One Position

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you are given an array of integers, and your task is to shift all its elements to the right by one position. This means that each element should move one place to the right, and the last element of the array should wrap around and move to the first position. This kind of operation is commonly known as a right rotation of the array.

For example, consider an array [1, 2, 3, 4]. After performing a right shift, it will transform into [4, 1, 2, 3].

Your task is to implement this rotation functionality efficiently, maintaining the circular nature of the shift.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: arr = [1]

Output:

[1]
Explanation:A single-element array remains the same after shifting.
```

### 🔹 Example 2

```
Input:

Input: arr = [1, 2]

Output:

[2, 1]
Explanation:Array with two elements shifted by one position.
```

### 🔹 Example 3

```
Input:

Input: arr = [1, 2, 3]

Output:

[3, 1, 2]
Explanation:Array shifted by one position.
```

---

## ⚙️ Constraints

- `1 <= arr.length <= 1000`
- `- -10^6 <= arr[i] <= 10^6`
