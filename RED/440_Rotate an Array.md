# 440. Rotate an Array

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

You are given an array of integers nums and a non-negative integer k. Your task is to rotate the array to the right by k steps, and you must do this in-place with a space complexity of O(1), meaning that the operation should use minimal extra space. This problem challenges your understanding of array manipulation and in-place algorithms.

In an array rotation, each element is shifted to the right. The last element moves to the first position, and all other elements are also shifted. When the array is rotated by k steps, an element that was at index i will move to index (i + k) % length of array.


---

## 📌 Examples

### 🔹 Example 1

```
Input:

nums = [1, 2, 3, 4, 5, 6, 7], k = 3

Output:

[5, 6, 7, 1, 2, 3, 4]

Explanation:

Rotating the array to the right by 3 steps produces the array [5, 6, 7, 1, 2, 3, 4]. Elements are moved to the right, and the trailing elements are repositioned at the beginning of the array.
```

### 🔹 Example 2

```
Input:

nums = [-1, -100, 3, 99], k = 2

Output:

[3, 99, -1, -100]

Explanation:

Rotating the array to the right by 2 steps results in [3, 99, -1, -100]. The elements at the end wrap around to the start of the array.
```

### 🔹 Example 3

```
Input:

Input: nums = [1, 2, 3, 4, 5, 6, 7], k = 3

Output:

[5, 6, 7, 1, 2, 3, 4]
Explanation:
```

### 🔹 Example 4

```
Input:

Input: nums = [-1, -100, 3, 99], k = 2

Output:

[3, 99, -1, -100]
Explanation:
```

### 🔹 Example 5

```
Input:

Input: nums = [1, 2, 3, 4, 5], k = 1

Output:

[5, 1, 2, 3, 4]
Explanation:
```

---

## 📝 Note

- The number of rotations exceeds the array length in some cases. Take into consideration that rotating the array n times results in the same arrangement as rotating it n % length of array times, thus simplifying the problem.
---

## ⚙️ Constraints

- `1 <= nums.length <= 105`
- `-231 <= nums[i] <= 231 - 1`
- `0 <= k <= 109`
