# 180. Butterfly Pattern

🟡 **Difficulty:** Easy

---

## 🧠 Problem Statement

In this problem, you need to design a function that generates a butterfly pattern using asterisks ('*'). The pattern consists of two symmetrical parts: the upper half and the lower half.

For a given integer input n, which dictates the number of rows in each half, the pattern will have 2n total rows.

#### Upper Half:
Each row i (where 1 <= i <= n) begins with i asterisks.
After the asterisks, there are (2 * (n - i)) spaces.
The row ends with i more asterisks.
#### Lower Half:
Each row i (where 1 <= i <= n) starts with n - i + 1 asterisks.
This is followed by (2 * (i - 1)) spaces.
And ends with n - i + 1 asterisks again.
#### Example
For n = 4, the butterfly pattern would be:

```
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
```
This pattern demonstrates the symmetrical nature of the butterfly design where the upper and lower sections mirror each other.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

n = 1

Output:

**
**
Explanation:Smallest possible butterfly with n=1
```

### 🔹 Example 2

```
Input:

n = 2

Output:

*  *
****
****
*  *
Explanation:Basic butterfly pattern with 2 rows in each wing
```

### 🔹 Example 3

```
Input:

n = 3

Output:

*    *
**  **
******
******
**  **
*    *
Explanation:Butterfly pattern with 3 rows in each wing
```

---

## ⚙️ Constraints

- `1 <= n <= 20`
