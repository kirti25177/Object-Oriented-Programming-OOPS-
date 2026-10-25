# Rocket Fuel Calculation

## Problem Statement

Ragu is working on a program to calculate the remaining fuel in a rocket after its flight.

Create a class named `Rocket` with the following data members:

- `initialFuel` — the amount of fuel at the start, in liters.
- `fuelUsedPerMinute` — the amount of fuel consumed per minute, in liters.
- `flightDuration` — the duration of the flight, in minutes.

Read the input values, store them in an object of the class, and calculate the amount of fuel remaining after the flight.

If the total fuel consumed is greater than or equal to the initial fuel, print `0`.

## Input Format

- The first line contains an integer representing the initial fuel in liters.
- The second line contains an integer representing fuel consumption per minute in liters.
- The third line contains an integer representing flight duration in minutes.

## Output Format

Print an integer representing the remaining fuel after the flight. If the fuel consumed equals or exceeds the initial fuel, print `0`.

## Sample Input 1

```text
100
5
10
```

## Sample Output 1

```text
50
```

## Sample Input 2

```text
50
10
5
```

## Sample Output 2

```text
0
```

## Concepts Used

- Classes and Objects
- Data Members
- Member Functions
- Arithmetic Operations
- Conditional Statements
