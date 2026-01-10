# 172. Right-Angle Triangle Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

The goal of this problem is to generate a right-angle triangle pattern using asterisks (*). The triangle will have a 'height' determined by the integer n. The triangle is constructed as follows:

The first row contains a single * character.
Each subsequent row contains one more * character than the previous row.
The triangle is left-aligned, and each * in a row should be separated by a single space.
Example:
If the input n = 4, the expected output is:

```
*  
* *  
* * *  
* * * *  
```
Each line of output should correspond to a row of the triangle, following the pattern described above.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=2

Output:

* 
* * 
Explanation:A right-angle triangle pattern of height 2.
```

### 🔹 Example 2

```
Input:

n=3

Output:

* 
* * 
* * * 
Explanation:A right-angle triangle pattern of height 3.
```

### 🔹 Example 3

```
Input:

n=5

Output:

* 
* * 
* * * 
* * * * 
* * * * * 
Explanation:A right-angle triangle pattern of height 5.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
