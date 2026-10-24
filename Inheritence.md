# Inheritance in C++

## 1. What Is Inheritance?

Inheritance is one of the four main pillars of Object-Oriented Programming (OOP).

It allows a new class to acquire accessible properties and behaviours from an existing class.

- **Base class:** The class whose features are inherited.
- **Derived class:** The class that inherits from the base class.

Inheritance promotes code reusability and helps represent relationships between classes.

## 2. Real-Life Example

Consider a general class called `Vehicle`.

It may contain:
- Brand
- Speed
- A function to start the vehicle

Now, we can create `Car` and `Bike` classes that inherit from `Vehicle`.

Both can reuse the common functionality and also define their own features.

## 3. Syntax of Inheritance

```cpp
class DerivedClass : public BaseClass {
    // Additional members
};
```

Here, `DerivedClass` inherits from `BaseClass` using public inheritance.

C++ supports public, protected, and private inheritance.

## 4. Basic Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;

    d.eat();
    d.bark();

    return 0;
}
```

### Output

```text
Animal is eating
Dog is barking
```

### Explanation

- `Animal` is the base class.
- `Dog` is the derived class.
- `Dog` publicly inherits from `Animal`.
- The object `d` can call both `eat()` and `bark()` because both functions are accessible.

## 5. Types of Inheritance

C++ commonly describes five inheritance structures.

### 1. Single Inheritance

One derived class inherits from one base class.

```text
Animal
   |
   Dog
```

### 2. Multilevel Inheritance

A class inherits from a derived class, forming a chain.

```text
Animal
   |
   Dog
   |
 Puppy
```

### 3. Multiple Inheritance

One derived class inherits from more than one base class.

```text
 Father     Mother
     \       /
       Child
```

### 4. Hierarchical Inheritance

Multiple derived classes inherit from the same base class.

```text
       Animal
       /    \
     Dog    Cat
```

### 5. Hybrid Inheritance

A combination of two or more inheritance structures.

```text
       A
      / \
     B   C
      \ /
       D
```

The final structure represents a diamond-shaped inheritance relationship. Virtual inheritance can be used to share a single common base-class subobject in this pattern.

## 6. Example of Multilevel Inheritance

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping" << endl;
    }
};

int main() {
    Puppy p;

    p.eat();
    p.bark();
    p.weep();

    return 0;
}
```

### Output

```text
Eating
Barking
Weeping
```

The `Puppy` object can access the inherited public functions from both `Dog` and `Animal`.

## 7. Access Modes in Inheritance

The inheritance mode affects how base-class public and protected members are accessed through the derived class.

| Base class member | Public inheritance | Protected inheritance | Private inheritance |
|---|---|---|---|
| `public` | `public` | `protected` | `private` |
| `protected` | `protected` | `protected` | `private` |
| `private` | Not directly accessible in the derived class | Not directly accessible in the derived class | Not directly accessible in the derived class |

Private base-class members still exist within the base-class subobject, but derived-class member functions cannot access them directly.

**Important:** For a `class`, the default inheritance mode is `private`. For a `struct`, the default inheritance mode is `public`.

## 8. Advantages of Inheritance

1. **Code reusability:** Common functionality can be reused.
2. **Less duplication:** Shared behaviour can be defined in a base class.
3. **Extensibility:** Derived classes can add their own features.
4. **Organization:** Related classes can be arranged in a hierarchy.
5. **Polymorphism:** Inheritance supports runtime polymorphism when combined with virtual functions.

## 9. Important Points

- Inheritance establishes a relationship between classes.
- A base class provides features that a derived class can inherit.
- C++ supports five commonly described inheritance structures.
- Access modes affect the accessibility of inherited members.
- Private members of a base class cannot be accessed directly by derived-class member functions.
- Public inheritance often models an "is-a" relationship.

## 10. Practice Questions

1. What is inheritance?
2. Define base class and derived class.
3. Explain the five types of inheritance.
4. What is the difference between single and multilevel inheritance?
5. What is multiple inheritance?
6. Explain hierarchical inheritance with an example.
7. What is hybrid inheritance?
8. Differentiate between public, protected, and private inheritance.
9. What is the default inheritance mode for a class?
10. Write a program demonstrating multilevel inheritance.
11. Can a derived class directly access private members of its base class?
12. How does inheritance support code reusability?

---

**Next Topic:** Polymorphism in C++
