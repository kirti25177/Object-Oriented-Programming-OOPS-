# Introduction to Object-Oriented Programming (OOP) in C++

## 1. What is OOP?

Object-Oriented Programming (OOP) is a programming approach that organizes code around **objects** rather than only functions.

An object represents an entity that has:
- **Data (attributes):** Properties of an object.
- **Methods (behaviours):** Functions that describe what an object can do.

C++ supports both procedural programming and object-oriented programming.

## 2. Why Do We Need OOP?

OOP helps us:
- Organize code into reusable components.
- Improve code readability and maintainability.
- Protect data through encapsulation and access control.
- Reuse existing code using inheritance.
- Implement different behaviours through polymorphism.

## 3. Real-Life Example

Consider a car.

**Attributes:**
- Brand
- Colour
- Speed

**Behaviours:**
- Start
- Accelerate
- Brake

In C++, we can represent a car using a class and create individual cars as objects.

## 4. Class and Object

### Class

A class is a user-defined data type that groups data members and member functions together.

### Object

An object is an instance of a class. Each object has its own non-static data members.

### Example in C++

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1;

    c1.brand = "Toyota";
    c1.speed = 100;

    c1.display();

    return 0;
}
```

### Output

```text
Brand: Toyota
Speed: 100 km/h
```

### Explanation

- `class Car` defines a class named `Car`.
- `brand` and `speed` are data members.
- `display()` is a member function.
- `Car c1;` creates an object named `c1`.
- The dot (`.`) operator accesses the object's public members.
- `c1.display()` calls the member function.

## 5. Four Main Pillars of OOP

| Pillar | Meaning |
|---|---|
| Encapsulation | Bundling data and methods together and controlling access to data. |
| Abstraction | Hiding implementation details and exposing essential functionality. |
| Inheritance | Creating a class based on an existing class. |
| Polymorphism | Allowing one interface or operation to have different behaviours. |

Detailed notes and examples for each pillar will be covered in separate files.

## 6. Advantages of OOP

1. **Code reusability:** Existing classes can be reused.
2. **Modularity:** Programs can be divided into manageable classes.
3. **Maintainability:** Changes can be easier to manage in well-designed programs.
4. **Data protection:** Access specifiers help control access to class members.
5. **Extensibility:** New functionality can be added through suitable class designs.

## 7. OOP vs Procedural Programming

| Procedural Programming | Object-Oriented Programming |
|---|---|
| Organizes programs mainly around functions. | Organizes programs around classes and objects. |
| Focuses on procedures and steps. | Focuses on objects, data, and behaviour. |
| Data protection depends on the techniques used. | Provides access control through features such as `private` and `public`. |
| Example: C-style procedural programs. | Example: C++ programs using classes and objects. |

**Note:** C++ supports both programming styles, and real-world programs often combine them.

## 8. Key Takeaways

- OOP stands for Object-Oriented Programming.
- A class defines the structure and behaviour of objects.
- An object is an instance of a class.
- Data members store information; member functions define behaviour.
- The four main pillars are encapsulation, abstraction, inheritance, and polymorphism.

## 9. Practice Questions

1. What is Object-Oriented Programming?
2. Define a class and an object.
3. Differentiate between a class and an object.
4. What are data members and member functions?
5. Name and explain the four pillars of OOP.
6. Write a C++ program that creates a `Student` class with a name, roll number, and a function to display them.
