# 435. Find the Maximum Element in an Array

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to find the maximum integer value in a given array. This basic problem tests your ability to work with array traversal and element comparison efficiently.

Function Signature

    def findMaximum(arr: List[int]) -> int:
Input
A list of integers arr.
Output
The maximum integer present in the array.

---

## 📌 Examples

### 🔹 Example 1

```
Input:


arr = [1, 2, 3, 4, 5]
Output:


5
Explanation: The largest number in the array [1, 2, 3, 4, 5] is 5.
```

### 🔹 Example 2

```
Input:


arr = [-1, -2, -3, -4, -5]
Output:


-1
Explanation: Even though all numbers are negative, -1 is the highest value in the array.

Approach
While handling the problem, ensure you iterate through the array and keep track of the current maximum element. It is necessary to update this maximum as you progress through the array.
```

### 🔹 Example 3

```
Input:

Input: arr = [1, 2, 3, 4, 5]

Output:

5
Explanation:The maximum element in the array is 5.
```

### 🔹 Example 4

```
Input:

Input: arr = [5, 4, 3, 2, 1]

Output:

5
Explanation:The maximum element is at the beginning.
```

### 🔹 Example 5

```
Input:

Input: arr = [10, 20, 5, 40, 30, 50]

Output:

50
Explanation:The maximum element is 50, appearing last.
```

---

## ⚙️ Constraints

- `1 ≤ n ≤ 105 where n is the number of elements in the array.`
- `-109 ≤ arr[i] ≤ 109 where arr[i] is the i-th element of the array.`
