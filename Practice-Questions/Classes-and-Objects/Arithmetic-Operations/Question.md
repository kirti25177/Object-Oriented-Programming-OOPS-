# Arithmetic Operations Using a Class
## Problem Statement

Create a simple calculator program using a class named `Operation` that stores two integers. Read two integers from the user and display the results of the following arithmetic operations:

- Addition
- Subtraction
- Multiplication
- Division
- Modulus

If the second integer is `0`, division and modulus operations cannot be performed. In such cases, print `Division by zero not possible`.

## Input Format

The input consists of two space-separated integers, `a` and `b`.

## Output Format

Print the results in the following format:

- `Addition of two numbers: <value>`
- `Difference of two numbers: <value>`
- `Product of two numbers: <value>`
- `Division of two numbers: <value>`
- `Modulus of two numbers: <value>`

If the second number is `0`, print `Division by zero not possible` for the division and modulus operations.

## Sample Input 1

```text
10 3
```

## Sample Output 1

```text
Addition of two numbers: 13
Difference of two numbers: 7
Product of two numbers: 30
Division of two numbers: 3
Modulus of two numbers: 1
```

## Sample Input 2

```text
10 0
```

## Sample Output 2

```text
Addition of two numbers: 10
Difference of two numbers: 10
Product of two numbers: 0
Division by zero not possible
Division by zero not possible
```
