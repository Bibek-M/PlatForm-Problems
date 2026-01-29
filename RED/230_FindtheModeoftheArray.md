# 230. Find the Mode of the Array

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an array of integers, determine the mode of the array. The mode is the element that appears most frequently in the array. If there is more than one element with the highest frequency of appearances, return the smallest of these elements.


---

## 📌 Examples

### 🔹 Example 1

```
Input: [3, 3, 2, 1, 5, 1]
Output: 1
Explanation: The numbers 3 and 1 both appear twice, but 1 is smaller than 3, so 1 is the mode.
```

### 🔹 Example 2

```
Input: [7, 7, 7, 7, 8, 8]
Output: 7
Explanation: The number 7 appears four times while 8 appears twice, making 7 the mode.
```

### 🔹 Example 3

```
Input: [-1, -1, -2, -2, -3]
Output: -2
Explanation: The numbers -1 and -2 both appear twice, but -2 is smaller than -1, so -2 is the mode.
```

### 🔹 Example 4

```
Input:

Input: arr = [1, 2, 2, 3, 3, 3]

Output:

3
Explanation:3 is the mode with the highest frequency.
```

### 🔹 Example 5

```
Input:

Input: arr = [4, 5, 5, 6, 6]

Output:

5
Explanation:5 and 6 have the same frequency, but 5 is smaller.
```

### 🔹 Example 6

```
Input:

Input: arr = [10, 10, 10, 20, 20]

Output:

10
Explanation:10 is the mode with the highest frequency.
```

---

## ⚙️ Constraints

- `• 1 <= array size <= 1000`
- `• -10^6 <= array[i] <= 10^6`
