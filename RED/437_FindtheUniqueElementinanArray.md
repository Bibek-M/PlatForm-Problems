# 437. Find the Unique Element in an Array

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are given an array of integers where each element appears twice, except for one distinct element that appears only once. Your task is to identify and return this unique element. Implement an efficient solution that operates in linear time complexity with constant additional space.

Example
Input:


nums = [2, 3, 5, 4, 5, 3, 4]
Output:


2
Explanation:

In the given array, every element appears twice except for the number 2. Thus, the output is 2, as it is the unique element.

Your goal is to find this single non-repeating element effectively.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: nums = [2, 3, 5, 3, 2]

Output:

5
Explanation:
```

### 🔹 Example 2

```
Input:

Input: nums = [1, 1, 2, 2, 3]

Output:

3
Explanation:
```

### 🔹 Example 3

```
Input:

Input: nums = [7]

Output:

7
Explanation:
```

---

## ⚙️ Constraints

- `1 <= nums.length <= 105`
- `Each integer in nums is within the range -109 to 109`
