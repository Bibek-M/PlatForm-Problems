# 224. Find the Average of Array Elements

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are given an array of integers. Your task is to compute the average value of the elements in the array. The average is defined as the sum of all the elements divided by the number of elements. You should consider all possible integer values that are within the provided constraints.

#### Example:
Suppose you have an array: [2, 4, 6, 8]

The sum of the array elements is 2 + 4 + 6 + 8 = 20.
The number of elements in the array is 4.
Therefore, the average is 20 / 4 = 5.0.
Your task is to implement a function that calculates this average for any given array of integers.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: arr = [2, 4, 6, 8, 10]

Output:

6
Explanation:Average of [2, 4, 6, 8, 10] is 6.
```

### 🔹 Example 2

```
Input:

Input: arr = [1, -1, 1, -1]

Output:

0
Explanation:Average of [1, -1, 1, -1] is 0.
```

### 🔹 Example 3

```
Input:

Input: arr = [5, 10, 15]

Output:

10
Explanation:Average of [5, 10, 15] is 10.
```

---

## ⚙️ Constraints

- `1 <= array.length <= 1000`
- `-10^6 <= array[i] <= 10^6`
