# Important OOPs Interview Questions and Answers in C++

This file contains commonly asked Object-Oriented Programming (OOP) interview questions, with short and beginner-friendly answers.

## 1. What Is OOP?

Object-Oriented Programming is a programming paradigm that organizes code around classes and objects.

Its four main pillars are encapsulation, abstraction, inheritance, and polymorphism.

## 2. What Is a Class?

A class is a user-defined type that defines data members and member functions.

```cpp
class Student {
public:
    string name;
    void study() {}
};
```

## 3. What Is an Object?

An object is an instance of a class.

```cpp
Student s1;
```

Here, `s1` is an object of the `Student` class.

## 4. What Is the Difference Between a Class and an Object?

| Class | Object |
|---|---|
| Defines a type or blueprint | Instance of a class |
| Specifies members | Has its own non-static member state |
| Example: `Student` | Example: `Student s1;` |

## 5. What Are Access Specifiers?

Access specifiers control the accessibility of class members.

- `public`: Accessible wherever permitted by the program's access rules.
- `private`: Accessible from member functions and friends of the class.
- `protected`: Accessible from the class, its friends, and derived classes, subject to C++ access rules.

## 6. What Is a Constructor?

A constructor is a special member function called when an object is initialized. It has the same name as the class and no return type.

```cpp
class Student {
public:
    Student() {
        cout << "Constructor called";
    }
};
```

## 7. What Is a Destructor?

A destructor is a special member function used for cleanup when an object is destroyed. It has the class name preceded by `~` and no return type or parameters.

```cpp
class Student {
public:
    ~Student() {
        cout << "Destructor called";
    }
};
```

## 8. What Are the Types of Constructors?

Common constructor categories include:

- Default constructor
- Parameterized constructor
- Copy constructor
- Move constructor (modern C++)

A constructor can also be overloaded.

## 9. Can a Constructor Be Overloaded?

Yes. A class can have multiple constructors with different parameter lists.

```cpp
class Student {
public:
    Student() {}
    Student(int age) {}
};
```

## 10. Can a Constructor Be Virtual?

No. Constructors cannot be virtual because an object must be constructed before its virtual behavior can be used.

Destructors can be virtual.

## 11. What Is Encapsulation?

Encapsulation combines data and functions in a class and controls access to the data.

Example: Making a bank account's balance private and providing public functions to deposit or withdraw money.

## 12. What Is Abstraction?

Abstraction exposes essential functionality while hiding unnecessary implementation details.

Example: Calling a function to start a car without needing to know every detail of its internal mechanism.

## 13. What Is Inheritance?

Inheritance allows a derived class to acquire accessible members and behavior from a base class.

```cpp
class Animal {};
class Dog : public Animal {};
```

Here, `Dog` publicly inherits from `Animal`.

## 14. What Are the Types of Inheritance?

1. Single
2. Multiple
3. Multilevel
4. Hierarchical
5. Hybrid

## 15. What Is Polymorphism?

Polymorphism means one interface or operation can represent different behaviors.

Two major forms are:

- Compile-time polymorphism
- Run-time polymorphism

## 16. What Is Function Overloading?

Function overloading means defining multiple functions with the same name but different parameter lists.

```cpp
int add(int a, int b);
double add(double a, double b);
```

Return type alone cannot distinguish overloaded functions.

## 17. What Is Function Overriding?

Function overriding occurs when a derived class provides its own implementation of an inherited virtual function with a matching signature.

```cpp
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
```

## 18. What Is a Virtual Function?

A virtual function is a member function that supports dynamic dispatch when called appropriately through a base-class pointer or reference.

It allows the derived implementation to run based on the actual object type.

## 19. What Is a Pure Virtual Function?

A pure virtual function is declared by assigning `= 0` in its declaration.

```cpp
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() = default;
};
```

A class with a pure virtual function is abstract and cannot be instantiated directly.

## 20. What Is an Abstract Class?

An abstract class is a class that cannot be instantiated directly, typically because it has at least one pure virtual function.

It can provide a common interface for derived classes.

## 21. What Is the Difference Between Overloading and Overriding?

