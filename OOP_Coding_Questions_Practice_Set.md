# OOP Coding Questions in C++ — Practice Set

This file contains beginner-to-intermediate coding questions to practice Object-Oriented Programming concepts in C++.

**Goal:** Try solving each question yourself before checking a solution. Focus on classes, objects, constructors, inheritance, polymorphism, encapsulation, and operator overloading.

## Level 1: Classes and Objects

### Question 1: Create a Student Class

Create a `Student` class with the following data members:

- `name`
- `rollNumber`
- `marks`

Create a member function to display the student's details.

**Concepts:** Classes, objects, data members, member functions.

### Question 2: Create a Rectangle Class

Create a `Rectangle` class with `length` and `breadth`.

Implement functions to calculate:

- Area
- Perimeter

**Concepts:** Classes, objects, member functions.

### Question 3: Create a Bank Account

Create a `BankAccount` class with a private `balance` data member.

Implement public functions to:

- Deposit money
- Withdraw money if sufficient funds are available
- Display the balance

**Concepts:** Encapsulation, access specifiers.

### Question 4: Demonstrate the `this` Pointer

Create a class with a data member named `age`. Write a member function whose parameter is also named `age`, and use `this` to distinguish the data member from the parameter.

**Concepts:** `this` pointer, member functions.

## Level 2: Constructors and Destructors

### Question 5: Default and Parameterized Constructors

Create a `Student` class with:

- A default constructor that initializes the name to `"Unknown"`.
- A parameterized constructor that accepts a name.
- A display function.

Create objects using both constructors.

**Concepts:** Constructors, constructor overloading.

### Question 6: Copy Constructor

Create a class named `Number` containing an integer.

Implement a copy constructor and demonstrate copying one object into another.

**Concepts:** Copy constructor, object initialization.

### Question 7: Constructor and Destructor Order

Create a class whose constructor prints `"Constructor called"` and whose destructor prints `"Destructor called"`.

Create an object inside a block and observe the output when the block ends.

**Concepts:** Object lifetime, constructors, destructors.

## Level 3: Inheritance

### Question 8: Single Inheritance

Create a base class `Animal` with a function `eat()`.

Create a derived class `Dog` with a function `bark()`.

Demonstrate that a `Dog` object can call both functions.

**Concepts:** Single inheritance.

### Question 9: Multilevel Inheritance

Create the following inheritance hierarchy:

- `Person` contains a person's name.
- `Student` inherits from `Person` and contains a roll number.
- `GraduateStudent` inherits from `Student` and contains a degree name.

Display all information.

**Concepts:** Multilevel inheritance.

### Question 10: Multiple Inheritance

Create two base classes:

- `Academic`: stores academic marks.
- `Sports`: stores sports marks.

Create a derived class `Result` that inherits from both and displays both scores.

**Concepts:** Multiple inheritance.

## Level 4: Polymorphism

### Question 11: Function Overloading

Create a class `Calculator` with overloaded `add()` functions for:

- Two integers
- Three integers
- Two floating-point numbers

**Concepts:** Compile-time polymorphism, function overloading.

### Question 12: Function Overriding

Create a base class `Animal` with a virtual function `sound()`.

Create derived classes `Dog` and `Cat` that override `sound()`.

Call the function through a base-class reference or pointer.

**Concepts:** Function overriding, virtual functions, run-time polymorphism.

### Question 13: Abstract Class

Create an abstract class `Shape` with a pure virtual function `area()`.

Create derived classes `Rectangle` and `Circle` that implement `area()`.

Display the area of each shape.

**Concepts:** Abstraction, pure virtual functions.

### Question 14: Operator Overloading

Create a `Complex` class with real and imaginary parts.

Overload the `+` operator to add two complex numbers.

For example:

- First number: `2 + 3i`
- Second number: `4 + 5i`
- Result: `6 + 8i`

**Concepts:** Operator overloading.

## Level 5: Advanced OOP Concepts

### Question 15: Static Data Member

Create a class `Employee` with a static data member that counts the number of constructed objects.

Display the count after creating three objects.

**Concepts:** Static data members, constructors.

### Question 16: Friend Function

Create a class `Box` with a private data member `width`.

Declare a friend function that displays the width.

**Concepts:** Friend functions, private members.

### Question 17: Deep Copy

Create a class that dynamically allocates an integer using `new`.

Implement a copy constructor that allocates separate memory and copies the pointed-to value.

Modify the copied object's value and demonstrate that the original remains unchanged.

Implement correct cleanup and consider copy assignment as well.

**Concepts:** Copy constructor, deep copy, dynamic memory management.

### Question 18: Exception Handling

Create a `Calculator` class with a division function.

Throw an exception if the divisor is zero, and handle it in `main()`.

**Concepts:** `try`, `throw`, `catch`.

### Question 19: Function Template

Write a function template named `maximum()` that accepts two values of the same type and returns the larger value.

Test it with integers and floating-point numbers.

**Concepts:** Function templates, generic programming.

### Question 20: Composition

Create an `Engine` class and a `Car` class.

Make `Engine` a data member of `Car`. Demonstrate the construction and destruction order.

**Concepts:** Composition, object lifetime.

---

## Practice Checklist

Mark each question as completed after writing and testing your own solution.

- [ ] Q1 — Student class
- [ ] Q2 — Rectangle
- [ ] Q3 — Bank account
- [ ] Q4 — `this` pointer
- [ ] Q5 — Constructors
- [ ] Q6 — Copy constructor
- [ ] Q7 — Destructor
- [ ] Q8 — Single inheritance
- [ ] Q9 — Multilevel inheritance
- [ ] Q10 — Multiple inheritance
- [ ] Q11 — Function overloading
- [ ] Q12 — Run-time polymorphism
- [ ] Q13 — Abstract class
- [ ] Q14 — Operator overloading
- [ ] Q15 — Static members
- [ ] Q16 — Friend function
- [ ] Q17 — Deep copy
- [ ] Q18 — Exception handling
- [ ] Q19 — Function template
- [ ] Q20 — Composition

## Final Advice

1. Write each program yourself instead of memorizing the solution.
2. Compile and run your code.
3. Explain why the output occurs.
4. Practice modifying the problem with extra requirements.
5. Revise the four pillars of OOP before interviews and examinations.

