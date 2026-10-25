# Banking System Using Union

## Problem Statement

Design a banking system to handle account transactions. Each account stores a customer ID, account number, and balance.

Implement the system using a union named `AccountData` containing a structure with the following fields:
- `customerId` — integer
- `accountNumber` — integer
- `balance` — double

The program should deposit money into the account and then attempt to withdraw the specified amount. If the balance is insufficient, the withdrawal must fail.

## Input Format

Five values are provided:
1. Customer ID (integer)
2. Account number (integer)
3. Initial balance (double)
4. Deposit amount (double)
5. Withdrawal amount (double)

Values may be entered on separate lines or separated by spaces.

## Output Format

- Print `Amount deposited successfully.` after depositing.
- Print `Amount withdrawn successfully.` if withdrawal succeeds; otherwise print `Insufficient balance. Withdrawal failed.`
- Print `Account details:`, followed by the customer ID, account number, and remaining balance.
- Display the balance to exactly two decimal places.

## Constraints

- \(1 \leq\) Customer ID \(\leq 100000\)
- \(1 \leq\) Account Number \(\leq 1000000000\)
- \(0 \leq\) Initial Balance, Deposit Amount, Withdrawal Amount \(\leq 10000000\)

## Sample Input 1

```text
100
123456
5000.0
1000.0
500.0
```

## Sample Output 1

```text
Amount deposited successfully.
Amount withdrawn successfully.
Account details:
Customer ID: 100
Account number: 123456
Balance: 5500
