# Constructors and Destructors in C++

## 1. What Is a Constructor?

A constructor is a special member function of a class that is automatically called when an object is created.

It is mainly used to initialize an object's data members.

### Rules of a Constructor

- Its name must be the same as the class name.
- It has no return type, not even `void`.
- It is called automatically when an object is created.
- Constructors can be overloaded.

## 2. Default Constructor

A default constructor is a constructor that can be called without passing arguments.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student() {
        age = 18;
    }
};

int main() {
    Student s1;
    cout << s1.age;
    return 0;
}
```

Output:

```text
18
```

Explanation: When `s1` is created, the constructor initializes `age` to `18`.

Note: If no constructor is declared, the compiler may implicitly declare a default constructor when the language rules permit it.

## 3. Parameterized Constructor

A parameterized constructor accepts arguments to initialize an object with specific values.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1("Kirti", 18);
    Student s2("Aman", 20);

    s1.display();
    s2.display();

    return 0;
}
```

Output:

```text
Kirti 18
Aman 20
```

Explanation: The arguments passed during object creation initialize each object's data members.

## 4. Constructor Overloading

Constructor overloading means defining multiple constructors in the same class with different parameter lists.

```cpp
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number() {
        value = 0;
    }

    Number(int x) {
        value = x;
    }
};

int main() {
    Number n1;
    Number n2(50);

    cout << n1.value << endl;
    cout << n2.value << endl;

    return 0;
}
```

Output:

```text
0
50
```

Explanation:
- `Number n1;` calls the default constructor.
- `Number n2(50);` calls the parameterized constructor.

## 5. Copy Constructor

A copy constructor initializes an object using another object of the same class.

Its usual form is:

```cpp
ClassName(const ClassName& other);
```

Example:

```cpp
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int x) {
        value = x;
    }

    Number(const Number& other) {
        value = other.value;
    }
};

int main() {
    Number n1(100);
    Number n2(n1);

    cout << n2.value;
    return 0;
}
```

Output:

```text
100
```

Explanation: `n2` is initialized using the value stored in `n1`.

## 6. What Is a Destructor?

A destructor is a special member function called automatically when an object's lifetime ends.

It is commonly used to release resources owned by an object.

### Rules of a Destructor

- Its name is the class name preceded by `~`.
- It has no return type.
- It takes no parameters.
- A class can have only one destructor; destructors cannot be overloaded.

## 7. Destructor Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d1;
    cout << "Inside main" << endl;
    return 0;
}
```

Output:

```text
Constructor called
Inside main
Destructor called
```

Explanation: The constructor runs when `d1` is created. When `main()` ends, the local object's lifetime ends and its destructor is called.

## 8. Constructor vs Destructor

| Constructor | Destructor |
|---|---|
| Initializes an object. | Performs cleanup when an object's lifetime ends. |
| Has the same name as the class. | Has the class name preceded by `~`. |
| Can accept parameters. | Takes no parameters. |
| Can be overloaded. | Cannot be overloaded. |
| Called during object initialization. | Called when the object's lifetime ends. |

## 9. Important Points

- Constructors initialize objects.
- A parameterized constructor accepts arguments.
- Constructor overloading provides different ways to initialize objects.
- A copy constructor initializes an object from another object.
- Destructors are called when object lifetimes end.
- Local automatic objects are generally destroyed in reverse order of their completed construction.

## 10. Practice Questions

1. What is a constructor?
2. Why does a constructor have no return type?
3. Differentiate between default and parameterized constructors.
4. What is constructor overloading?
5. What is a copy constructor?
6. What is a destructor?
7. Can constructors be overloaded?
8. Can destructors be overloaded?
9. Write a program using a parameterized constructor to initialize an `Employee` object.
10. Write a program that demonstrates the order of constructor and destructor calls for two local objects.

---

**Next Topic:** The `this` Pointer in C++
