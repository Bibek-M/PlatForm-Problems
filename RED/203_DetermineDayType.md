# 203. Determine Day Type

🟡 **Difficulty:** Easy

---

## 🧠 Problem: Determine Day Type

In this problem, you need to determine whether a given integer day, which ranges from 1 to 7, represents a weekday or a weekend. Each integer corresponds to a specific day of the week as follows:

Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday
Your task is to classify the input day into Weekday or Weekend. If the integer represents any of the days from Monday to Friday, the output should be Weekday. If it corresponds to Saturday or Sunday, the output should be Weekend. You must use an if-else-if ladder to implement your solution.

Example
Input: day = 4
Output: Weekday

Input: day = 6
Output: Weekend

Explanation
In the first example, the integer 4 corresponds to Thursday, which is a weekday. Hence, the output is Weekday.
In the second example, the integer 6 corresponds to Saturday, which is a weekend. Hence, the output is Weekend.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: day = 1

Output:

Weekday
Explanation:Day 1 represents Monday, which is a weekday.
```

### 🔹 Example 2

```
Input:

Input: day = 2

Output:

Weekday
Explanation:Day 2 represents Tuesday, which is a weekday.
```

### 🔹 Example 3

```
Input:

Input: day = 6

Output:

Weekend
Explanation:Day 6 represents Saturday, which is a weekend.
```

---

## ⚙️ Constraints

- `1 <= day <= 7`
