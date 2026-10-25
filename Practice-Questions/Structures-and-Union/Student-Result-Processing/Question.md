# Student Result Processing Using Structure

## Problem Statement

Prakash is developing a student result processing system for a school. The program must store a student's name, roll number, and marks in five subjects, calculate the total and average marks, and determine the student's result.

Create a structure named `student` containing the following members:

- Roll Number
- Name
- Mark1, Mark2, Mark3, Mark4, Mark5
- Total
- Average

Read the student's details and calculate the total and average marks.

### Result Conditions

- Print `Pass` if all five subject marks are greater than or equal to 50.
- Print `Fail` if any subject mark is below 50.
- If the student passes, determine the result category based on the average:
  - `Distinction` if average ≥ 75.
  - `First Class` if average is between 60 and 74, inclusive.
  - `Second Class` if average is between 50 and 59, inclusive.

## Input Format

The input contains the student's name, roll number, and marks in five subjects. The marks are double values.

## Output Format

Display the student's name, roll number, and result in the specified format:

- `NAME: <name>`
- `ROLL NO: <roll number>`
- `RESULT: <result>`

If the student passes, also display the applicable result category.

## Constraints

- Name length: 1–50 characters
- Roll number: 1–1000
- Subject marks: 0.0–100.0

## Sample Input

```text
Aravind 19 90.0 90.0 85.0 92.0 88.0
```

## Sample Output

```text
NAME: Aravind
ROLL NO: 19
RESULT: Pass
Distinction
```

## Concepts Used

- Structures
- Data Members
- Input and Output
- Loops
- Total and Average Calculation
- Conditional Statements
