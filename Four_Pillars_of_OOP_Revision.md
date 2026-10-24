# The Four Pillars of OOP — Complete Revision

Object-Oriented Programming (OOP) is a programming approach based on classes and objects. Its four main pillars are:

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

---

## 1. Encapsulation

**Definition:** Encapsulation is the process of combining data and the functions that operate on it into a single unit called a class, while controlling access to that data.

### Example

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance = 1000;

public:
    void showBalance() {
        cout << balance;
    }
};

int main() {
    BankAccount account;
    account.showBalance();

    return 0;
}
```

**Output:**

```text
1000
```

**Key point:** `balance` is private and cannot be accessed directly from outside the class.

**Benefits:**
- Protects data from unauthorized direct access.
- Controls how data is modified.
- Improves maintainability.

---

## 2. Abstraction

**Definition:** Abstraction means exposing essential functionality while hiding unnecessary implementation details.

### Example

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car started";
    }
};

int main() {
    Car c;
    c.start();

    return 0;
}
```

**Output:**

```text
Car started
```

**Key point:** The user calls `start()` without needing to know every detail of how a real car starts.

**Benefits:**
- Reduces complexity for users of a class.
- Separates interface from implementation.
- Makes systems easier to use.

---

## 3. Inheritance

**Definition:** Inheritance allows a new class (derived class) to acquire accessible members and behavior from an existing class (base class).

### Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks";
    }
};

int main() {
    Dog d;
    d.eat();
    d.bark();

    return 0;
}
```

**Output:**

```text
Animal eats
Dog barks
```

**Key point:** `Dog` inherits the public `eat()` function from `Animal`.

**Benefits:**
- Promotes code reuse.
- Represents hierarchical relationships.
- Supports extensible designs.

### Types of Inheritance

- Single inheritance
- Multiple inheritance
- Multilevel inheritance
- Hierarchical inheritance
- Hybrid inheritance

---

## 4. Polymorphism

**Definition:** Polymorphism means one interface or operation can take different forms.

C++ supports two major forms.

### A. Compile-Time Polymorphism

Resolved at compile time. Common examples include function overloading and operator overloading.

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << c.add(2, 3) << endl;
    cout << c.add(2.5, 3.5);

    return 0;
}
```

**Output:**

```text
5
6
```

### B. Run-Time Polymorphism

Achieved through mechanisms such as virtual functions and overriding.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks";
    }
};

int main() {
    Dog d;
    Animal* ptr = &d;

    ptr->sound();

    return 0;
}
```

**Output:**

```text
Dog barks
```

**Key point:** The virtual function allows the derived class implementation to be selected at run time through the base-class pointer.

---

## 5. Comparison of the Four Pillars

| Pillar | Main idea | Example |
|---|---|---|
| Encapsulation | Bundling data and controlling access | Private bank balance |
| Abstraction | Hiding implementation details | Simple car-start interface |
| Inheritance | Reusing and extending a base class | Dog inherits Animal |
| Polymorphism | One interface, different behaviors | Virtual `sound()` function |

---

## 6. Common Interview Questions

### Q1. What are the four pillars of OOP?

Encapsulation, abstraction, inheritance, and polymorphism.

### Q2. What is the difference between encapsulation and abstraction?

Encapsulation combines data and methods while controlling access. Abstraction hides unnecessary implementation details and exposes essential functionality.

### Q3. What is the difference between overloading and overriding?

- **Overloading:** Same function name with different parameter lists.
- **Overriding:** A derived class provides its own implementation of an inherited virtual function with a matching signature.

### Q4. What is run-time polymorphism in C++?

It is dynamic selection of an overridden virtual function based on the actual object type when called through a base-class pointer or reference.

### Q5. Why do we use inheritance?

Inheritance helps reuse and extend existing class behavior and represent relationships between classes.

### Q6. Can a private member be accessed directly by a derived class?

No. A derived class cannot directly access a base class's private members. It can use accessible public or protected interfaces provided by the base class.

---

## 7. Final Quick Revision

- **Encapsulation:** Bundle data and methods; control access.
- **Abstraction:** Show essential features; hide implementation details.
- **Inheritance:** Derive a class from another class.
- **Polymorphism:** Support different behaviors through a common interface.
- **Overloading:** Same function name, different parameter lists.
- **Overriding:** Redefine an inherited virtual function in a derived class.
- **Virtual function:** Enables run-time polymorphism in suitable calls.

