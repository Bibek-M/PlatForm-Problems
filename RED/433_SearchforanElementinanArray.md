# 433. Search for an Element in an Array

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you are given an array of integers called nums and an integer target. Your task is to determine whether the target exists within the array. If the target is found, return the index of its first occurrence. If the target is not found, return -1. Use a straightforward approach to access each element in the array to see if it matches the target.

Example:
Input:

nums = [4, 2, 7, 1, 9, 3]
target = 7

Output:

2

Explanation: The target 7 is located at index 2 in the array.

Input:

nums = [5, 8, 6, 3]
target = 2

Output:

-1

Explanation: The target 2 is not present in the array, hence the output is -1.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: nums = [1, 2, 3, 4, 5], target = 3

Output:

2
Explanation:Element 3 is found at index 2.
```

### 🔹 Example 2

```
Input:

Input: nums = [10, 20, 30, 40, 50], target = 50

Output:

4
Explanation:Element 50 is found at index 4.
```

### 🔹 Example 3

```
Input:

Input: nums = [7, 8, 9, 10, 11], target = 5

Output:

-1
Explanation:Element 5 is not present in the array.
```

---

## ⚙️ Constraints

- `The array nums will have at least 1 and at most 104 elements.`
- `Each element in nums will be an integer between -105 and 105.`
- `The target is an integer also between -105 and 105.`
