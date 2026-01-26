# 432. Multiply Each Element of an Array by 10

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are given an array of integers and your task is to return a new array where each element in the given array is multiplied by 10.

Your function should take an array as input and output another array where each integer is multiplied by 10.


---

## 📌 Examples

### 🔹 Example 1

```
Input: arr = [1, 2, 3, 4, 5]
Output: [10, 20, 30, 40, 50]
Explanation: Each element of the array [1, 2, 3, 4, 5] is multiplied by 10, resulting in the array [10, 20, 30, 40, 50].
```

### 🔹 Example 2

```
Input: arr = [0, -1, -100]
Output: [0, -10, -1000]
Explanation: The elements of the array [0, -1, -100] are multiplied by 10, resulting in [0, -10, -1000].

Task
Write a function that takes an integer array and returns a new array with each element multiplied by 10.
```

### 🔹 Example 3

```
Input:

Input: arr = [1, 2, 3, 4, 5]

Output:

[10, 20, 30, 40, 50]
Explanation:Each element is multiplied by 10.
```

### 🔹 Example 4

```
Input:

Input: arr = [0, -1, -2, 3, 4]

Output:

[0, -10, -20, 30, 40]
Explanation:Negative and zero values also get multiplied correctly.
```

### 🔹 Example 5

```
Input:

Input: arr = [10, 20, 30]

Output:

[100, 200, 300]
Explanation:All numbers are multiplied by 10.
```

---

## ⚙️ Constraints

- `1 ≤ n ≤ 105 where n is the number of elements in the array.`
- `-109 ≤ arr[i] ≤ 109 where arr[i] is the ith element of the array.`
- `Each element should be processed independently.`
