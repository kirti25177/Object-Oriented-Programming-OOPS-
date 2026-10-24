# Abstraction in C++

## 1. What Is Abstraction?

Abstraction is one of the four main pillars of Object-Oriented Programming (OOP).

It means **hiding implementation details and showing only the essential features** to the user.

The user knows what an operation does without needing to understand all the internal steps.

## 2. Real-Life Example

Consider an ATM machine.

You can:
- Enter your PIN.
- Check your balance.
- Withdraw money.

You do not need to understand the internal banking network, database queries, or transaction processing to use the ATM.

The ATM provides a simple interface while hiding complex implementation details.

## 3. Abstraction in C++

Abstraction can be implemented using:
- Classes and public member functions.
- Access specifiers.
- Abstract classes and pure virtual functions.

## 4. Example Using a Class

```cpp
#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    void heatWater() {
        cout << "Heating water" << endl;
    }

    void brewCoffee() {
        cout << "Brewing coffee" << endl;
    }

public:
    void makeCoffee() {
        heatWater();
        brewCoffee();
        cout << "Coffee is ready!" << endl;
    }
};

int main() {
    CoffeeMachine machine;
    machine.makeCoffee();

    return 0;
}
```

### Output

```text
Heating water
Brewing coffee
Coffee is ready!
```

### Explanation

- `heatWater()` and `brewCoffee()` are private implementation details.
- `makeCoffee()` is the public interface.
- The user calls `makeCoffee()` without needing to call each internal operation separately.

The class exposes a simple operation while hiding the internal steps.

## 5. Abstract Classes

An abstract class is a class that cannot be instantiated directly.

In C++, a class becomes abstract when it has at least one pure virtual function.

### What Is a Pure Virtual Function?

A pure virtual function is declared using `= 0`.

### Syntax

```cpp
class Shape {
public:
    virtual void draw() = 0;
};
```

Here, `draw()` is a pure virtual function, so `Shape` is an abstract class.

## 6. Example of an Abstract Class

```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();

    return 0;
}
```

### Output

```text
Drawing a circle
```

### Explanation

- `Shape` declares a common interface using a pure virtual function.
- `Shape` cannot be instantiated directly.
- `Circle` inherits from `Shape` and overrides `draw()`.
- The `override` keyword helps the compiler verify that the function overrides a virtual function from the base class.

A derived class that does not implement all inherited pure virtual functions also remains abstract.

## 7. Abstraction vs Encapsulation

| Abstraction | Encapsulation |
|---|---|
| Hides implementation details and exposes essential operations. | Bundles data and related functions into a class and controls access. |
| Focuses on what an object does. | Focuses on organizing and protecting an object's state and operations. |
| Abstract classes and interfaces are common techniques. | Classes and access specifiers are common techniques. |
| Example: A `Shape` interface provides `draw()`. | Example: A bank account keeps its balance private. |

## 8. Advantages of Abstraction

1. Reduces unnecessary complexity for users.
2. Provides a clear public interface.
3. Makes implementation easier to change independently.
4. Encourages consistent interfaces across related classes.
5. Helps organize large programs.

## 9. Important Points

- Abstraction hides implementation details.
- A public interface exposes essential functionality.
- Abstract classes cannot be instantiated directly.
- A pure virtual function is declared with `= 0`.
- Derived classes can implement inherited pure virtual functions.
- Abstraction and encapsulation are related but different concepts.

## 10. Practice Questions

1. Define abstraction in OOP.
2. Give a real-life example of abstraction.
3. How can abstraction be implemented in C++?
4. What is an abstract class?
5. What is a pure virtual function?
6. Can an abstract class be instantiated directly?
7. What does `virtual void draw() = 0;` mean?
8. Differentiate between abstraction and encapsulation.
9. Create an abstract class `Vehicle` with a pure virtual function `start()`.
10. Create `Car` and `Bike` classes that implement `start()`.

---

**Next Topic:** Inheritance in C++
