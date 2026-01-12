# 181. Rhombus Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you are required to generate a pattern shaped like a rhombus using asterisks (*). The rhombus pattern should have a specified height n, and each row should contain exactly n asterisk (*) characters. The key elements of the pattern include:

The rhombus will have n rows.
Each row will start with a certain number of leading spaces, which decrease as we progress from the top row to the bottom row.
Specifically, the first row will have n-1 leading spaces, the second will have n-2, continuing this pattern until the last row which will have zero leading spaces.
There should be a space after each * and each leading space.
### Example
Suppose you are given n = 4. The rhombus pattern will be generated as follows:

```
            * * * * 
        * * * * 
    * * * * 
* * * * 
```
In this example, notice how each line contains exactly n stars and starts with a precise amount of space, reducing by one on each subsequent line.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

* 
Explanation:A single row rhombus with one '*' for n=1.
```

### 🔹 Example 2

```
Input:

n=2

Output:

 * * 
* * 
Explanation:A rhombus pattern with two rows.
```

### 🔹 Example 3

```
Input:

n=3

Output:

  * * * 
 * * * 
* * * 
Explanation:A rhombus pattern with three rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
