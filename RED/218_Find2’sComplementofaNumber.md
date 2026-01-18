# 218. Find 2’s Complement of a Number

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Write a program to determine the 2's complement of an integer num. The 2’s complement of a binary number is the standard way of representing negative numbers in binary systems. To find the 2's complement:

Invert all the bits of the number.
Add 1 to the least significant bit (LSB) of the inverted binary number.
This operation results in the negative binary representation of the number.



---

## 📌 Examples

### 🔹 Example 1

```
Input:


num = 5
Output:


-5
Explanation:


The binary representation of 5 is `00000101`. Inverting the bits gives `11111010`. Adding 1 results in `11111011`, which is `-5` in decimal.
```

### 🔹 Example 2

```
Input:


num = 1
Output:


-1
Explanation:


The binary representation of 1 is `1`. Inverting the bits gives `0`. Adding 1 results in `1`, which represents `-1` in 2's complement for a single bit.
```

### 🔹 Example 3

```
Input:

Input: num = 5

Output:

-5
Explanation:2's complement of 5 is -5.
```

### 🔹 Example 4

```
Input:

Input: num = 10

Output:

-10
Explanation:2's complement of 10 is -10.
```

### 🔹 Example 5

```
Input:

Input: num = 1

Output:

-1
Explanation:2's complement of 1 is -1.
```

---

## ⚙️ Constraints

- `0 <= num <= 10^6`
