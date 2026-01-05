# 200. Calculate the Percentage

🟡 **Difficulty:** Easy

---

## 🧠 Calculate the Percentage


In this problem, you are required to compute the percentage of marks a student has obtained based on the total possible marks.

You will be given two integers:

totalMarks: This represents the maximum marks that can be achieved by the student.
obtainedMarks: This denotes the marks that the student has actually obtained.
Your task is to calculate the percentage obtained using these two values. The result should be a float rounded to two decimal places.

Example
Suppose totalMarks is 200 and obtainedMarks is 150, then the percentage should be calculated as follows:

The percentage of marks obtained = (obtainedMarks / totalMarks) * 100
Therefore, the percentage is (150 / 200) * 100 = 75.00
Your program should output 75.00 in this case.

Steps to Solve
Determine the fraction by dividing obtainedMarks by totalMarks.
Multiply the fraction by 100 to convert it to a percentage.
Make sure to format the output to two decimal places.

---

## 📌 Examples

### 🔹 Example 1

```
Input:

Input: totalMarks = 100, obtainedMarks = 75

Output:

75.00
Explanation:The percentage of 75 out of 100 is 75.00%.
```

### 🔹 Example 2

```
Input:

Input: totalMarks = 200, obtainedMarks = 150

Output:

75.00
Explanation:The percentage of 150 out of 200 is 75.00%.
```

### 🔹 Example 3

```
Input:

Input: totalMarks = 1000, obtainedMarks = 900

Output:

90.00
Explanation:The percentage of 900 out of 1000 is 90.00%.
```

---

## ⚙️ Constraints

- `1 <= totalMarks <= 10⁶`
- `0 <= obtainedMarks <= totalMarks`
