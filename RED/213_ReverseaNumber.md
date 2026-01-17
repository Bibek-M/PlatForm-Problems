# 213. Reverse a Number

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

You are given a positive integer num. Your task is to reverse its digits and return the resulting number. The most significant digit of the original number should become the least significant in the reversed number, and so on for each digit. Importantly, the number num is never negative, which means you don't have to handle negative signs. Furthermore, any leading zeros that appear in the reversed number should not be included in the output. For instance, if the input is 100, the reversed number will be 1 as leading zeros are omitted.



---

## 📌 Examples

### 🔹 Example 1

```
Input: num = 12345
Output: 54321
The digits 12345 become 54321 when reversed.
```

### 🔹 Example 2

```
Input: num = 100
Output: 1
The digits 100 become 001, but leading zeros are not part of the number, thus 1 is returned.
```

### 🔹 Example 3

```
Input:

Input: num = 123

Output:

321
Explanation:Reversing 123 gives 321.
```

### 🔹 Example 4

```
Input:

Input: num = 456

Output:

654
Explanation:Reversing 456 gives 654.
```

### 🔹 Example 5

```
Input:

Input: num = 78910

Output:

1987
Explanation:Reversing 78910 gives 1987.
```

---

## ⚙️ Constraints

- `0 <= num <= 10^9`
