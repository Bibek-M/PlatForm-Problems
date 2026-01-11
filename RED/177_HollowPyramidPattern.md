# 177. Hollow Pyramid Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Given an integer n, you are required to generate a pattern that displays a hollow pyramid with height n, using the character *. The pyramid should have the following properties:

The pyramid has n levels, and each level is a row in the pattern.
The first and last rows contain * in a sequential manner, forming the outline of the pyramid.
Every other row contains stars (*) only at the beginning and at the end, leaving the interior hollow.
Each row is centered such that the base of the pyramid is aligned.
Example:
For example, if n = 5, the pattern would be:

```
    *    
   * *   
  *   *  
 *     * 
*********
```
Where each line is centered according to the base which has 2*n - 1 characters including spaces.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=1

Output:

* 
Explanation:A single row pyramid with one '*' for n=1.
```

### 🔹 Example 2

```
Input:

n=2

Output:

  * 
* * * 
Explanation:A hollow pyramid with two rows.
```

### 🔹 Example 3

```
Input:

n=3

Output:

    * 
  *   * 
* * * * * 
Explanation:A hollow pyramid with three rows.
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
