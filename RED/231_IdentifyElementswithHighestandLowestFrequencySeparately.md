# 231. Identify Elements with Highest and Lowest Frequency Separately

🟡 **Difficulty:** Medium

---

## 🧠 Problem Statement

You are given an array of integers. Your task is to identify two elements: the one that appears with the highest frequency and the one that appears with the lowest frequency in the array. In the event that multiple elements share the same highest or lowest frequency, select the smallest element among those.

#### Example:
Input:


[4, 4, 1, 2, 2, 2, 3, 3, 3, 3]
Output:


Highest Frequency Element: 3
Lowest Frequency Element: 1
Explanation:

In the given array, the number 3 appears 4 times, which is the highest frequency. On the other hand, the number 1 appears only once, which is the lowest frequency. Even though 2 appears 3 times, 3 is the element with the highest frequency due to the higher count. When dealing with ties, choose the smallest number amongst the tied elements.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: arr = [1, 2, 2, 3, 3, 3]

Output:

{3,1}
Explanation:3 is the mode with the highest frequency.
```

### 🔹 Example 2

```
Input:

Input: arr = [4, 5, 5,5, 6, 6]

Output:

{5,4}
Explanation:5 and 6 have the same frequency, but 5 is smaller.
```

### 🔹 Example 3

```
Input:

Input: arr = [10, 10, 10, 20, 20]

Output:

{10,20}
Explanation:10 is the mode with the highest frequency.
```

---

## ⚙️ Constraints

- `• 1 <= array size <= 1000`
- `• -10^6 <= array[i] <= 10^6`
