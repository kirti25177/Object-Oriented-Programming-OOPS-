# Classes and Objects in C++

## 1. What Is a Class?

A **class** is a user-defined data type that groups data members and member functions into a single unit.

It acts as a blueprint for creating objects.

### Syntax

```cpp
class ClassName {
public:
    // Data members
    // Member functions
};
```

**Important:** A class definition ends with a semicolon (`;`).

## 2. What Is an Object?

An **object** is an instance of a class. It represents an individual entity with its own state and access to the class's behaviours.

For example, if `Student` is a class, `s1` and `s2` can be two different objects of that class.

```cpp
Student s1;
Student s2;
```

Each object has its own non-static data members.

## 3. First C++ Example

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Kirti";
    s1.rollNo = 101;

    s1.display();

    return 0;
}
```

### Output

```text
Name: Kirti
Roll Number: 101
```

### Explanation

- `class Student` defines a class named `Student`.
- `name` and `rollNo` are data members.
- `display()` is a member function.
- `Student s1;` creates an object.
- The dot (`.`) operator accesses public members through an object.
- `s1.display()` calls the member function.

## 4. Creating Multiple Objects

A single class can be used to create multiple objects.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void display() {
        cout << name << " scored " << marks << endl;
    }
};

int main() {
    Student s1, s2;

    s1.name = "Aman";
    s1.marks = 85;

    s2.name = "Riya";
    s2.marks = 92;

    s1.display();
    s2.display();

    return 0;
}
```

### Output

```text
Aman scored 85
Riya scored 92
```

**Key point:** Both objects belong to the same class, but their non-static data members can hold different values.

## 5. Access Specifiers

Access specifiers control the accessibility of class members.

| Specifier | Accessibility |
|---|---|
| `public` | Accessible from anywhere permitted by the program's access rules. |
| `private` | Accessible within the class and its friends. |
| `protected` | Accessible within the class, its friends, and derived classes, subject to inheritance rules. |

### Example

```cpp
#include <iostream>
using namespace std;

class Demo {
private:
    int secret = 10;

public:
    void display() {
        cout << secret << endl;
    }
};

int main() {
    Demo d;
    d.display();

    // cout << d.secret; // Error: secret is private

    return 0;
}
```

### Output

```text
10
```

**Remember:** Members of a `class` are `private` by default. Members of a `struct` are `public` by default.

## 6. Data Members and Member Functions

### Data Members

Variables declared inside a class are called data members.

```cpp
int age;
string name;
```

### Member Functions

Functions declared as members of a class define its operations or behaviours.

```cpp
void display() {
    cout << name;
}
```

Member functions can access the class's private members.

## 7. The Dot Operator (`.`)

The dot operator is used to access accessible members through an object.

```cpp
Student s1;
s1.name = "Aman";
s1.display();
```

Here, `s1` is the object, and `name` and `display()` are its members.

## 8. Class vs Object

| Class | Object |
|---|---|
| A blueprint or user-defined type. | An instance of a class. |
| Defines possible data and behaviours. | Has its own non-static data members. |
| Declared using the `class` keyword. | Created using the class type. |
| Example: `Student` | Example: `Student s1;` |

## 9. Important Points

- A class groups data and functions.
- An object is an instance of a class.
- Multiple objects can be created from one class.
- Each object has its own non-static data members.
- The dot operator accesses accessible object members.
- A class definition must end with a semicolon.
- Access specifiers control how class members can be accessed.

## 10. Practice Questions

1. What is a class in C++?
2. What is an object?
3. Explain the difference between a class and an object.
4. What are data members and member functions?
5. Explain `public`, `private`, and `protected`.
6. What are the default access specifiers for `class` and `struct`?
7. Write a program to create an `Employee` class with a name, ID, and salary.
8. Create two objects of a `Rectangle` class and calculate their areas.
9. What is the purpose of the dot operator?
10. Can two objects of the same class have different values for their non-static data members?

---

**Next Topic:** Constructors and Destructors in C++
