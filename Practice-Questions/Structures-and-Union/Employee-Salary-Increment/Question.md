# Employee Salary Increment Using Structure

## Problem Statement

Ranveer is developing an employee management system to store and process employee information, including name, employee ID, years of experience, and basic salary.

Create a structure named `DEPT` with the following fields:

- `Name` — employee's name
- `Employee ID` — employee's ID
- `Years of Experience` — years of experience
- `Basic Salary` — employee's basic salary

Read the details of exactly three employees and update their salaries according to their experience.

### Salary Increment Rules

- Experience of 10 years or more: increase salary by 10%.
- Experience between 5 and 9 years, inclusive: increase salary by 5%.
- Experience between 1 and 4 years, inclusive: increase salary by 2%.

## Input Format

The input consists of three lines, one for each employee. Each line contains:

`name employee_id years_of_experience salary`

## Output Format

Display the updated details of each employee in the following format, with a blank line between employees:

`Employee Name : <name>`

`Employee Id : <id>`

`years of experience : <years>`

`salary : <updated salary>`

## Sample Input

```text
Aman 101 10 50000
Riya 102 6 40000
Karan 103 3 30000
```

## Sample Output

```text
Employee Name : Aman
Employee Id : 101
years of experience : 10
salary : 55000

Employee Name : Riya
Employee Id : 102
years of experience : 6
salary : 42000

Employee Name : Karan
Employee Id : 103
years of experience : 3
salary : 30600
```

## Concepts Used

- Structures
- Arrays of Structures
- Loops
- Conditional Statements
- Percentage Calculation
