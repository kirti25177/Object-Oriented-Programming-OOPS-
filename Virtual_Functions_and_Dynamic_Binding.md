# Virtual Functions and Dynamic Binding in C++

## 1. What Is a Virtual Function?

A virtual function is a member function declared with the `virtual` keyword in a base class that can be overridden in a derived class.

It enables runtime polymorphism when called through a base-class pointer or reference.

## 2. Syntax

```cpp
class Base {
public:
    virtual void display() {
        // Base class implementation
    }
};
```

A derived class can override the virtual function to provide its own implementation.

## 3. Example of a Virtual Function

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
    Animal* ptr = &d;

    ptr->sound();

    return 0;
}
```

### Output

```text
Dog barks
```

### Explanation

- `Animal` is the base class.
- `Dog` is the derived class.
- `sound()` is declared `virtual` in `Animal`.
- `ptr` is a base-class pointer pointing to a `Dog` object.
- The call `ptr->sound()` executes `Dog::sound()`.

The implementation is selected according to the actual object type because the function is virtual.

## 4. What Is Dynamic Binding?

Dynamic binding, also called dynamic dispatch, means selecting the appropriate overridden virtual function at runtime based on the object's dynamic type.

It is a key mechanism behind runtime polymorphism in C++.

### Example

```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    Shape* ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();

    return 0;
}
```

### Output

```text
Drawing a circle
Drawing a rectangle
```

The same base-class pointer calls different implementations as it points to different objects.

## 5. Static Binding vs Dynamic Binding

| Static Binding | Dynamic Binding |
|---|---|
| Function selection is determined at compile time. | Virtual function dispatch is determined at runtime. |
| Common with ordinary non-virtual function calls. | Common with virtual function calls through base-class pointers or references. |
| Does not require runtime polymorphism. | Supports runtime polymorphism. |
| Example: an ordinary non-virtual member function call. | Example: an overridden virtual function call through a base-class pointer. |

Note: The exact function-call behaviour depends on the expression and context. A virtual function called with a qualified name, such as `obj.Base::display()`, suppresses virtual dispatch for that call.

## 6. What Happens Without the Virtual Keyword?

Consider this example:

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    Base* ptr = &d;

    ptr->display();

    return 0;
}
```

### Output

```text
Base class
```

Because `display()` is non-virtual, the call through `Base*` uses the base-class implementation.

If `display()` were virtual, the call would use the derived implementation.

## 7. Virtual Destructors

When a derived object may be deleted through a base-class pointer, the base class should generally have a virtual destructor.

```cpp
class Base {
public:
    virtual ~Base() = default;
};
```

This ensures that destruction through a base-class pointer follows the correct polymorphic destruction rules.

## 8. Advantages of Virtual Functions

1. Enable runtime polymorphism.
2. Allow derived classes to customize inherited behaviour.
3. Support common interfaces for different object types.
4. Make programs easier to extend.
5. Reduce the need for type-specific conditional logic.

## 9. Important Points

- A virtual function is declared using `virtual`.
- Derived classes can override virtual functions.
- Dynamic binding selects the appropriate overridden implementation.
- Base-class pointers and references commonly enable runtime polymorphism.
- The `override` keyword helps verify overriding.
- A polymorphic base class should generally have a virtual destructor if it may be deleted through a base pointer.

## 10. Practice Questions

1. What is a virtual function?
2. What is dynamic binding?
3. How do virtual functions support runtime polymorphism?
4. What is the difference between static and dynamic binding?
5. What happens when a non-virtual function is called through a base-class pointer?
6. What is the purpose of the `override` keyword?
7. Why is a virtual destructor important?
8. Write a program demonstrating dynamic binding with `Animal`, `Dog`, and `Cat`.
9. What is the difference between a base-class pointer's static type and the pointed-to object's dynamic type?

---

**Next Topic:** Friend Functions and Friend Classes in C++
