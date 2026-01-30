# 439. Sort an Array of 0s and 1s

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an array consisting only of 0s and 1s, write a function to sort this array so that all 0s are placed before any 1s. The goal is to achieve this sorting in an efficient manner, with optimal use of time and space resources.


---

## 📌 Examples

### 🔹 Example 1

```
Input:

n = 6
arr = [0, 1, 0, 1, 0, 1]

Output:

[0, 0, 0, 1, 1, 1]

Explanation: The input array [0, 1, 0, 1, 0, 1] is rearranged such that all 0s appear before all 1s, resulting in the array [0, 0, 0, 1, 1, 1].

Instructions
Implement a function that takes an integer array containing only 0s and 1s, and returns a new sorted array where all 0s appear before all 1s.
The function should operate in linear time, making it suitable for handling very large arrays.
```

### 🔹 Example 2

```
Input:

Input: nums = [0, 1, 0, 1, 0, 1]

Output:

[0, 0, 0, 1, 1, 1]
Explanation:
```

### 🔹 Example 3

```
Input:

Input: nums = [1, 1, 1, 0, 0, 0]

Output:

[0, 0, 0, 1, 1, 1]
Explanation:
```

### 🔹 Example 4

```
Input:

Input: nums = [0, 0, 0, 0, 0]

Output:

[0, 0, 0, 0, 0]
Explanation:
```

---

## ⚙️ Constraints

- `1 ≤ n ≤ 106`
- `2. Each element of the array arr[i] is either 0 or 1.`
- `3. The output should maintain the order of 0s appearing before 1s.`
