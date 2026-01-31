# 438. Three Sum

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

Three Sum Problem
The Three Sum problem requires you to identify all unique triplets in an integer array nums that sum up to zero. A triplet consists of three numbers: [nums[i], nums[j], nums[k]], such that the indices i, j, and k satisfy i != j, i != k, and j != k. No duplicate triplet sets should appear in the output.


---

## 📌 Examples

### 🔹 Example 1

```
Input: nums = [-1, 0, 1, 2, -1, -4]
Output: [[-1, 0, 1], [-1, -1, 2]]
Explanation: The triplets [-1, 0, 1] and [-1, -1, 2] are the valid unique combinations that produce a sum of zero.
```

### 🔹 Example 2

```
Input: nums = []
Output: []
Explanation: An empty array does not contain any numbers, thus no triplets to consider.
```

### 🔹 Example 3

```
Input: nums = [0]
Output: []
Explanation: It is not possible to form a triplet from a single element array.
```

### 🔹 Example 4

```
Input:

Input: nums = [-1, 0, 1, 2, -1, -4]

Output:

[[-1, -1, 2], [-1, 0, 1]]
Explanation:
```

### 🔹 Example 5

```
Input:

Input: nums = [0, 1, 1]

Output:

[]
Explanation:
```

### 🔹 Example 6

```
Input:

Input: nums = [0, 0, 0]

Output:

[[0, 0, 0]]
Explanation:
```

---

## 📝 Note

- You may return the output in any order. The integers within the triplets do not have to be in ascending order.
- Ensure that the solution handles numbers that are both negative and positive, as well as zeros efficiently.
---

## ⚙️ Constraints

- `0 <= nums.length <= 3000`
- `-105 <= nums[i] <= 105`