| Overloading | Overriding |
|---|---|
| Same name, different parameter lists | Derived class redefines an inherited virtual function |
| Compile-time polymorphism | Commonly supports run-time polymorphism |
| Can occur in the same class | Requires an inheritance relationship |

## 22. What Is the `this` Pointer?

The `this` pointer refers to the current object inside a non-static member function.

```cpp
class Student {
public:
    int age;

    void setAge(int age) {
        this->age = age;
    }
};
```

Here, `this->age` refers to the data member, while `age` refers to the parameter.

## 23. What Is a Static Data Member?

A static data member belongs to the class and is shared by all objects of that class.

```cpp
class Student {
public:
    static int count;
};

int Student::count = 0;
```

## 24. What Is a Friend Function?

A friend function is a non-member function that is granted access to a class's private and protected members.

```cpp
class Demo {
private:
    int x = 10;

    friend void show(const Demo& d);
};

void show(const Demo& d) {
    cout << d.x;
}
```

Friendship should be used carefully because it grants access beyond the usual class interface.

## 25. What Is Operator Overloading?

Operator overloading defines how existing operators behave with user-defined types.

Example: Overloading `+` to add two objects representing complex numbers.

## 26. What Is a Copy Constructor?

A copy constructor initializes a new object from an existing object of the same class.

```cpp
Student s2 = s1;
```

This initialization can invoke the copy constructor.

## 27. What Is the Difference Between Shallow Copy and Deep Copy?

- **Shallow copy:** Copies member values, including pointer addresses.
- **Deep copy:** Duplicates the dynamically allocated data so that each object can own independent memory.

Incorrect shallow copying of owned pointers can cause double deletion and other memory-management errors.

## 28. What Is an Inline Function?

An inline function is a function declared with the `inline` specifier. The specifier primarily permits multiple definitions across translation units under the One Definition Rule; it does not guarantee that the compiler will replace the function call with its body.

Functions defined inside a class definition are generally implicitly inline.

## 29. What Is the Difference Between `struct` and `class` in C++?

The main differences are their default access levels and default inheritance modes.

| `struct` | `class` |
|---|---|
| Members are public by default | Members are private by default |
| Inheritance is public by default | Inheritance is private by default |

Both can have constructors, member functions, inheritance, and access specifiers.

## 30. Why Is a Virtual Destructor Important?

When an object of a derived class is deleted through a base-class pointer, the base class should have a virtual destructor if polymorphic deletion is intended.

```cpp
class Base {
public:
    virtual ~Base() = default;
};
```

This allows the derived destructor to run correctly during deletion through the base pointer.

## 31. What Is the Difference Between `private` and `protected`?

- `private`: Directly accessible only to the class's members and friends.
- `protected`: Also accessible to derived-class members, subject to C++ access rules.

Neither is directly accessible from ordinary outside code through an object.

## 32. What Is the Diamond Problem?

The diamond problem occurs in multiple inheritance when a class inherits from two classes that both derive from the same base class. Without virtual inheritance, the final derived class can contain two separate base-class subobjects.

Virtual inheritance can provide one shared base-class subobject.

## 33. What Is the Difference Between Early Binding and Late Binding?

- **Early binding:** The function call is resolved at compile time.
- **Late binding:** The function implementation is selected at run time, as with virtual function dispatch.

## 34. Can Static Functions Be Virtual?

No. Static member functions do not belong to a particular object and cannot be declared virtual.

## 35. Can We Create an Object of an Abstract Class?

No. An abstract class cannot be instantiated directly, but pointers and references to it can be used to refer to objects of concrete derived classes.

---

## Quick Interview Revision

| Concept | One-line definition |
|---|---|
| Class | Defines a user-defined type |
| Object | Instance of a class |
| Encapsulation | Bundling data and methods with controlled access |
| Abstraction | Exposing essentials and hiding implementation details |
| Inheritance | Deriving a class from another class |
| Polymorphism | Different behaviors through a common interface |
| Constructor | Initializes an object |
| Destructor | Cleans up an object |
| Virtual function | Supports dynamic dispatch |
| Pure virtual function | Declares an interface that makes the class abstract |
| Copy constructor | Initializes an object from another object |
| Friend function | Non-member function granted special access |
| Static member | Belongs to the class rather than each object |

