# 186. Zig-Zag Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

Your task is to write a function that generates a star pattern resembling the shape of the letter 'X'. The pattern is defined by a positive integer n, which dictates the number of rows, with each row stretching to 2*n columns. The pattern will use asterisks (*) to depict the 'X'.

For each row of the pattern:

The asterisks should be placed such that they form two diagonal lines.
These lines should intersect at a central point, resembling the letter 'X'.
The pattern should be symmetrical, with the diagonal lines converging and then diverging after they meet at the center.
Here's how the pattern looks for n = 4:

```
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
```
The pattern starts with asterisks at the start and end of the first row.
As you progress through the rows, the asterisks move inward toward the center.
Once they intersect at the center, they then move outward, completing the 'X'.
Ensure you accurately reflect this pattern generation based on the input n.

Example
If n = 4, the expected output pattern is as shown above.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n=3

Output:

*     *
 *   *
  * *
   *
  * *
 *   *
*     *
Explanation:A zig-zag pattern with 3 rows.
```

### 🔹 Example 2

```
Input:

n=4

Output:

*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
Explanation:A zig-zag pattern with 4 rows.
```

### 🔹 Example 3

```
Input:

n=5

Output:

*         *
 *       *
  *     *
   *   *
    * *
     *
    * *
   *   *
  *     *
 *       *
*         *
Explanation:A zig-zag pattern with 5 rows.
```

---

## ⚙️ Constraints

- `3 <= n <= 10`
