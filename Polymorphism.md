# Polymorphism in C++

## 1. What Is Polymorphism?

Polymorphism is one of the four main pillars of Object-Oriented Programming (OOP).

The word polymorphism means **many forms**.

In C++, polymorphism allows the same function name or interface to behave differently depending on the arguments or the object involved.

## 2. Types of Polymorphism

C++ supports two major forms of polymorphism:

1. Compile-time polymorphism
2. Runtime polymorphism

### Compile-Time Polymorphism

The compiler determines which function or operation to use during compilation.

Common examples:
- Function overloading
- Operator overloading
- Templates

### Runtime Polymorphism

The function implementation is selected at runtime through mechanisms such as virtual functions and overriding.

## 3. Function Overloading

Function overloading means defining multiple functions with the same name but different parameter lists.

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << c.add(2, 3) << endl;
    cout << c.add(2, 3, 4) << endl;
    cout << c.add(2.5, 3.5) << endl;

    return 0;
}
```

### Output

```text
5
9
6
```

The compiler selects the appropriate overload based on the arguments.

**Important:** Functions cannot be overloaded based only on their return types.

## 4. Operator Overloading

Operator overloading allows operators to work with user-defined types.

For example, we can define what the `+` operator means when adding two objects of a class.

```cpp
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << n3.value;

    return 0;
}
```

### Output

```text
30
```

The overloaded `+` operator adds the values stored in the two `Number` objects.

## 5. Function Overriding

Function overriding occurs when a derived class provides its own implementation of an inherited virtual function with a matching signature.

It is commonly used for runtime polymorphism.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();

    return 0;
}
```

### Output

```text
Dog barks
```

The `Dog` class provides its own implementation of `sound()`.

The `override` keyword asks the compiler to verify that the function overrides a virtual function from the base class.

## 6. Runtime Polymorphism Using Virtual Functions

A base-class pointer or reference can refer to a derived-class object.

When a virtual function is called through that pointer or reference, the derived implementation is selected according to the object's dynamic type.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    Animal* ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}
```

### Output

```text
Dog barks
Cat meows
```

### Explanation

- `ptr` is a pointer to the base class `Animal`.
- Initially, it points to the `Dog` object.
- The virtual call executes `Dog::sound()`.
- Next, it points to the `Cat` object.
- The virtual call executes `Cat::sound()`.

This is runtime polymorphism.

## 7. Compile-Time vs Runtime Polymorphism

| Compile-Time Polymorphism | Runtime Polymorphism |
|---|---|
| Resolved during compilation. | Virtual function dispatch is resolved at runtime. |
| Commonly uses function and operator overloading. | Commonly uses virtual functions and overriding. |
| Does not require virtual functions. | Requires virtual dispatch for this form of polymorphism. |
| Example: `add(2, 3)` | Example: calling `sound()` through an `Animal*`. |

## 8. Advantages of Polymorphism

1. Improves flexibility in program design.
2. Allows a common interface for different implementations.
3. Reduces the need for repetitive conditional logic in suitable designs.
4. Makes programs easier to extend.
5. Supports reusable and maintainable code.

## 9. Important Points

- Polymorphism means many forms.
- Function overloading is compile-time polymorphism.
- Operator overloading provides custom operator behaviour for user-defined types.
- Function overriding allows a derived class to provide its own implementation.
- Virtual functions enable runtime polymorphism through base-class pointers and references.
- The `override` keyword helps detect incorrect overriding.
- A polymorphic base class should generally have a virtual destructor when objects may be deleted through base-class pointers.

## 10. Practice Questions

1. Define polymorphism.
2. What are the two major types of polymorphism?
3. What is function overloading?
4. Can functions be overloaded using only different return types?
5. What is operator overloading?
6. What is function overriding?
7. What is the purpose of the `virtual` keyword?
8. What does the `override` keyword do?
9. Differentiate between compile-time and runtime polymorphism.
10. Write a program demonstrating function overloading.
11. Write a program demonstrating runtime polymorphism using a base-class pointer.
12. Why can a virtual destructor be important in a base class?

---

**Next Topic:** Virtual Functions and Dynamic Binding in C++
