# Operator Overloading in C++

## 1. What Is Operator Overloading?

**Operator overloading** allows us to define how an existing C++ operator behaves when it is used with objects of a user-defined class.

For example, the `+` operator normally adds numbers. We can overload it to add two objects representing complex numbers.

### Why Do We Use It?

- Makes code more readable.
- Allows operators to work naturally with class objects.
- Supports compile-time polymorphism.
- Makes user-defined types easier to work with.

## 2. Syntax of Operator Overloading

```cpp
return_type operator symbol(parameters) {
    // Function body
}
```

For example:

```cpp
Complex operator+(const Complex& obj);
```

Here, `operator+` defines the behavior of the `+` operator for `Complex` objects.

## 3. Example: Overloading the `+` Operator

```cpp
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator+(const Number& obj) {
        return Number(value + obj.value);
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

**Output:**

```text
30
```

### Explanation

When the compiler encounters:

```cpp
Number n3 = n1 + n2;
```

It uses the overloaded operator function. For this member-function overload, the expression is equivalent to:

```cpp
Number n3 = n1.operator+(n2);
```

The function adds the two `value` members and returns a new `Number` object.

## 4. Overloading the `<<` Operator

The insertion operator `<<` is commonly used with `cout`. It can also be overloaded to print objects.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    friend ostream& operator<<(ostream& out, const Student& s) {
        out << s.age;
        return out;
    }
};

int main() {
    Student s(20);
    cout << s;

    return 0;
}
```

**Output:**

```text
20
```

### Explanation

- `ostream` represents an output stream, such as `cout`.
- The function receives the output stream and the student object.
- It prints the student's age and returns the stream.
- Returning the stream allows chained output, such as `cout << s << endl;`.

## 5. Types of Operator Overloading

### A. Unary Operator Overloading

A unary operator works on one operand.

Examples:
- `++`
- `--`
- unary `-`

Example:

```cpp
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator-() {
        return Number(-value);
    }
};

int main() {
    Number n(5);
    Number result = -n;

    cout << result.value;
    return 0;
}
```

**Output:**

```text
-5
```

### B. Binary Operator Overloading

A binary operator works on two operands.

Examples:
- `+`
- `-`
- `*`
- `==`

The `+` example in Section 3 demonstrates binary operator overloading.

## 6. Rules of Operator Overloading

1. Only existing C++ operators can be overloaded; new operator symbols cannot be created.
2. At least one operand must be a user-defined type when overloading an operator.
3. You cannot change an operator's precedence or associativity.
4. You cannot change the number of operands an operator takes.
5. You cannot overload certain operators, including `::`, `.`, `.*`, and `?:`.
6. You cannot overload an operator to change its behavior for built-in types alone.
7. Some operators, such as `=`, `[]`, `()`, and `->`, must be overloaded as member functions.

## 7. Operator Overloading vs Function Overloading

| Feature | Operator overloading | Function overloading |
|---|---|---|
| Purpose | Defines operator behavior for user-defined types | Defines multiple functions with the same name |
| Example | `operator+()` | `add(int, int)` and `add(double, double)` |
| Polymorphism | Compile-time polymorphism | Compile-time polymorphism |

## 8. Important Exam Points

1. Operator overloading is an example of compile-time polymorphism.
2. It allows operators to work with user-defined objects.
3. The keyword `operator` is used in the function declaration.
4. Operator overloading cannot change precedence, associativity, or arity.
5. The `<<` operator is commonly overloaded as a non-member function, often declared as a friend.
6. Operators cannot be overloaded for built-in types alone.

## 9. Quick Revision

- **Operator overloading:** Giving an existing operator behavior for a user-defined type.
- **Unary operator:** Works on one operand.
- **Binary operator:** Works on two operands.
- **`operator+`:** Defines behavior for `+`.
- **Compile-time polymorphism:** Operator overloading is resolved at compile time.

