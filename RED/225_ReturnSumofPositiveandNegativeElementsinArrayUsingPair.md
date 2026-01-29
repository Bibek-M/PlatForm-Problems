# 225. Return Sum of Positive and Negative Elements in Array Using Pair

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an array of integers, your task is to implement a function that calculates two separate sums: one for all the positive integers in the array, and another for all the negative integers. The function should return these two sums as a pair (tuple) of integers.

The first integer in the pair should be the sum of all positive numbers.
The second integer should be the sum of all negative numbers.

---

## 📌 Examples

### 🔹 Example 1

```
Input: [-1, 2, 3, -4, 5]

Output: (10, -5)

Here, the positive numbers are [2, 3, 5], whose sum is 10.
The negative numbers are [-1, -4], whose sum is -5.
This problem tests your ability to traverse an array and perform conditional aggregation based on the sign of each element.
```

### 🔹 Example 2

```
Input:

Input: arr = [1, 2, 3, -1, -2]

Output:

(6, -3)
Explanation:Sum of positives is 6 and negatives is -3.
```

### 🔹 Example 3

```
Input:

Input: arr = [0, 1, -1]

Output:

(1, -1)
Explanation:Sum of positives is 1 and negatives is -1.
```

### 🔹 Example 4

```
Input:

Input: arr = [-5, -10, -15]

Output:

(0, -30)
Explanation:Sum of positives is 0 and negatives is -30.
```

---

## ⚙️ Constraints

- `• 1 <= array size <= 1000`
- `• -10^6 <= array[i] <= 10^6`
